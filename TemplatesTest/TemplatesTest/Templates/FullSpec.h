#pragma once
#include "SimpleTemplate.h"
#include <string>


namespace my_templ
{
	template<> 
	inline SimpleTemplate<std::string, int, std::string>::SimpleTemplate( std::string t, int u, std::string v );
	
	template<>
	inline SimpleTemplate<std::string, int, std::string>::~SimpleTemplate( );
	
	template<> 
	inline void SimpleTemplate<std::string, int, std::string>::show_data( );
}