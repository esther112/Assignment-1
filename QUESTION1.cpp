/*
*	Question1.cpp
*	Name:				[ EJE, ESTHER OCHUOLE]
*	Department:			[MATHEMATICS]
*	Matric./Reg. No:	[45386614CI]
*	
*	program that reads an integer and determines and
*	prints whether it's odd or even.
*	
*/

#include <iostream>

int main ()
{
	
	int eu;
	
	std::cout << "\tWelcome!!!\n";
	std::cout << "this program reads an integer and determines and prints\n";
	std::cout << "\twhether it's odd or even.\n\n";
		 
	std::cout << "Enter Integer: ";
	std::cin >> eu; 
	
	if (eu % 2 == 0)
	std::cout << eu << " is an Even number\n";
	
	else
	std::cout << eu << " is an Odd number\n";
	
	return 0;
}
