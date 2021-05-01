#include "Mage.h"
#include "Character.h"
#include "WeaponException.h"
#include <string>
#include <algorithm>

namespace ktrmscss1
{
	Mage::Mage(const char* name, const char* RPGClass) : ktrmscss1::Character::Character(name, RPGClass)
	{
		this->life = 70;
		this->strenght = 3;
		this->agility = 10;
		this->wit = 10;

		printf("%s: May the gods be with me.\n", name);
	}

	void Mage::attack(const std::string& weapon)
	{
		if (weapon != "")
		{
			if (weapon == "magic" || weapon == "wand")
			{
				Character::attack(weapon);
				printf("%s: Feel the power of my %s!\n", this->name.c_str(), weapon.c_str());
			}
			else
			{
				throw WeaponException(this->name + ": I don't need this stupid " + weapon + "! Don't misjudge my powers!");
			}
		}
		else
		{
			throw WeaponException(this->name + ": I refuse to fight with my bare hands.");
		}
	}

	void Mage::moveRight()
	{
		Character::moveRight();
		printf(" furtively.\n");
	}

	void Mage::moveLeft()
	{
		Character::moveLeft();
		printf(" furtively.\n");
	}

	void Mage::moveForward()
	{
		Character::moveForward();
		printf(" furtively.\n");
	}

	void Mage::moveBack()
	{
		Character::moveBack();
		printf(" furtively.\n");
	}
}