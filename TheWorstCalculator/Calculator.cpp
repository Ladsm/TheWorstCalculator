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
				std::string Add(double X, double Y)
				{
					double iresult = X + Y;
					double Rresult = 0;
					for (int i = 0; i < iresult; i++) {
						Rresult++;
					}
					std::string result = std::to_string(Rresult);
					return result;
				}
			}
			namespace Subtract
			{
				std::string Subtract(double X, double Y)
				{
					double iresult = X - Y;
					double Rresult = 0;
					for (int i = 0; i < iresult; i++) {
						Rresult++;
					}
					std::string result = std::to_string(Rresult);
					return result;
				}
			}
		}
		namespace hard
		{
			namespace Multiplication
			{
				std::string Multiplication(double X, double Y)
				{
					double iresult = X * Y;
					double Rresult = 0;
					for (int i = 0; i < iresult; i++) {
						Rresult++;
					}
					std::string result = std::to_string(Rresult);
					return result;
				}
			}
			namespace Divide
			{
				std::string Divide(double X, double Y)
				{
					if (Y == 0)
					{
						Main::loop::output::outWrapper("Enjoy the stack over flow bitch\r");
						while (true)
						{
							Main::TheCalculations::hard::Divide::Divide(0, 0);
						}
					}
					double iresult = X / Y;
					double Rresult = 0;
					for (int i = 0; i < iresult; i++) {
						Rresult++;
					}
					std::string result = std::to_string(Rresult);
					return result;
				}
			}
		}
	}
}