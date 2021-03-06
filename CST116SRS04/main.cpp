// CST116SRS04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <cmath>



int main()
{
	double a1{};
	double a2{};
	double a3{};
	double s1{};
	double s2{};
	double s3{};

	long config{};

	std::cout << "Enter Triangle Configuration to Solve: 1 - AAA, 2 - AAS, 3 - ASA, 4 - SAS, 5 - SSA, 6 - SSS." << std::endl;
	std::cin >> config;
	switch (config)
	{
	case 1:
		std::cout << "Enter Two Angles :" << std::endl;
		std::cin >> a1 >> a2;
		std::cout << "a3 = " << 180 - (a1 + a2) << std::endl;
		if (180 <= a1 + a2)
			std::cout << "unsolvable" << std::endl;
		break;
	case 2:
		std::cout << "Enter Angle, Angle, Side :" << std::endl;
		std::cin >> a1 >> a3 >> s3;
		if (180 <= a1 + a3)
			std::cout << "unsolvable" << std::endl;
		std::cout << "a3 = " << 180 - (a1 + a3) << std::endl;
		std::cout << "s2 = " << ((sin(a1)*(3.14/180))*(s3 / ((sin(a3)*(3.14/180))))) << std::endl;
		std::cout << "s3 = " << ((sin(180 - (a1 + a3))*(3.14/180))*(s3 / ((sin(a3)*(3.14/180))))) << std::endl;
		break;
	case 3:
		std::cout << "Enter Angel, Side, Angle :" << std::endl;
		std::cin >> a1 >> s3 >> a2;
		if (180 <= a1 + a2)
			std::cout << "unslovable" << std::endl;
		std::cout << "a3 = " << 180 - (a1 + a2) << std::endl;
		std::cout << "s2 = " << ((sin(a1)*(3.14/180))*(s3 / ((sin(180 - (a1 + a2)))*(3.14/180)))) << std::endl;
		std::cout << "s3 = " << ((sin(a2)*(3.14/180))*(s3 / ((sin(180 - (a1 + a2))*(3.14/180))))) << std::endl;
		break;
	case 4:
		std::cout << "Enter Side, Angle, Side :" << std::endl;
		std::cin >> s2 >> a1 >> s3;
		std::cout << "s3 = " << sqrt((s2*s2) + (s3*s3) - ((2 * s2*s3)*((cos(a1))*(3.14/180)))) << std::endl;
		std::cout << "a2 = " << (3.14/180)*(asin((s2*((sin(a1))*(3.14/180))/(sqrt((s2*s2) + (s3*s3) - ((2 * s2*s3)*((cos(a1))*(180/3.14))))))));
		std::cout << "a3 = " << 180 - (a1 + (asin((s2*((sin(a1))*(3.14/180)) / (sqrt((s2*s2) + (s3*s3) - ((2 * s2*s3)*((cos(a1)*(3.14/180))))))))));
		break;
	case 5:
		std::cout << "Enter Side, Side, Angle :" << std::endl;
		std::cin >> s2 >> s3 >> a2;
		std::cout << "a2 = " << asin((s3*((sin(a2))*(3.14 / 180))) / s2)*(3.14 / 180) << std::endl;
		std::cout << "a3 = " << 180 - (a2 + (asin((s3*((sin(a2))*(3.14 / 180))) / s2)*(3.14 / 180)));
		std::cout << "s3 = " << ((sin(180 - (a2 + (asin((s3*((sin(a2))*(3.14 / 180))) / s2)*(3.14 / 180)))))*(s2 / ((sin(a2))*(3.14 / 180))));
		break;
	case 6:
		std::cout << "Enter Side, Side, Side :" << std::endl;
		std::cin >> s1 >> s2 >> s3;
		std::cout << "a1 = " << (3.14 / 180)*(acos(((s1*s1) - (s2*s2) - (s3*s3)) / (-2 * s2*s3))) << std::endl;
		std::cout << "a2 = " << (3.14 / 180)*(asin(s2*(sin((3.14 / 180)*(acos(((s1*s1) - (s2*s2) - (s3*s3)) / (-2 * s2*s3))))) / (s1))) << std::endl;
		std::cout << "a3 = " << 180 - (((3.14 / 180)*(acos(((s1*s1) - (s2*s2) - (s3*s3)) / (-2 * s2*s3)))) + ((3.14 / 180)*(asin(s2*(sin((3.14 / 180)*(acos(((s1*s1) - (s2*s2) - (s3*s3)) / (-2 * s2*s3))))) / (s1))))) << std::endl;
	}
		

	
    return 0;
}

