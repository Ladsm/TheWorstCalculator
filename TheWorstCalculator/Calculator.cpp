#include "Calculator.h"
#include "loop.h"
#include <iostream>
#include <string>

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