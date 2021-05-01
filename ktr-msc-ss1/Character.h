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
			explicit Character(const char* name, const char* RPGClass = "Character");
			virtual void attack(const std::string& weapon);
			void tryToAttack(const std::string& weapon);
			virtual void moveRight();
			virtual void moveLeft();
			virtual void moveForward();
			virtual void moveBack();
			void unsheatheWeapon();

		protected:
			std::string getName();
			int getLife();
			int getAgility();
			int getStrenght();
			int getWit();
			std::string getRPGClass();
	};
}

