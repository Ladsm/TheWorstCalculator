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
