#include "Calculator.h"
#include "loop.h"
#include <iostream>
#include <string>

namespace main
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
					std::string result = std::to_string(iresult);
					return result;
				}
			}
			namespace Subtract
			{
				std::string Subtract(double X, double Y)
				{
					double iresult = X - Y;
					std::string result = std::to_string(iresult);
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
					std::string result = std::to_string(iresult);
					return result;
				}
			}
			namespace Divide
			{
				std::string Divide(double X, double Y)
				{
					if (Y == 0)
					{
						main::loop::output::outWraper("Enjoy the stack over flow bitch\r");
						while (true)
						{
							main::TheCalculations::hard::Divide::Divide(0, 0);
						}
					}
					double iresult = X / Y;
					std::string result = std::to_string(iresult);
					return result;
				}
			}
		}
	}
}