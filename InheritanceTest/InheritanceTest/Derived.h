#pragma once

#include "Base.h"
#include <iostream>

template <typename T, typename U, typename V>
class Derived : public Base<T, U>
{
public:
	Derived( const T& t, const U& u, const V& v );

	virtual ~Derived( );

	virtual void show_name( );

private:
	const V& m_v;
};