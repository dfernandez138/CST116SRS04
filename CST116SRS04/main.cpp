// CST116SRS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>



int main()
{
	int a1{};
	int a2{};
	int a3{};
	int s1{};
	int s2{};
	int s3{};

	std::cout << "Enter Two Angles:" << std::endl;
	std::cin >> a1 >> a2;

	int aaa = 180 - (a1 + a2);

	if (180 <= a1 + a2)
	std::cout << "unsolvable" << std::endl;

	std::cout << "a3 = " << aaa << std::endl;



    return 0;
}

