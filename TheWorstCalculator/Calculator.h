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

