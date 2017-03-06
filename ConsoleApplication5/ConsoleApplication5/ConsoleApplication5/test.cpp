#include "stdafx.h"
#include "test.h"

template<>
void Test<std::string, int, std::string>::foo( )
{
    std::cout << "Specific foo." << std::endl;
}

template<>
Test<std::string, int, std::string>::~Test( )
{
    std::cout << "Specific Dtor." << std::endl;
}

template<>
Test<std::string, int, std::string>::Test( std::string a, int b, std::string c )
{
    std::cout << "Specific Ctor." << std::endl;
}