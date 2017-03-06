#include "stdafx.h"
#include "Templates/SimpleTemplate.h"
#include "Templates/SimpleTemplate.cpp"
#include "Templates/PartialSpec.h"
#include "Templates/PartialSpec.cpp"

namespace templ_test
{
	void simple_template_test( )
	{
		int a = 0;
		double b = 2.4;
		bool c = false;

		my_templ::SimpleTemplate<int, double, bool> templ1( a, b, c );
		templ1.show_data( );
	}

	void partial_spec_test( )
	{
		double o = 744.35;
		std::string p = "Jeronimo!!!";
		double q = 237.745;

		my_templ::SimpleTemplate<double, std::string, double> templ2( o, p, q );
		templ2.show_data( );
	}

	void full_spec_test( )
	{
		std::string r = "First string";
		int s = 2;
		std::string t = "Third string";

		my_templ::SimpleTemplate<std::string, int, std::string> templ3( r, s, t );
		templ3.show_data( );
	}
}