/* 
 * File:   main.cpp
 * Author: Lorenzo Aquino
 * Purpose: Homework Assignment
 *
 * Created on January 8, 2015, 10:36 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
 int a, b, sum, product;
 //Prompt user to input integers
 cout << "Press return after entering a number.\n";
 cout << "Enter the 1st integer:\n";
 cin >> a;
 cout << "Enter the 2nd integer:\n";
 cin >> b;
 sum = a + b;
 product = a * b;
 //output
 cout<<"The sum of the integers is "<< sum << endl;
 cout << "The Product of the integers is " << product << endl;
 cout << "This is the end of the program.\n";
 return 0;
}

