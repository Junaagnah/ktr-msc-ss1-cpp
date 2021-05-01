#pragma once
#include <exception>
#include <string>

namespace ktrmscss1
{
	class WeaponException : public std::exception
	{
		private:
			std::string _message;

		public:
			explicit WeaponException(std::string message);
			const char* what() const noexcept override
			{
				return this->_message.c_str();
			}
	};
}

