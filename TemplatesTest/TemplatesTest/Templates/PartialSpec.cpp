#include "stdafx.h"
#include "PartialSpec.h"

namespace my_templ
{
	template<typename t, typename v>
	SimpleTemplate<t, std::string, v>::SimpleTemplate( const t& t, const std::string& u, const v& v )
		: m_t( t )
		, m_u( u )
		, m_v( v )
	{
	}

	template <typename t, typename v>
	SimpleTemplate<t, std::string, v>::~SimpleTemplate( )
	{
	}

	template <typename t, typename v>
	void SimpleTemplate<t, std::string, v>::show_data( )
	{
		std::cout << "m_t (" << typeid(m_t).name( ) << ", " << m_t
			<< "), m_u (super mega string!!!" << ", " << m_u
			<< "), m_v (" << typeid(m_v).name( ) << ", " << m_v << ")." << std::endl;
	}
}