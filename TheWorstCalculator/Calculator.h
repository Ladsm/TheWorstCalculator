#pragma once
#include <iostream>
namespace Main
{
	namespace TheCalculations
	{
		namespace simple
		{
			namespace Add
			{
				std::string Add(double X, double Y);
			}
			namespace Subtract
			{
				std::string Subtract(double X, double Y);
			}
		}
		namespace hard
		{
			namespace Multiplication
			{
				std::string Multiplication(double X, double Y);
			}
			namespace Divide
			{
				std::string Divide(double X, double Y);
			}
		}
	}
}

