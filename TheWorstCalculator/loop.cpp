#include "loop.h"
#include "Calculator.h"
#include "MoreDots.h"
#include <random>

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
				//creates random device
				std::random_device rd;
				//idk bro wtf is this but what evs
				std::mt19937 gen(rd());
				//bernoulli? who is that, prob smart guy.
				std::bernoulli_distribution x;
				//first number
				Main::doubleZ::one::doubleThatsNumberOne TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing;
				//second number
				Main::doubleZ::two::doubleThatsNumberTwo TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes;
				//chhhhhhaaaarrrr
				Main::Oh::you::want::to::use::a::chaar::slashN::Fine::here::it::is::charthatyouNEEEDIMSURE chaar;
				//print
				Main::loop::output::outWrapper("Calculator program. operations : +, -, *, /");
				while (true)
				{
					//give the calculator a brake man
					bool crash = x(gen);
					if (crash == true) {
						std::cout << "dont feel like it\n";
						std::_Exit(69420);
					}
					//input the first number please
					Main::loop::output::outWrapper("Please input the first number : ");
					//set it
					TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one = Main::loop::userinput::Wrapper::doubleinputWrapper(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
					//input the operation, please
					Main::loop::output::outWrapper("Please input the operation : ");
					chaar.fineHereItIs = Main::loop::userinput::Wrapper::charinputWrapper(chaar.fineHereItIs);
					//INPUT THE SECOND NUMBER, THATS AN ORDER!
					Main::loop::output::outWrapper("Please input the second number : ");
					TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two = Main::loop::userinput::Wrapper::doubleinputWrapper(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
					//checks
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
						//what else whould you think would happen bro
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