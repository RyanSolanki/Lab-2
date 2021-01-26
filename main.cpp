/******************************************************************************
 * AUTHOR         : Ryan Solanki and Ethan Yew
 * LAB #2         : GitHub
 * CLASS          : CS1D
 * SECTION        : M/W 2:30pm
 * DUE DATE       : 01/25/21
 ******************************************************************************/
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
/*******************************************************************************
 * GitHub
 * ____________________________________________________________________________
 *
 * 	This program will have 2 hello world functions that take in a name and
 *  output to the console
 * ____________________________________________________________________________
 *   INPUT:
 *	       N/A
 *
 *   OUTPUT:
 *		   name1: first name
 *         name2: second name
 ******************************************************************************/

//Function Prototypes
int hello1Function(string name1);
int hello2Function(string name2);

/*
* main.cpp
*/
int main()
{
    string name1 = "Ryan Solanki";
    hello1Function(name1);

    string name2 = "Ethan Lew";
    hello2Function(name2);

    return 0;
}
