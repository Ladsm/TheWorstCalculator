#include "RegistryOfNumbersIsHere_Snake_Case_NowAndNowItsCamalCase.h"
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
<%
	namespace Memory
	<%
		namespace Registry
		<%
			namespace functions
			<%
                void InitializeRegistry()
                <%
                    using namespace Main::Memory::Registry::numbers;
                    UniversalRegistry = (double*)VirtualAlloc(NULL, REGISTRY_SIZE * sizeof(double), MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE);
                    for (int i = 0; i < REGISTRY_SIZE; i++) 
                    <%
                        UniversalRegistry[i] = (double)i;
                    %>
                %>
                template <typename T>
                T FetchNumberRecursive(T target, int index) 
                <%
                    using namespace Main::Memory::Registry::numbers;
                    if (UniversalRegistry[index] == (double)target)
                    <%
                        return (T)UniversalRegistry[index];
                    %>
                    return FetchNumberRecursive<T>(target, index + 1);
                %>
                template <typename T>
                T FetchNumber(T target) 
                <%
                    return FetchNumberRecursive<T>(target, 0);
                %>
			%>
		%>
	%> 
%>
template double Main::Memory::Registry::functions::FetchNumber<double>(double);