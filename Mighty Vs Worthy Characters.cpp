// Mighty Vs Worthy Characters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

int charlistW()
{
	cout << "Juggernaut, Hulk, Thing, Attuma, Grey Gargoyle, Titania, AbsorbingMan, Sin and Serpent";
}
int charlistM()
{
	cout << "Wolverine, Ms. Marvel, Iron Man, Iron Fist, Hawkeye, Red She Hulk, Black Widow, Dr. Strange, Spider-Man, Captain America and The Mighty Thor ";
}
class Juggernaut
{
	bool team = false;
	string name = "Kuurth: Breaker of Stone";
	string weapon = "Hammer of Kuurth";
	string realname = "The Juggernaut";
	int charenergytypei = 0;
	string charenergytypes = "Momentum";

	int strength = 8.5;
	int durability = 9.5;
	int speed = 5;
	float speedvar = charenergytypei * 0.2 + speed;
	int intelligence = 4;
	int energy = 5;
	int health = strength * durability * 50;
	int stamina = durability + energy;

	int charbuff1f()
	{
		string charbuff1 = "Cyttorak Force Field";
		int cff = rand() % 1 + 9;
		// dmg = dmg / 2
	}

	int attack1(int strength, int charenergytypei)
	{
		string attack1s = "Sunday Punch";
		int attack1 = 10 * strength;
		int charenergytypei = charenergytypei + 1
		return strength, charenergytype;
	}

	int attack2(int strength) 
	{
		string attack2s = "Stone Smash";
		int attack2 = 10 * strength;
		int charenergytypei = charenergytypei + 1
		return strength, charenergytypei;
	}

	int attack3(int strength) 
	{
		string attack3s = "Unstoppable Charge";
		int attack3 = 15 * speedvar;
		int charenergytypei = charenergytypei + 2
		return strength, charenergytypei;
	}

	int attack4(int charenergytypei, int strength, int speedvar)
	{
		string attack4s = "Cyttorak Destruction";
		int attack4 = 15 * (speedvar / 2) *strength;
		if (charenergytypei > 0) 
		{
			charenergytypei = 0;
		}
		return charenergytypei, strength, speedvar;
	}

};

class Hulk
{
	bool team = false;
	string name = "Nul: Breaker of Worlds";
	string weapon = "Hammer of Nul";
	string realname = "Hulk";

	int charenergytypei = 0;
	string charenergytypes = "Rage";
	// Rage goes up with attacks being done and when attacked

	int strength = 10;
	float strengthvar = strength + (0.5 * charenergytypei);
	int durability = 8;
	float durabilityvar = durability + (0.5 * charenergytypei);
	int speed = 5.5;
	float speedvar = speed + (0.5 * charenergytypei);
	int intelligence = 4;
	int energy = 4;
	float energyvar = energy + *(0.5 * charenergytypei);
	int health = strength * durability * 50;
	int stamina = durability + energy;

	int charbuff1(int health) 
	{
	 //adds 200 points of health every round
	}

	int attack1(int strengthvar, charenergytypei)
	{
		string attack1s = "Gamma Strike";
		int attack1 = 10 * strengthvar;
		int charenergytypei = charenergytypei + 1
		return strengthvar, charenergytypei;
	}

	int attack2(int strengthvar, charenergytypei)
	{
		string attack2s = "Hammer Down";
		int attack2 = 5 * strengthvar;
		int charenergytypei = charenergytypei + 2
		//gives 6 stamina 
		return strengthvar, charenergytypei;
	}

	int attack3(int strengthvar, charenergytypei)
	{
		string attack3s = "HULK SMASH!";
		int attack3 = 15 * strengthvar;
		int charenergytypei = charenergytypei + 1
		//uses 4 stamina
		return strengthvar, charenergytypei;
	}

	int attack4()
	{
		string attack4s = "Worldbreaker";
		int attack4 = 20 * strengthvar;
		//only useable at 5 points of rage, sets energy to 15, strength to 15, and durability to 15 for 2 turns
	}
};

class Thing
{
	bool team = false;
	string name = "Angrir: Breaker of Souls";
	string weapon = "Hammer of Angrir";
	string realname = "Thing";
};

class Attuma
{
	bool team = false;
	string name = "Nerkkod: Breaker of Oceans";
	string weapon = "Hammer of Nerkkod";
	string realname = "Attuma";
};

class GGargoyle
{
	bool team = false;
	string name = "Mokk: Breaker of Faith";
	string weapon = "Hammer of Mokk";
	string realname = "Grey Gargoyle";
};

class Titania
{
	bool team = false;
	string name = "Skirn: Breaker of Men";
	string weapon = "Hammer of Skirn";
	string realname = "Titania";
};

class AbsorbingMan
{
	bool team = false;
	string name = "Greithoth: Breaker of Wills";
	string weapon = "Hammer of Greithoth";
	string realname = "Absorbing Man";
};

class Sin 
{
	bool team = false;
	string name = "Skadi: Herald of the Serpent";
	string weapon = "Hammer of Skadi";
	string realname = "Sin: Daughter of Red Skull";
};

class Serpent
{
	bool team = false;
	string name = "The Serpent";
	string weapon = "Hammer of the Serpent";
	string realname = "Cul Borson: Norse God of Fear";
};

class Wolverine
{
	bool team = true;
	string name = "Wolverine";
	string weapon = "Uru Claws of Wolverine";

};

class MsMarvel
{
	bool team = true;
	string name = "Ms. Marvel";
	string weapon = "Uru Axe of Ms. Marvel";
};

class IronMan
{
	bool team = true;
	string name = "Iron Man";
	string weapon = "Uru Iron Destroyer Armor";
};

class IronFist
{
	bool team = true;
	string name = "Iron Fist";
	string weapon = "Uru Mace of Iron Fist";
};

class Hawkeye
{
	bool team = true;
	string name = "Hawkeye";
	string weapon = "Uru Bow of Hawkeye";
};

class RedSheHulk
{
	bool team = true;
	string name = "Red She Hulk";
	string weapon = "Uru Greatsword of She Hulk";
};

class BlackWidow
{
	bool team = true;
	string name = "Black Widow";
	string weapon = "Uru Swords of Black Widow";
};

class DrStrange
{
	bool team = true;
	string name = "Dr. Strange";
	string weapon = "Uru Staff of Dr. Strange";
};

class SpiderMan
{
	bool team = true;
	string name = "Spider-Man";
	string weapon = "Uru Stringers of Spider-Man";
};

class GoodOleCap
{
	bool team = true;
	string name = "Captain America";
	string weapon = "Mjolnir";
};

class TheGodofThunder
{
	bool team = true;
	string name = "The Mighty Thor";
	string weapon = "The Odinsword";
};
