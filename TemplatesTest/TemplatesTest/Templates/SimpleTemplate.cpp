#include "stdafx.h"
#include "SimpleTemplate.h"


namespace my_templ
{
	template<typename T, typename U, typename V>
	SimpleTemplate<T, U, V>::SimpleTemplate( T t, U u, V v )
		: m_t( t )
		, m_u( u )
		, m_v( v )
	{
	}

	template <typename T, typename U, typename V>
	SimpleTemplate<T, U, V>::~SimpleTemplate( )
	{
	}

	template <typename T, typename U, typename V>
	void SimpleTemplate<T, U, V>::show_data( )
	{
		std::cout << "m_t (" << typeid(m_t).name( ) << ", " << m_t
			<< "), m_u (" << typeid(m_u).name( ) << ", " << m_u
			<< "), m_v (" << typeid(m_v).name( ) << ", " << m_v << ")." << std::endl;
	}
}
