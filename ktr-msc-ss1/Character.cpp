#include "Character.h"
#include "WeaponException.h"

#include <string>
#include <iostream>

namespace ktrmscss1
{
	Character::Character(const char* name, const char* RPGClass)
	{
		this->name = name;
		this->RPGClass = RPGClass;
	}

	std::string Character::getName()
	{
		return this->name;
	}

	int Character::getLife()
	{
		return this->life;
	}

	int Character::getAgility()
	{
		return this->agility;
	}

	int Character::getStrenght()
	{
		return this->strenght;
	}

	int Character::getWit()
	{
		return this->wit;
	}

	std::string Character::getRPGClass()
	{
		return this->RPGClass;
	}

	void Character::attack(const std::string& weapon)
	{
		printf("%s: Rrrrrrrrr ....\n", this->name.c_str());
	}

	void Character::tryToAttack(const std::string& weapon)
	{
		try
		{
			this->attack(weapon);
		}
		catch (WeaponException& exception)
		{
			printf("%s\n", exception.what());
		}
	}

	void Character::moveRight()
	{
		printf("%s: moves right", this->name.c_str());
	}

	void Character::moveLeft()
	{
		printf("%s: moves left", this->name.c_str());
	}

	void Character::moveForward()
	{
		printf("%s: moves forward", this->name.c_str());
	}

	void Character::moveBack()
	{
		printf("%s: moves backward", this->name.c_str());
	}

	void Character::unsheatheWeapon()
	{
		printf("%s: unsheathes his weapon.\n", this->name.c_str());
	}
}