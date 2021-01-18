/*
    Plugin-SDK (Grand Theft Auto 3) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CRegisteredMotionBlurStreak.h"

PLUGIN_SOURCE_FILE

int ctor_addr(CRegisteredMotionBlurStreak) = ADDRESS_BY_VERSION(0x51C350, 0x51C580, 0x51C510);
int ctor_gaddr(CRegisteredMotionBlurStreak) = GLOBAL_ADDRESS_BY_VERSION(0x51C350, 0x51C580, 0x51C510);

int addrof(CRegisteredMotionBlurStreak::Render) = ADDRESS_BY_VERSION(0x519600, 0x519830, 0x5197C0);
int gaddrof(CRegisteredMotionBlurStreak::Render) = GLOBAL_ADDRESS_BY_VERSION(0x519600, 0x519830, 0x5197C0);

void CRegisteredMotionBlurStreak::Render() {
    plugin::CallMethodDynGlobal<CRegisteredMotionBlurStreak *>(gaddrof(CRegisteredMotionBlurStreak::Render), this);
}

int addrof(CRegisteredMotionBlurStreak::Update) = ADDRESS_BY_VERSION(0x519580, 0x5197B0, 0x519740);
int gaddrof(CRegisteredMotionBlurStreak::Update) = GLOBAL_ADDRESS_BY_VERSION(0x519580, 0x5197B0, 0x519740);

void CRegisteredMotionBlurStreak::Update() {
    plugin::CallMethodDynGlobal<CRegisteredMotionBlurStreak *>(gaddrof(CRegisteredMotionBlurStreak::Update), this);
}
