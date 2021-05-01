#include "Warrior.h"
#include "Character.h"
#include "WeaponException.h"
#include <string>
#include <algorithm>

namespace ktrmscss1
{
	Warrior::Warrior(const char* name, const char* RPGClass) : ktrmscss1::Character::Character(name, RPGClass)
	{
		this->life = 100;
		this->strenght = 10;
		this->agility = 8;
		this->wit = 3;

		printf("%s: My name will go down in history!\n", name);
	}

	void Warrior::attack(const std::string& weapon)
	{
		if (weapon != "")
		{
			if (weapon == "hammer" || weapon == "sword")
			{
				Character::attack(weapon);
				printf("%s: I'll crush you with my %s!\n", this->name.c_str(), weapon.c_str());
			}
			else
			{
				throw WeaponException(this->name + ": A " + weapon + " ?? What should I do with this ?");
			}
		}
		else
		{
			throw WeaponException(this->name + ": I refuse to fight with my bare hands !");
		}
	}

	void Warrior::moveRight()
	{
		Character::moveRight();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveLeft()
	{
		Character::moveLeft();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveForward()
	{
		Character::moveForward();
		printf(" like a bad boy.\n");
	}

	void Warrior::moveBack()
	{
		Character::moveBack();
		printf(" like a bad boy.\n");
	}
}