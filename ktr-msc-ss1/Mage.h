#pragma once
#include "Character.h"
#include <string>

namespace ktrmscss1
{
	class Mage : public Character
	{
		public:
			explicit Mage(std::string name, std::string RPGClass = "Mage");
			void attack(std::string weapon) override;
			void moveRight() override;
			void moveLeft() override;
			void moveForward() override;
			void moveBack() override;
	};
}
