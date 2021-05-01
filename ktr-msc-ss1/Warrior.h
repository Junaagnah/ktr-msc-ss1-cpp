#pragma once
#include "Character.h"
#include <string>

namespace ktrmscss1
{
	class Warrior : public Character
	{
		public:
			explicit Warrior(std::string name, std::string RPGClass = "Warrior");
			void attack(std::string weapon) override;
			void moveRight() override;
			void moveLeft() override;
			void moveForward() override;
			void moveBack() override;
	};
}

