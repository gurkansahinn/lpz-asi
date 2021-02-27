#pragma once


#define _WINSOCKAPI_

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "CLog.h"
#include "CCmdlineParams.h"


#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define LPZ_SERVER_IP	    "127.0.0.1"
#define LPZ_SERVER_PORT     7778


namespace LPZ
{
    int sock = 0;

	void Connect()
	{
        struct sockaddr_in serv_addr;

        char buffer[1024] = { 0 };

        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
            CLog::SendInfoMessage("\n Socket ba�lant�s� kurulamad�. \n");
            return;
        }

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(LPZ_SERVER_PORT);

        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0)
        {
            CLog::SendInfoMessage("LPZ adresinde hata oldu�undan ba�lant� sa�lanamad�.");
            return;
        }

        if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
        {
            CLog::SendInfoMessage("\nLPZ sunucular�na ba�lan�rken sorun ya�and�. \n");
            return;
        }
        
        HW_PROFILE_INFO hwProfileInfo;
        GetCurrentHwProfile(&hwProfileInfo);
        
        char data[24 + 15 + 35];
        std::string name = "LPZ_NICK_HASH" + CCmdlineParams::GetArgumentValue(SAMP_PARAM_UNAME) + ":" + hwProfileInfo.szHwProfileGuid;

        strcpy(data, name.c_str());

        send(sock, data, 72 + 1, 0);
        CLog::SendInfoMessage("LPZ sunucular�na ba�ar�yla ba�land�n.\nOyuna giri� yap�yorsun.");

        closesocket(sock);
	}

	void Disconnect()
	{
        // plugin s�k�ld���nde
    }
};