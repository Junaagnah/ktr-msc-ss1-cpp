#include "Mage.h"
#include "Character.h"
#include "WeaponException.h"
#include <string>
#include <algorithm>

namespace ktrmscss1
{
	Mage::Mage(std::string name, std::string RPGClass) : ktrmscss1::Character::Character(name, RPGClass)
	{
		this->life = 70;
		this->strenght = 3;
		this->agility = 10;
		this->wit = 10;

		printf("%s: May the gods be with me.\n", name.c_str());
	}

	void Mage::attack(std::string weapon)
	{
		// Converting weapon to lower case
		std::transform(weapon.begin(), weapon.end(), weapon.begin(), ::tolower);

		if (weapon.find_first_not_of(' ') != std::string::npos)
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