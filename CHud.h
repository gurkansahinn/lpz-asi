#pragma once

enum eHUDComponent : unsigned char
{
	ALL,
	AMMO,
	WEAPON,
	HEALTH,
	BREATH,
	ARMOUR,
	MINIMAP,
	CROSSHAIR,
	MONEY
};

#pragma pack(push, 1)
struct sHUDComponent
{
	unsigned long ulFunc;
	unsigned long ulOpcodes[3];
};
#pragma pack(pop)

class CHUD
{
public:
	static void Initialize();
	static void ToggleComponent(unsigned char ucComponent, bool bToggle);

private:
	static sHUDComponent components[];

};