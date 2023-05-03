#pragma once

#include <string>
#include <iostream>

#ifdef LEAVERDYNAMICLIBRARY_EXPORTS
#define LEAVERDYNAMICLIB_API __declspec(dllexport)
#else
#define LEAVERDYNAMICLIB_API __declspec(dllimport)
#endif

namespace Leaver
{
	class Leaver
	{
		
	public:
		
		LEAVERDYNAMICLIB_API std::string leave(std::string nameOfPerson);
	};
}