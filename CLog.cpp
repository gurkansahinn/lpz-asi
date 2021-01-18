#include <string>

#include "Client.h"
#include "CLog.h"

void CLog::SendServerInfo(std::string serverIp)
{
	MessageBox(NULL, serverIp.c_str(), "LAST PROJECT Z - Development", MB_OK | MB_SETFOREGROUND);
}
