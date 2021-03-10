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
#include "Include/discord-sdk/include/discord_rpc.h"
#include "Include/discord-sdk/include/discord_register.h"

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")


#define LPZ_SERVER_IP	    "127.0.0.1"
#define LPZ_SERVER_PORT     7778


namespace LPZ
{
    int sock = 0;

    void RichPresence()
    {
        std::string temp = "" + CCmdlineParams::GetArgumentValue(SAMP_PARAM_UNAME);

        char uName[24];
        strcpy(uName, temp.c_str());

        DiscordEventHandlers Handle;
        memset(&Handle, 0, sizeof(Handle));
        Discord_Initialize("816427980489228369", &Handle, 1, NULL);

        DiscordRichPresence discordPresence;
        memset(&discordPresence, 0, sizeof(discordPresence));
        discordPresence.state = "Trying to survive";
        discordPresence.details = uName;
        discordPresence.largeImageKey = "lastz";
        discordPresence.largeImageText = "Last Project Z";
        discordPresence.partyId = "ae488379-351d-4a4f-ad32-2b9b01c91657";
        discordPresence.joinSecret = "MTI4NzM0OjFpMmhuZToxMjMxMjM= ";
        Discord_UpdatePresence(&discordPresence);
    }

	void Connect()
	{
        struct sockaddr_in serv_addr;

        char buffer[1024] = { 0 };

        if ((sock = socket(AF_INET, SOCK_STREAM, 0)) < 0)
        {
            CLog::SendInfoMessage("\n Socket baðlantýsý kurulamadý. \n");
            return;
        }

        serv_addr.sin_family = AF_INET;
        serv_addr.sin_port = htons(LPZ_SERVER_PORT);

        if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0)
        {
            CLog::SendInfoMessage("LPZ adresinde hata olduðundan baðlantý saðlanamadý.");
            return;
        }

        if (connect(sock, (struct sockaddr*)&serv_addr, sizeof(serv_addr)) < 0)
        {
            CLog::SendInfoMessage("\nLPZ sunucularýna baðlanýrken sorun yaþandý. \n");
            return;
        }
        
        HW_PROFILE_INFO hwProfileInfo;
        GetCurrentHwProfile(&hwProfileInfo);
        
        char data[24 + 15 + 35];
        std::string name = "LPZ_NICK_HASH" + CCmdlineParams::GetArgumentValue(SAMP_PARAM_UNAME) + ":" + hwProfileInfo.szHwProfileGuid;

        strcpy(data, name.c_str());

        send(sock, data, 72 + 1, 0);
        CLog::SendInfoMessage("LPZ sunucularýna baþarýyla baðlandýn.\nOyuna giriþ yapýyorsun.");
	}

	void Disconnect()
	{
        char data[6 + 24];
        std::string name = "DELETE" + CCmdlineParams::GetArgumentValue(SAMP_PARAM_UNAME);
        strcpy(data, name.c_str());
        send(sock, data, 30, 0);
    }
};