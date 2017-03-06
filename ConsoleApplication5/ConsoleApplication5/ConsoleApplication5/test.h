#pragma once

#include <iostream>
#include <string>

template<class A, class B, class C>
class Test
{
public:
    Test( A a, B b, C c );
    ~Test( );

    void foo( );

private:
    A m_a;
    B m_b;
    C m_c;
};

template<class A, class B, class C>
Test<A, B, C>::~Test( )
{
    std::cout << "General Dtor." << std::endl;
}

template<class A, class B, class C>
Test<A, B, C>::Test( A a, B b, C c ) : m_a( a )
, m_b( b )
, m_c( c )
{
    std::cout << "General Ctor. A: " << a << " B: " << b << " C: " << c << std::endl;
}

template<class A, class B, class C>
void Test<A, B, C>::foo( )
{
    std::cout << "General foo." << std::endl;
}

template<>
void Test<std::string, int, std::string>::foo( );

template<>
Test<std::string, int, std::string>::~Test( );

template<>
Test<std::string, int, std::string>::Test( std::string a, int b, std::string c );
