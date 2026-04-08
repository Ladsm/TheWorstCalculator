#pragma once
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
    namespace obf {
        inline constexpr char xor_key = 0x5A;
        inline constexpr int shift = 3;
        inline constexpr char enc_char(char c) {
            if (c >= 32 && c <= 126)
                c = 32 + (c - 32 + shift) % 95;
            return c ^ xor_key;
        }
        inline constexpr char dec_char(char c) {
            char temp = c ^ xor_key;
            if (temp >= 32 && temp <= 126)
                temp = 32 + (temp - 32 - shift + 95) % 95;
            return temp;
        }
        template <std::size_t N>
        class ObfString {
        public:
            std::array<char, N> data{};
            consteval ObfString(const char(&str)[N]) {
                for (std::size_t i = 0; i < N; ++i)
                    data[i] = enc_char(str[i]);
            }
            std::string decode() const {
                std::string out;
                out.reserve(N);
                for (std::size_t i = 0; i < N - 1; ++i) {
                    out += dec_char(data[i]);
                }
                return out;
            }
        };
        template <std::size_t N>
        ObfString(const char(&str)[N]) -> ObfString<N>;
    }
}

#undef H
#define H(str) Main::obf::ObfString<sizeof(str)>(str).decode()
#define SAFESTR(x) H(x)
#define STATIC_DEF(x) H(x)
#define PROTECT(x) H(x)