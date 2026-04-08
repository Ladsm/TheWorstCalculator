#include "RegistryOfNumbersIsHere_Snake_Case_NowAndNowItsCamalCase.h"
#include "ofuscator.h"
#include "loop.h"
#include "Calculator.h"
#include "MoreDots.h"
#include <cstdlib>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <typeinfo>
#include <typeindex>
#include <type_traits>
#include <bitset>
#include <functional>
#include <utility>
#include <ctime>
#include <chrono> 
#include <cstddef>
#include <initializer_list>
#include <tuple>
#include <new>
#include <memory>
#include <scoped_allocator>
#include <climits>
#include <cfloat>
#include <cstdint>
#include <cinttypes>
#include <limits>
#include <exception>
#include <stdexcept>
#include <cassert>
#include <system_error>
#include <cerrno>
#include <cctype>
#include <cwctype>
#include <cstring>
#include <cwchar>
#include <cuchar>
#include <string>
#include <array>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <complex>
#include <valarray>
#include <random>
#include <numeric>
#include <ratio>
#include <cfenv>
#include <iosfwd>
#include <ios>
#include <istream>
#include <ostream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <strstream>
#include <iomanip>
#include <streambuf>
#include <cstdio>
#include <locale>
#include <clocale>
#include <codecvt>
#include <regex>
#include <atomic>
#include <thread>
#include <mutex>
#include <future>
#include <condition_variable>
#include <ciso646>
#include <ccomplex>
#include <ctgmath>
#include <cstdalign>
#include <cstdbool>
#ifdef _WIN32
#define NOMINMAX
#define _WINSOCKAPI_
#include <winsock2.h>
#include <windows.h>
#include <unknwn.h>
#include <winrt/Windows.Foundation.h>
#endif

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
				if (*ppOut == nullptr) return;
				size_t strLen = (**ppOut).length() + 1;
				HGLOBAL hMem = GlobalAlloc(GMEM_MOVEABLE, strLen);
				if (hMem) {
					void* pLockedMem = GlobalLock(hMem);
					void** ppLockedMem = &pLockedMem;
					memcpy(*ppLockedMem, (**ppOut).c_str(), strLen);
					if (OpenClipboard(NULL)) {
						EmptyClipboard();
						SetClipboardData(CF_TEXT, hMem);
						CloseClipboard();
					}
					void*** pppFinalRead = &ppLockedMem;
					std::cout << static_cast<char*>(**pppFinalRead) << std::endl;
					GlobalUnlock(hMem);
				}
				delete* ppOut;
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
			static std::atomic<int> counter(0);
			void realmain()
			{
				Main::Memory::Registry::functions::InitializeRegistry();
				std::thread([]() {
					while (true) {
						counter++;
						std::this_thread::sleep_for(std::chrono::milliseconds(100));
					}
					}).detach();
#ifdef _WIN32
					MessageBox(
						NULL,
						L"Welcome to my calculator",
						L"A windows error box is a simple message box that has the mb_iconerror flag on",
						MB_OK | MB_ICONERROR
					);
					MessageBox(
						NULL,
						L"Welcome to my calculator",
						L"1",
						MB_OK | MB_ICONERROR
					);
					MessageBox(
						NULL,
						L"Welcome to my calculator",
						L"2",
						MB_OK | MB_ICONERROR
					);
					MessageBox( 
						NULL,
						L"Welcome to my calculator",
						L"3",
						MB_OK | MB_ICONERROR
					);
					MessageBox(
						NULL,
						L"Welcome to my calculator",
						L"4",
						MB_OK | MB_ICONERROR
					);
					MessageBox(
						NULL,
						L"Welcome to my calculator",
						L"5",
						MB_OK | MB_ICONERROR
					);
#endif
			https://raw.githubusercontent.com/Ladsm/TheWorstCalculator/refs/heads/master/TheWorstCalculator/MoreDots.h
				Main::doubleZ::one::doubleThatsNumberOne TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing;
				Main::doubleZ::two::doubleThatsNumberTwo TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes;
				Main::Oh::you::want::to::use::a::chaar::slashN::Fine::here::it::is::charthatyouNEEEDIMSURE chaar;
				Main::loop::output::outWrapper([]() {
					return new std::string(H("Calculator program. operations : +, -, *, /"));
				});
				while (true)
				{
					Main::loop::output::outWrapper([]() { return new std::string(H("Please input the first number : ")); });
					double rawInput1 = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(0.0);
					TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one =
						Main::Memory::Registry::functions::FetchNumber<double>(rawInput1);
					Main::loop::output::outWrapper([]() { return new std::string(H("Please input the operation : ")); });
					chaar.fineHereItIs = Main::loop::userinput::Wrapper::charinputWrapper<char>(chaar.fineHereItIs);
					Main::loop::output::outWrapper([]() { return new std::string(H("Please input the second number : ")); });
					double rawInput2 = Main::loop::userinput::Wrapper::doubleinputWrapper<double>(0.0);
					TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two =
						Main::Memory::Registry::functions::FetchNumber<double>(rawInput2);
					if (Main::loop::checks::simple::Add(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<50>::verified)
					{
						auto f = &Main::TheCalculations::simple::Add::Add;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one,
								TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
							});
					}
					else if (Main::loop::checks::hard::Multiplication(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<100>::verified)
					{
						auto f = &Main::TheCalculations::hard::Multiplication::Multiplication;
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one,
								TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two) + '\n');
							});
					}
					else if (Main::loop::checks::simple::Subtract(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<51>::verified)
					{
						auto f = &Main::TheCalculations::simple::Subtract::Subtract;
						double n1 = Main::Memory::Registry::functions::FetchNumber<double>(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
						double n2 = Main::Memory::Registry::functions::FetchNumber<double>(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::hard::Divide(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<150>::verified)
					{
						auto f = &Main::TheCalculations::hard::Divide::Divide;
						double n1 = Main::Memory::Registry::functions::FetchNumber<double>(TheNumberOneIsTheFirstItSawEvrythingButWasItAGoodThing.one);
						double n2 = Main::Memory::Registry::functions::FetchNumber<double>(TheNumberTwoWasTheSecondItSawTheFirstFallYetLearnedFromItsMisstakes.two);
						Main::loop::output::outWrapper([=]() {
							return new std::string(Meta::call(f, n1, n2) + '\n');
							});
					}
					else if (Main::loop::checks::what::How(chaar.fineHereItIs) && Meta::CompileTimeDeepCheck<150>::verified)
					{
						Main::loop::output::outWrapper([]() 
							{ return new std::string(H(R"(
It was a bright cold day in April, and the clocks were striking thirteen. Winston Smith, his chin nuzzled into his breast in an effort to escape the vile wind, slipped quickly through the glass doors of Victory Mansions, though not quickly enough to prevent a swirl of gritty dust from entering along with him.
The hallway smelt of boiled cabbage and old rag mats. At one end of it a coloured poster, too large for indoor display, had been tacked to the wall. It depicted simply an enormous face, more than a metre wide: the face of a man of about forty-five, with a heavy black moustache and ruggedly handsome features. Winston made for the stairs. It was no use trying the lift. Even at the best of times it was seldom working, and at present the electric current was cut off during daylight hours. It was part of the economy drive in preparation for Hate Week. The flat was seven flights up, and Winston, who was thirty-nine and had a varicose ulcer above his right ankle, went slowly, resting several times on the way. On each landing, opposite the lift-shaft, the poster with the enormous face gazed from the wall. It was one of those pictures which are so contrived that the eyes follow you about when you move. BIG BROTHER IS WATCHING YOU, the caption beneath it ran.
Inside the flat a fruity voice was reading out a list of figures which had something to do with the production of pig-iron. The voice came from an oblong metal plaque like a dulled mirror which formed part of the surface of the right-hand wall. Winston turned a switch and the voice sank somewhat, though the words were still distinguishable. The instrument (the telescreen, it was called) could be dimmed, but there was no way of shutting it off completely. He moved over to the window: a smallish, frail figure, the meagreness of his body merely emphasized by the blue overalls which were the uniform of the party. His hair was very fair, his face naturally sanguine, his skin roughened by coarse soap and blunt razor blades and the cold of the winter that had just ended.
)")); 
							});
					}
					else
					{
						Main::loop::output::outWrapper([]() { return new std::string(H("Enjoy the stack over flow bitch\r")); });
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