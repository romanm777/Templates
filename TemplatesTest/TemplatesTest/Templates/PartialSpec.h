#pragma once

#include "SimpleTemplate.h"
#include <string>


namespace my_templ
{
	template <typename T, typename V>
	class SimpleTemplate<T, std::string, V>
	{
	public:
		SimpleTemplate(const T& t, const std::string& u, const V& v);

		~SimpleTemplate( );

		void show_data( );

	private:
		const T& m_t;
		const std::string& m_u;
		const V& m_v;
	};
}