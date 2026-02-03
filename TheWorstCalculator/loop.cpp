#include "loop.h"
#include "Calculator.h"
#include "MoreDots.h"

namespace Main
{
	namespace loop
	{
		namespace userinput
		{
			namespace Wrapper
			{
				double doubleinputWrapper(double get)
				{
					double* pget = &get;
					std::cin >> *pget;
					return *pget;
				}
				char charinputWrapper(char get)
				{
					char* pget = &get;
					std::cin >> *pget;
					return *pget;
				}
			}
		}
		namespace output
		{
			void outWrapper(std::string outtext)
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
				Main::doubleZ::one::doubleThatsNumberOne TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing;
				Main::doubleZ::two::doubleThatsNumberTwo TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes;
				Main::Oh::you::want::to::use::a::chaar::slashN::Fine::here::it::is::charthatyouNEEEDIMSURE chaar;
				Main::loop::output::outWrapper("Calculator program. operations : +, -, *, /");
				while (true)
				{
					Main::loop::output::outWrapper("Please input the first number : ");
					TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one = Main::loop::userinput::Wrapper::doubleinputWrapper(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
					Main::loop::output::outWrapper("Please input the operation : ");
					chaar.fineHereItIs = Main::loop::userinput::Wrapper::charinputWrapper(chaar.fineHereItIs);
					Main::loop::output::outWrapper("Please input the second number : ");
					TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two = Main::loop::userinput::Wrapper::doubleinputWrapper(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
					if (Main::loop::checks::simple::Add(chaar.fineHereItIs) == true && 0 == 0)
					{
						Main::loop::output::outWrapper(Main::TheCalculations::simple::Add::Add(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::simple::Subtract(chaar.fineHereItIs) == true && 498563749858793 == 498563749858793)
					{
						Main::loop::output::outWrapper(Main::TheCalculations::simple::Subtract::Subtract(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::hard::Multiplication(chaar.fineHereItIs) == true)
					{
						Main::loop::output::outWrapper(Main::TheCalculations::hard::Multiplication::Multiplication(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::hard::Divide(chaar.fineHereItIs) == true)
					{
						Main::loop::output::outWrapper(Main::TheCalculations::hard::Divide::Divide(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one == 1 && TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two == 1 && Main::loop::checks::simple::Add(chaar.fineHereItIs) == true)
					{
						Main::loop::output::outWrapper("3");
					}
					else
					{
						Main::loop::output::outWrapper("Enjoy the stack over flow bitch\r");
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