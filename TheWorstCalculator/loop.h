#pragma once
#include <iostream>
#include <string>
#include <functional>
#include <string>

namespace Main 
{
    namespace loop 
    {
        namespace userinput 
        {
            namespace Wrapper 
            {
                template <typename T> T doubleinputWrapper(T get);
                template <typename T> T charinputWrapper(T get);
            }
        }
        namespace output 
        {
            void outWrapper(std::function<std::string* ()> outtext_generator);
        }
        namespace checks 
        {
            namespace simple 
            {
                template <typename T> bool Add(T get);
                template <typename T> bool Subtract(T get);
            }
            namespace hard 
            {
                template <typename T> bool Multiplication(T get);
                template <typename T> bool Divide(T get);
            }
            namespace what
            {
                template <typename T> bool How(T get);
            }
        }
        namespace therealloop 
        {
            void realmain();
        }
    }
}
