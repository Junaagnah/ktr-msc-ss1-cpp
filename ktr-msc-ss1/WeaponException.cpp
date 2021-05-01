#include "WeaponException.h"
#include <string>

namespace ktrmscss1
{
	WeaponException::WeaponException(std::string message)
	{
		this->_message = message;
	}
}