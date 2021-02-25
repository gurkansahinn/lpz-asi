#include <a_samp>
#include <socket>

main(){}

enum ASI_USER_INFO
{
	name[24],
	onUse
};

new Socket: server;
new ASI_USERS[MAX_PLAYERS][ASI_USER_INFO];
new CanPlayerJoin[MAX_PLAYERS];

public OnGameModeInit ()
{
 	server = socket_create(TCP);
 	
 	if(is_socket_valid (server))
 	{
 	    printf("[LAST-PROJECT-Z: SOCKET] Socket server is created succesfully.");
 	    socket_set_max_connections(server, MAX_PLAYERS);
 	    socket_listen(server, 7778);
 	}
 	else
 	{
 	    SendRconCommand("gmx");
 	}
 	
 	ASI_USERS[0][name] = EOS;
 	ASI_USERS[0][onUse] = 0;
 	
	return 1;
}

public OnGameModeExit ()
{
	socket_destroy(server);
	return 1;
}

public OnPlayerConnect (playerid)
{
	// kahrolasý string equality checki halledemedim..
	
	/*new pname[MAX_PLAYER_NAME];
	GetPlayerName(playerid, pname, sizeof(pname));

	CanPlayerJoin[playerid] = 0;
	
	for (new i = 0; i < MAX_PLAYERS; i++) if(ASI_USERS[i][onUse])
	{
	    if (!strcmp(pname, ASI_USERS[i][name]))
	    {
	        CanPlayerJoin[playerid] = 1;
	        set_slot_free(i);
	        break;
	    }
	}
	
	if(CanPlayerJoin[playerid] == 0)
	{
	    Kick(playerid);
	}*/
	return 1;
}

public onSocketAnswer (Socket:id, data[], data_len) // called when socket_connect() has been used and the server sends data
{
	return 1;
}

public onSocketClose (Socket:id)
{
	printf("[LAST-PROJECT-Z: SOCKET] Server has been shut down.");
	return 1;
}

public onSocketRemoteConnect (Socket:id, remote_client[], remote_clientid) // called when a remote client connects to our socket server
{
	return 1;
}

public onSocketRemoteDisconnect (Socket:id, remote_clientid) // called when a remote client disconnects from our socket server
{
	return 1;
}

public onSocketReceiveData (Socket:id, remote_clientid, data[], data_len) // called when a remote client sends data
{
	strdel(data, 0, 14);
	
	new _data[24];
	format(_data, sizeof(_data), "%s", data);
	
	ASI_USERS[free_index()][onUse] = 1;
	ASI_USERS[free_index()][name] = _data;
	return 1;
}

free_index ()
{
	for(new index = 0; index < MAX_PLAYERS; index++)
	{
	    if(!ASI_USERS[index][onUse])
	    {
	        return index;
	    }
	}
	return -1;
}

set_slot_free (index)
{
	ASI_USERS[index][onUse] = 0;
	ASI_USERS[index][name] = EOS;
	return 1;
}
