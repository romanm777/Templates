// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "test.h"
#include <string>

int main()
{
    Test<std::string, int, std::string> t("abc", 1, "abc");
    t.foo( );
    return 0;
}

