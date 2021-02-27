#include <a_samp>
#include <socket>

main(){}

#define MAX_CONNECTIONS MAX_PLAYERS

enum ASI_USER_INFO
{
	name[24],
	hwid[40],
	onUse
};

new
	Socket: server,
	ASI_DATA[MAX_CONNECTIONS][ASI_USER_INFO];

public OnGameModeInit()
{
 	server = socket_create(TCP);
 	
 	if(is_socket_valid(server))
 	{
 	    printf("[LAST-PROJECT-Z: SOCKET] Socket server is created succesfully.");
 	    
 	    socket_set_max_connections(server, MAX_CONNECTIONS);
 	    socket_listen(server, 7778);
 	}
 	else
 	{
 	    SendRconCommand("gmx");
	}
	return 1;
}

public OnGameModeExit()
{
	socket_destroy(server);
	return 1;
}

public OnPlayerConnect(playerid)
{
 	if(!is_using_asi(playerid))
 	{
		SendClientMessage(playerid, 0xB86654FF, "LPZ-ASI kullanmadýðýný tespit ettik. Eðer dosyalarýnda varsa eski bir sürümü kullanýyor olabilirsin.");
		SendClientMessage(playerid, 0xB86654FF, "ASI dosyasýný yükleyebilir veya güncelleyebilirsin. Böylece oyuna giriþ yapabilirsin. Þimdilik oyundan atýlýyorsun.");
		Kick(playerid);
 	}
 	else
	{
	    SendClientMessage(playerid, 0xB86654FF, "LPZ-ASI kullandýðýný tespit ettik, sunucuda oynayabilirsin. Keyifli oyunlar dileriz.");
	}
 	
	return 1;
}

public onSocketClose(Socket:id)
{
	printf("[LAST-PROJECT-Z: SOCKET] Server has been shut down.");
	return 1;
}

public onSocketReceiveData(Socket:id, remote_clientid, data[], data_len)
{
	if(id == server)
	{
		strdel(data, 0, 13);

		new
			l_name[24],
			l_hwid[40],
			hwid_index = strfind(data, ":", true);


		format(l_name, 24, "%s", data);
  		strdel(l_name, hwid_index, 50);
  		
		strdel(data, 0, hwid_index + 1);
		format(l_hwid, 40, "%s", data);

		ASI_DATA[next()][onUse] = true;
		ASI_DATA[next()][name] = l_name;
		ASI_DATA[next()][hwid] = l_hwid;
		
		printf("%s --- %s", l_name, l_hwid);
	}
	return 1;
}

is_using_asi(playerid)
{
	for(new i = 0; i < MAX_CONNECTIONS; i++)
	{
        if(strfind(ASI_DATA[i][name], get_name(playerid), true) != -1)
        {
			set_free(i);
            return 1;
        }
	}
	return 0;
}

next()
{
	for(new index = 0; index < MAX_CONNECTIONS; index++)
	{
	    if(!ASI_DATA[index][onUse])
	    {
	        return index;
	    }
	}
	return -1;
}

set_free(index)
{
	ASI_DATA[index][onUse] = false;
	ASI_DATA[index][name] = EOS;
	ASI_DATA[index][hwid] = EOS;
	return 1;
}

stock get_name(playerid)
{
	new pname[24];
	GetPlayerName(playerid, pname, 24);
	return pname;
}
