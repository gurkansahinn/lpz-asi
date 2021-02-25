#include <a_samp>
#include <socket>

main(){}

#define MAX_CONNECTIONS MAX_PLAYERS

enum ASI_USER_INFO
{
	name[24],
	onUse
};

new Socket: server, ASI_DATA[MAX_CONNECTIONS][ASI_USER_INFO];

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
 	    Kick(playerid);
 	}
 	else
	{
	    SendClientMessage(playerid, -1, "LPZ-ASI kullandýðýný tespit ettik. Sunucuda oynayabilirsin, keyifli oyunlar.");
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
	strdel(data, 0, 14);
	
	new
		buff[24];
		
	format(buff, 24, "%s", data);
	
	ASI_DATA[next()][onUse] = true;
	ASI_DATA[next()][name] = buff;
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
	return 1;
}

stock get_name(playerid)
{
	new pname[24];
	GetPlayerName(playerid, pname, 24);
	return pname;
}
