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
				double doubleinputWraper(double get);
				char charinputWraper(char get);
			}
		}
		namespace output
		{
			void outWraper(std::string outtext);
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