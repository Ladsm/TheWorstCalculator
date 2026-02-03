#pragma once
#include <iostream>
namespace Main
{
	namespace loop
	{
		namespace userinput
		{
			namespace Wrapper
			{
				double doubleinputWrapper(double get);
				char charinputWrapper(char get);
			}
		}
		namespace output
		{
			void outWrapper(std::string outtext);
		}
		namespace checks
		{
			namespace simple
			{
				bool Add(char get);
				bool Subtract(char get);
			}
			namespace hard
			{
				bool Multiplication(char get);
				bool Divide(char get);
			}
		}
		namespace therealloop
		{
			void realmain();
		}
	}
}