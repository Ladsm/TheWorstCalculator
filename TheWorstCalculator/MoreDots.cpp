#include <iostream>
#include <vector>
#include <algorithm>

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
									namespace sorts
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
										void gnomeSort(int arrayToSort[], int sizeOfArray)
										{
											int index = 0;
											while (index < sizeOfArray)
											{
												if (index == 0)
												{
													index++;
												}
												else if (arrayToSort[index] >= arrayToSort[index - 1])
												{
													index++;
												}
												else
												{
													std::swap(arrayToSort[index], arrayToSort[index - 1]);
													index--;
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
