#pragma once

namespace ktrmscss1
{
	class Movable
	{
		public:
			virtual void movesRight() = 0;
			virtual void movesLeft() = 0;
			virtual void movesForward() = 0;
			virtual void movesBack() = 0;
	};
}

