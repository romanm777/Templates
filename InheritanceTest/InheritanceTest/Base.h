#pragma once


template<typename T, typename U>
class Base 
{
public:
	Base( const T& t, const U& u );

	virtual ~Base( );

	virtual void show_name( );

private:
	const T& m_t;
	const U& m_u;
};