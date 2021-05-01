#pragma once
#include "Character.h"
#include <string>

namespace ktrmscss1
{
	class Warrior : public Character
	{
		public:
			explicit Warrior(const char* name, const char* RPGClass = "Warrior");
			void attack(const std::string& weapon) override;
			void moveRight() override;
			void moveLeft() override;
			void moveForward() override;
			void moveBack() override;
	};
}

