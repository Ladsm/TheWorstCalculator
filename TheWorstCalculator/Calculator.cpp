#include "Calculator.h"
#include "loop.h"
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
#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#define _WINSOCKAPI_
#include <winsock2.h>
#include <windows.h>
#include <unknwn.h>
#include <winrt/Windows.Foundation.h>
#endif

namespace Main
{
	namespace TheCalculations
	{
		namespace simple
		{
			namespace Add
			{
				template <typename T>
				struct Stepper {
					static void increment(T** double_ptr) {
						void* raw = (void*)(*double_ptr);
						**double_ptr = **double_ptr + 1.0;
					}
				};

				std::string Add(double X, double Y)
				{
					double iresult = X + Y;
					double Rresult = 0.0;
					double* p_result = &Rresult;
					double** pp_result = &p_result;
					for (int i = 0; i < static_cast<int>(iresult); i++)
					{
						Stepper<double>::increment(pp_result);
					}
					std::string* final_str = new std::string(std::to_string(**pp_result));
					std::string result = *final_str;
					delete final_str;
					return result;
				}
			}
			namespace Subtract
			{
				template <typename T>
				struct MemoryWalker {
					static T calculate_distance(T val_x, T val_y) {
						char* base = nullptr;
						char* addr_x = base + (long long)val_x;
						char* addr_y = base + (long long)val_y;
						return (T)(addr_x - addr_y);
					}
				};
				std::string Subtract(double X, double Y)
				{
					double iresult = MemoryWalker<double>::calculate_distance(X, Y);
					double Rresult = 0.0;
					double* p_Rresult = &Rresult;
					double** pp_Rresult = &p_Rresult;
					for (int i = 0; i < (int)iresult; i++)
					{
						**pp_Rresult += 1.0;
					}
					std::string result = std::to_string(**pp_Rresult);
					return result;
				}
			}
		}
		namespace hard
		{
			namespace Multiplication
			{
				template <typename T>
				struct MatrixCruncher 
				{
					static void deepAdd(T*** ppp_res, T val) 
					{
						for (int j = 0; j < (int)val; j++) 
						{
							***ppp_res += 1.0;
						}
					}
				};
				std::string Multiplication(double X, double Y)
				{
					double Rresult = 0.0;
					double* p_res = &Rresult;
					double** pp_res = &p_res;
					double*** ppp_res = &pp_res;
					for (int i = 0; i < (int)Y; i++) 
					{
						MatrixCruncher<double>::deepAdd(ppp_res, X);
					}
					return std::to_string(***ppp_res);
				}
			}
			namespace Divide
			{
				template <typename T>
				struct Searcher 
				{
					static bool isMatch(T current_guess, T target_x, T divisor_y) 
					{
						return (current_guess * divisor_y) <= target_x;
					}
				};
				std::string Divide(double X, double Y)
				{
					if (Y == 0) 
					{
						Main::loop::output::outWrapper([]() { return new std::string("Enjoy the stack over flow bitch\r"); });
						while (true) { Main::TheCalculations::hard::Divide::Divide(0, 0); }
					}
					double Rresult = 0.0;
					double* p_res = &Rresult;
					while (Searcher<double>::isMatch(*p_res + 1.0, X, Y))
					{
						*p_res += 1.0;
					}
					double** pp_final = &p_res;
					return std::to_string(**pp_final);
				}
			}
		}
	}
}