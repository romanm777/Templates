// InheritanceTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <memory>
#include <string>

#include "Base.h"
#include "Base.cpp"
#include "Derived.h"
#include "Derived.cpp"


typedef Base<int, std::string>				BaseIS;
typedef Derived<int, std::string, double>	DerivedISD;

int main()
{
	int t = 4;
	std::string u = "u";
	double v = 27.4;

	std::shared_ptr<BaseIS> pBase( new BaseIS( t, u ) );
	std::shared_ptr<BaseIS>	pDerived( new DerivedISD( t, u, 27.4 ) );

	pBase->show_name( );
	pDerived->show_name( );

    return 0;
}

