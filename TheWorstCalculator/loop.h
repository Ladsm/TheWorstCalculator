#pragma once
#include <iostream>
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
            void outWrapper(std::string outtext);
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
        }
        namespace therealloop 
        {
            void realmain();
        }
    }
}
