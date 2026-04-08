#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <array>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <functional>
#include <string>
#include <utility>
#include <memory>
#include <tuple>
#include <iostream>
#include <cmath>
#include <limits>
#include <chrono>
#include <random>
#include <thread>
#include <stop_token>
#include <mutex>
#include <shared_mutex>
#include <condition_variable>
#include <future>
#include <atomic>
#include <semaphore>
#include <latch>
#include <barrier>
#include <ranges>
#include <span>
#include <mdspan>
#include <concepts>
#include <optional>
#include <variant> 
#include <any>
#include <bit>
#include <print>
#include <expected>
#include <filesystem>
#include <regex>
#include <stacktrace>
#include <cstdint>
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
