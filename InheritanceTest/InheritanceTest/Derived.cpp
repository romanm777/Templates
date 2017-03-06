#include "stdafx.h"
#include "Derived.h"


template <typename T, typename U, typename V>
Derived<T, U, V>::Derived( const T& t, const U& u, const V& v )
	: Base<T, U>( t, u )
	, m_v( v )
{
}

template <typename T, typename U, typename V>
Derived<T, U, V>::~Derived( )
{
}

template <typename T, typename U, typename V>
void Derived<T, U, V>::show_name( )
{
	std::cout << "Derived class object." << " and ";
	Base<T, U>::show_name( );
}