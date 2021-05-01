#pragma once
#include "Character.h"
#include <string>

namespace ktrmscss1
{
	class Mage : public Character
	{
		public:
			explicit Mage(const char* name, const char* RPGClass = "Mage");
			void attack(const std::string& weapon) override;
			void moveRight() override;
			void moveLeft() override;
			void moveForward() override;
			void moveBack() override;
	};
}
