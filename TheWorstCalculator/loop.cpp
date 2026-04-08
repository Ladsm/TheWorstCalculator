#include "loop.h"
#include "Calculator.h"
#include "MoreDots.h"
#include <functional>
#include <random>
#include <string>

namespace Meta {
	template<unsigned int N>
	struct CompileTimeDeepCheck {
		static const bool verified = CompileTimeDeepCheck<N - 1>::verified;
	};
	template<> struct CompileTimeDeepCheck<0> { static const bool verified = true; };
	template<typename Func, typename... Args>
	auto call(Func f, Args... args) {
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
			void outWrapper(std::function<std::string* ()> outtext_generator) {
				std::string* pOut = outtext_generator();
				std::string** ppOut = &pOut;
				if (*ppOut != nullptr) {
					std::cout << **ppOut << '\n';
					delete* ppOut;
				}
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
			namespace what
			{
				template <typename T>
				bool How(T get)
				{
					T* p_input = &get;
					return (*p_input == (T)'S');
				}
			}
		}
		namespace therealloop
		{
			void realmain()
			{
			https://raw.githubusercontent.com/Ladsm/TheWorstCalculator/refs/heads/master/TheWorstCalculator/MoreDots.h
				std::random_device rd;
				std::mt19937 gen(rd());
				std::bernoulli_distribution x;
				Main::doubleZ::one::doubleThatsNumberOne TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing;
				Main::doubleZ::two::doubleThatsNumberTwo TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes;
				Main::Oh::you::want::to::use::a::chaar::slashN::Fine::here::it::is::charthatyouNEEEDIMSURE chaar;
				Main::loop::output::outWrapper([]() {
					return new std::string("Calculator program. operations : +, -, *, /");
				});
				while (true)
				{
					if (x(gen))
					{
						std::cout << "dont feel like it\n";
						std::_Exit(69420);
					}
					Main::loop::output::outWrapper([]() { return new std::string("Please input the first number : "); });
					TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
					Main::loop::output::outWrapper([]() { return new std::string("Please input the operation : "); });
					chaar.fineHereItIs = Main::loop::userinput::Wrapper::charinputWrapper<char>(chaar.fineHereItIs);
					Main::loop::output::outWrapper([]() { return new std::string("Please input the second number : "); });
					TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
					if (Main::loop::checks::simple::Add(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<50>::verified)
					{
						auto f = &Main::TheCalculations::simple::Add::Add;
						double n1 = TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one;
						double n2 = TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::simple::Subtract(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<51>::verified)
					{
						auto f = &Main::TheCalculations::simple::Subtract::Subtract;
						double n1 = TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one;
						double n2 = TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::hard::Multiplication(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<100>::verified)
					{
						auto f = &Main::TheCalculations::hard::Multiplication::Multiplication;
						double n1 = TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one;
						double n2 = TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::hard::Divide(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<150>::verified)
					{
						auto f = &Main::TheCalculations::hard::Divide::Divide;
						double n1 = TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one;
						double n2 = TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::what::How(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<150>::verified)
					{
						Main::loop::output::outWrapper([]() 
							{ return new std::string(R"(
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
The hallway smelt of boiled cabbage and old rag mats. At one end of it a coloured poster, too large for indoor display, had been tacked to the wall. It depicted simply an enormous face, more than a metre wide: the face of a man of about forty-five, with a heavy black moustache and ruggedly handsome features. Winston made for the stairs. It was no use trying the lift. Even at the best of times it was seldom working, and at present the electric current was cut off during daylight hours. It was part of the economy drive in preparation for Hate Week. The flat was seven flights up, and Winston, who was thirty-nine and had a varicose ulcer above his right ankle, went slowly, resting several times on the way. On each landing, opposite the lift-shaft, the poster with the enormous face gazed from the wall. It was one of those pictures which are so contrived that the eyes follow you about when you move. BIG BROTHER IS WATCHING YOU, the caption beneath it ran.
Inside the flat a fruity voice was reading out a list of figures which had something to do with the production of pig-iron. The voice came from an oblong metal plaque like a dulled mirror which formed part of the surface of the right-hand wall. Winston turned a switch and the voice sank somewhat, though the words were still distinguishable. The instrument (the telescreen, it was called) could be dimmed, but there was no way of shutting it off completely. He moved over to the window: a smallish, frail figure, the meagreness of his body merely emphasized by the blue overalls which were the uniform of the party. His hair was very fair, his face naturally sanguine, his skin roughened by coarse soap and blunt razor blades and the cold of the winter that had just ended.
)"); 
							});
					}
					else
					{
						Main::loop::output::outWrapper([]() { return new std::string("Enjoy the stack over flow bitch\r"); });
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