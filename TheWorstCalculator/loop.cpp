#include "loop.h"
#include "Calculator.h"
#include "MoreDots.h"
#include <random>

namespace Meta {
	template<unsigned int N>
	struct CompileTimeDeepCheck {
		static const bool verified = CompileTimeDeepCheck<N - 1>::verified;
	};
	template<> struct CompileTimeDeepCheck<0> { static const bool verified = true; };
	template<typename Func, typename... Args>
	auto esoteric_call(Func f, Args... args) {
		return (*f)(args...);
	}
}

namespace Main
{
	namespace loop
	{
		namespace userinput
		{
			namespace Wrapper
			{
				template <typename T>
				T doubleinputWrapper(T get)
				{
					T* pget = &get;
					T** ppget = &pget;
					std::cin >> **ppget;
					return **ppget;
				}

				template <typename T>
				T charinputWrapper(T get)
				{
					T* pget = &get;
					T** ppget = &pget;
					std::cin >> **ppget;
					return **ppget;
				}
			}
		}
		namespace output
		{
			void outWrapper(std::string outtext)
			{
				const std::string* pOut = &outtext;
				std::cout << *pOut << '\n';
			}
		}
		namespace checks
		{
			namespace simple
			{

				template <typename T>
				bool Add(T get) 
				{
					T* p_input = &get;
					char target = '+';
					return (*p_input == (T)target);
				}
				template <typename T>
				bool Subtract(T get) 
				{
					T* p_input = &get;
					return (*p_input == (T)'-');
				}
			}
			namespace hard
			{
				template <typename T>
				bool Multiplication(T get) 
				{
					T* p_input = &get;
					return (*p_input == (T)'*');
				}

				template <typename T>
				bool Divide(T get) 
				{
					T* p_input = &get;
					return (*p_input == (T)'/');
				}
			}
		}
		namespace therealloop
		{
			void realmain()
			{
				std::random_device rd;
				std::mt19937 gen(rd());
				std::bernoulli_distribution x;
				Main::doubleZ::one::doubleThatsNumberOne TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing;
				Main::doubleZ::two::doubleThatsNumberTwo TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes;
				Main::Oh::you::want::to::use::a::chaar::slashN::Fine::here::it::is::charthatyouNEEEDIMSURE chaar;
				Main::loop::output::outWrapper("Calculator program. operations : +, -, *, /");
				while (true)
				{
					if (x(gen)) {
						std::cout << "dont feel like it\n";
						std::_Exit(69420);
					}
					Main::loop::output::outWrapper("Please input the first number : ");
					TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
					Main::loop::output::outWrapper("Please input the operation : ");
					chaar.fineHereItIs = Main::loop::userinput::Wrapper::charinputWrapper<char>(chaar.fineHereItIs);
					Main::loop::output::outWrapper("Please input the second number : ");
					TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
					if (Main::loop::checks::simple::Add(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<50>::verified)
					{
						auto f = &Main::TheCalculations::simple::Add::Add;
						Main::loop::output::outWrapper(Meta::esoteric_call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::simple::Subtract(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<51>::verified)
					{
						auto f = &Main::TheCalculations::simple::Subtract::Subtract;
						Main::loop::output::outWrapper(Meta::esoteric_call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::hard::Multiplication(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<100>::verified)
					{
						auto f = &Main::TheCalculations::hard::Multiplication::Multiplication;
						Main::loop::output::outWrapper(Meta::esoteric_call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else if (Main::loop::checks::hard::Divide(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<150>::verified)
					{
						auto f = &Main::TheCalculations::hard::Divide::Divide;
						Main::loop::output::outWrapper(Meta::esoteric_call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one, TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
					}
					else
					{
						Main::loop::output::outWrapper("Enjoy the stack over flow bitch\r");
						while (Meta::CompileTimeDeepCheck<200>::verified)
						{
							Main::TheCalculations::hard::Divide::Divide(0, 0);
						}
					}
				}
			}
		}
	}
}