#pragma once

#include <iostream>
#include <string>

template <typename T, typename U, typename V>
class SimpleTemplate
{
public:
	inline SimpleTemplate( T t, U u, V v );

	inline ~SimpleTemplate( );

	inline void show_data( );

private:
	T m_t;
	U m_u;
	V m_v;
};

///////////////////////
template<> SimpleTemplate<std::string, int, std::string>::SimpleTemplate( std::string t, int u, std::string v );
template<> SimpleTemplate<std::string, int, std::string>::~SimpleTemplate( );
template<> void SimpleTemplate<std::string, int, std::string>::show_data( );

// explicit (full) specialization of SimpleTemplate template
template<>
SimpleTemplate<std::string, int, std::string>::SimpleTemplate( std::string t, int u, std::string v )
	: m_t( t )
	, m_u( u )
	, m_v( v )
{
}
template<>
SimpleTemplate<std::string, int, std::string>::~SimpleTemplate( )
{
}
template<>
void SimpleTemplate<std::string, int, std::string>::show_data( )
{
	//std::string str( "m_t (T mega string, " + m_t + "), m_u (U mega string, " + std::to_string(m_u) + "), m_v (V mega String, " + m_v + ")." );
	std::cout << "str" << std::endl;
}