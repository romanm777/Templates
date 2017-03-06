#pragma once
#include <string>

namespace my_templ
{
	template <typename T, typename U, typename V>
	class SimpleTemplate
	{
	public:
		SimpleTemplate( T t, U u, V v );

		~SimpleTemplate( );

		void show_data( );

	private:
		T m_t;
		U m_u;
		V m_v;
	};
}
