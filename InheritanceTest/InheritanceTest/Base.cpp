#include "stdafx.h"
#include "Base.h"
#include <iostream>


template <typename T, typename U>
Base<T, U>::Base( const T& t, const U& u )
	: m_t( t )
	, m_u( u )
{
}

template <typename T, typename U>
Base<T, U>::~Base( )
{
}

template <typename T, typename U>
void Base<T, U>::show_name( )
{
	std::cout << "Base class object." << std::endl;
}