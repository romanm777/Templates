// TemplatesTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "TemplTests.h"


int main()
{
	/** Simple template test */
	templ_test::simple_template_test( );

	/** Partial specialization test */
	templ_test::partial_spec_test( );

	/** */
	templ_test::full_spec_test( );

    return 0;
}

