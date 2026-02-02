#include "loop.h"
#include "Calculator.h"

namespace main
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
			void realMain() 
			{ 
				double twonums[2] = { 0 , 0};
				char operation = '+';
				main::loop::output::outWraper("Calculator program. operations : +, -, *, /");
				while (true)
				{
					main::loop::output::outWraper("Please input the first number : ");
					twonums[0] = main::loop::userinput::Wraper::doubleinputWraper(twonums[0]);
					main::loop::output::outWraper("Please input the operation : ");
					operation = main::loop::userinput::Wraper::charinputWraper(operation);
					main::loop::output::outWraper("Please input the second number : ");
					twonums[1] = main::loop::userinput::Wraper::doubleinputWraper(twonums[1]);
					if (main::loop::checks::simple::Add(operation) == true)
					{
						std::cout << main::TheCalculations::simple::Add::Add(twonums[0], twonums[1]) << '\n';
					}
					else if (main::loop::checks::simple::Subtract(operation) == true)
					{
						std::cout << main::TheCalculations::simple::Subtract::Subtract(twonums[0], twonums[1]) << '\n';
					}
					else if (main::loop::checks::hard::Multiplication(operation) == true)
					{
						std::cout << main::TheCalculations::hard::Multiplication::Multiplication(twonums[0], twonums[1]) << '\n';
					}
					else if (main::loop::checks::hard::Divide(operation) == true)
					{
						std::cout << main::TheCalculations::hard::Divide::Divide(twonums[0], twonums[1]) << '\n';
					}
					else
					{
						main::loop::output::outWraper("Enjoy the stack over flow bitch\r");
						while (true)
						{
							main::TheCalculations::hard::Divide::Divide(0, 0);
						}
					}
				}
			}
		}
	}
}