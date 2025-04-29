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
		damageBarrel=600;
		damageBarrelDestroyed=600;
	};
	class Bullet_12GaugeSlug: Bullet_Base
	{
		damageBarrel=600;
		damageBarrelDestroyed=600;
	};
	class Bullet_556x45: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
	class Bullet_545x39: Bullet_Base
	{
		damageBarrel=214.28572;
		damageBarrelDestroyed=214.28572;
	};
	class Bullet_762x54: Bullet_Base
	{
		damageBarrel=500;
		damageBarrelDestroyed=500;
	};
	class Bullet_308Win: Bullet_Base
	{
		damageBarrel=500;
		damageBarrelDestroyed=500;
	};
	class Bullet_762x39: Bullet_Base
	{
		damageBarrel=500;
		damageBarrelDestroyed=500;
	};
	class Bullet_45ACP: Bullet_Base
	{
		damageBarrel=187.5;
		damageBarrelDestroyed=187.5;
	};
	class Bullet_357: Bullet_Base
	{
		damageBarrel=187.5;
		damageBarrelDestroyed=187.5;
	};
	class Bullet_9x19: Bullet_Base
	{
		damageBarrel=166.66667;
		damageBarrelDestroyed=166.66667;
	};
	class Bullet_380: Bullet_Base
	{
		damageBarrel=150;
		damageBarrelDestroyed=150;
	};
	class Bullet_22: Bullet_Base
	{
		damageBarrel=115.38461;
		damageBarrelDestroyed=115.38461;
	};
	class Bullet_9x39AP: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
	class Bullet_9x39: Bullet_Base
	{
		damageBarrel=250;
		damageBarrelDestroyed=250;
	};
};
