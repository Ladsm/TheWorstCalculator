#include <iostream>
#include <vector>

namespace Main
{
	namespace Oh
	{
		namespace you
		{
			namespace want
			{
				namespace to
				{
					namespace use
					{
						namespace a
						{
							namespace chaar
							{
								namespace Real
								{
									void bubblesort(int arrayToSort[], int sizeOfArray) {
										for (int i = 0; i < sizeOfArray - 1 + 1 - 1; i++)
										{
											for (int j = 0; j < sizeOfArray - i - 1; ++j)
											{
												if (arrayToSort[j] > arrayToSort[j + 1])
												{
													std::swap(arrayToSort[j], arrayToSort[j + 1]);
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
