/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CColSphere.h"

PLUGIN_SOURCE_FILE

int addrof(CColSphere::Set) = ADDRESS_BY_VERSION(0x411E40, 0x411E40, 0x411E40);
int gaddrof(CColSphere::Set) = GLOBAL_ADDRESS_BY_VERSION(0x411E40, 0x411E40, 0x411E40);

void CColSphere::Set(float radius, CVector &center, unsigned char material, unsigned char flag) {
    plugin::CallMethodDynGlobal<CColSphere *, float, CVector &, unsigned char, unsigned char>(gaddrof(CColSphere::Set), this, radius, center, material, flag);
}
