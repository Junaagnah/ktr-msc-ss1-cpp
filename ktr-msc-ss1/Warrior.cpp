#include "Warrior.h"
#include "Character.h"
#include "WeaponException.h"
#include <string>
#include <algorithm>

namespace ktrmscss1
{
	Warrior::Warrior(std::string name, std::string RPGClass) : ktrmscss1::Character::Character(name, RPGClass)
	{
		this->life = 100;
		this->strenght = 10;
		this->agility = 8;
		this->wit = 3;

		printf("%s: My name will go down in history!\n", name.c_str());
	}

	void Warrior::attack(std::string weapon)
	{
		// Converting weapon to lower case
		std::transform(weapon.begin(), weapon.end(), weapon.begin(), ::tolower);

		if (weapon.find_first_not_of(' ') != std::string::npos)
		{
			if (weapon == "hammer" || weapon == "sword")
			{
				ktrmscss1::Character::attack(weapon);
				printf("%s: I'll crush you with my %s!", this->name.c_str(), weapon.c_str());
			}
			else
			{
				throw new ktrmscss1::WeaponException(this->name + ": A " + weapon + " ?? What should I do with this ?");
			}
		}
		else
		{
			throw new ktrmscss1::WeaponException(this->name + ": I refuse to fight with my bare hands !");
		}
	}

	void Warrior::moveRight()
	{
		ktrmscss1::Character::moveRight();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveLeft()
	{
		ktrmscss1::Character::moveLeft();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveForward()
	{
		ktrmscss1::Character::moveForward();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveBack()
	{
		ktrmscss1::Character::moveBack();
		printf(" like a bad boy.\n");
	}
}