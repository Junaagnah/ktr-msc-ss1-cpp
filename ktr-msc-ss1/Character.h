#pragma once
#include "Movable.h";

#include <string>

namespace ktrmscss1
{
	class Character : public Movable
	{
		// Variables
		protected:
			std::string name;
			int life{ 50 };
			int agility{ 2 };
			int strenght{ 2 };
			int wit{ 2 };
			std::string RPGClass;

		// Functions and methods
		public:
			explicit Character(std::string name, std::string RPGClass = "Character");
			virtual void attack(std::string weapon);
			virtual void tryToAttack(std::string weapon);
			virtual void moveRight();
			virtual void moveLeft();
			virtual void moveForward();
			virtual void moveBack();
			virtual void unsheatheWeapon();

		protected:
			std::string getName();
			int getLife();
			int getAgility();
			int getStrenght();
			int getWit();
			std::string getRPGClass();
	};
}

