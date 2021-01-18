#include <string>

#include "Client.h"
#include "CLog.h"

void CLog::SendInfoMessage(std::string messageInfo)
{
	MessageBox(NULL, messageInfo.c_str(), "LAST PROJECT Z - Development", MB_OK | MB_SETFOREGROUND);
}
