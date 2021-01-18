/*
    Plugin-SDK (Grand Theft Auto 3) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "PluginBase.h"

class PLUGIN_API CNodeAddress
{
public:
    short m_wAreaId;
    short m_wNodeId;

    CNodeAddress() : m_wAreaId(-1), m_wNodeId(-1) {}
};

VALIDATE_SIZE(CNodeAddress, 0x4);
