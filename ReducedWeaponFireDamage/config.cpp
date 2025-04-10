class CfgPatches
{
	class ReducedWeaponFireDamage
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Projectiles"
		};
		ammo[]=
		{
			"Bullet_12GaugePellets",
			"Bullet_12GaugeSlug",
			"Bullet_556x45",
			"Bullet_545x39",
			"Bullet_762x54",
			"Bullet_308Win",
			"Bullet_762x39",
			"Bullet_45ACP",
			"Bullet_357",
			"Bullet_9x19",
			"Bullet_380",
			"Bullet_22",
			"Bullet_9x39AP",
			"Bullet_9x39"
		};
	};
};
class CfgAmmo
{
	class ShotgunCore;
	class Shotgun_Base;
	class DefaultAmmo;
	class BulletCore;
	class Bullet_Base;
	class Bullet_12GaugePellets: Shotgun_Base
	{
		damageBarrel=300;
		damageBarrelDestroyed=300;
	};
	class Bullet_12GaugeSlug: Bullet_Base
	{
		damageBarrel=300;
		damageBarrelDestroyed=300;
	};
	class Bullet_556x45: Bullet_Base
	{
		damageBarrel=125;
		damageBarrelDestroyed=125;
	};
	class Bullet_545x39: Bullet_Base
	{
		damageBarrel=107;
		damageBarrelDestroyed=107;
	};
	class Bullet_762x54: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
	class Bullet_308Win: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
	class Bullet_762x39: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
	class Bullet_45ACP: Bullet_Base
	{
		damageBarrel=95;
		damageBarrelDestroyed=95;
	};
	class Bullet_357: Bullet_Base
	{
		damageBarrel=95;
		damageBarrelDestroyed=95;
	};
	class Bullet_9x19: Bullet_Base
	{
		damageBarrel=85;
		damageBarrelDestroyed=85;
	};
	class Bullet_380: Bullet_Base
	{
		damageBarrel=75;
		damageBarrelDestroyed=75;
	};
	class Bullet_22: Bullet_Base
	{
		damageBarrel=60;
		damageBarrelDestroyed=60;
	};
	class Bullet_9x39AP: Bullet_Base
	{
		damageBarrel=125;
		damageBarrelDestroyed=125;
	};
	class Bullet_9x39: Bullet_Base
	{
		damageBarrel=125;
		damageBarrelDestroyed=125;
	};
};
