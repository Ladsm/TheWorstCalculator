#include "loop.h"
#include "Calculator.h"

namespace Main
{
	namespace loop
	{
		namespace userinput
		{
			namespace Wraper
			{
				double doubleinputWraper(double get)
				{
					double* pget = &get;
					std::cin >> *pget;
					return *pget;
				}
				char charinputWraper(char get)
				{
					char* pget = &get;
					std::cin >> *pget;
					return *pget;
				}
			}
		}
		namespace output
		{
			void outWraper(std::string outtext)
			{
				std::cout << outtext << '\n';
			}
		}
		namespace checks
		{
			namespace simple
			{
				bool Add(char get)
				{
					if (get == '+')
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				bool Subtract(char get)
				{
					if (get == '-')
					{
						return true;
					}
					else
					{
						return false;
					}
				}
			}
			namespace hard
			{
				bool Multiplication(char get)
				{
					if (get == '*')
					{
						return true;
					}
					else
					{
						return false;
					}
				}
				bool Divide(char get)
				{
					if (get == '/')
					{
						return true;
					}
					else
					{
						return false;
					}
				}
			}
		}
		namespace therealloop
		{
			void realmain() 
			{ 
				double twonums[2] = { 0 , 0};
				char operation = '+';
				Main::loop::output::outWraper("Calculator program. operations : +, -, *, /");
				while (true)
				{
					Main::loop::output::outWraper("Please input the first number : ");
					twonums[0] = Main::loop::userinput::Wraper::doubleinputWraper(twonums[0]);
					Main::loop::output::outWraper("Please input the operation : ");
					operation = Main::loop::userinput::Wraper::charinputWraper(operation);
					Main::loop::output::outWraper("Please input the second number : ");
					twonums[1] = Main::loop::userinput::Wraper::doubleinputWraper(twonums[1]);
					if (Main::loop::checks::simple::Add(operation) == true)
					{
						std::cout << Main::TheCalculations::simple::Add::Add(twonums[0], twonums[1]) << '\n';
					}
					else if (Main::loop::checks::simple::Subtract(operation) == true)
					{
						std::cout << Main::TheCalculations::simple::Subtract::Subtract(twonums[0], twonums[1]) << '\n';
					}
					else if (Main::loop::checks::hard::Multiplication(operation) == true)
					{
						std::cout << Main::TheCalculations::hard::Multiplication::Multiplication(twonums[0], twonums[1]) << '\n';
					}
					else if (Main::loop::checks::hard::Divide(operation) == true)
					{
						std::cout << Main::TheCalculations::hard::Divide::Divide(twonums[0], twonums[1]) << '\n';
					}
					else
					{
						Main::loop::output::outWraper("Enjoy the stack over flow bitch\r");
						while (true)
						{
							Main::TheCalculations::hard::Divide::Divide(0, 0);
						}
					}
				}
			}
		}
	}
}