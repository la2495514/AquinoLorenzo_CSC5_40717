/* 
 * File:   main.cpp
 * Author: Lorenzo Aquino
 *
 * Created on January 8, 2015, 9:04 AM
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/* 
 * 
 */
//Global constant
const char VALQTR =25;//Value of a quarter=25 cents
const char VALDIME=10;//Value of a quarter=25 cents
const char VALNCKL= 5;//Value of a quarter=25 cents
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
unsigned char qrtrs , dimes , nicks , penns;
short tlChng;
//qrtrs are quarters
//nicks are nickels
//penns are pennies
//tlChng is total change
cout<<"This program counts your change!"<<endl;
cout<<"Limit each number of coin input to a range of 0-9"<<endl;
cout<<"Enter the amount of quarters you have."<<endl;
cin>>qrtrs;
cout<<"Enter the amount of dimes you have."<<endl;
cin>>dimes;
cout<<"Enter the amount of nickels you have."<<endl;
cin>>nicks;
cout<<"Enter the amount of pennies you have."<<endl;
cin>>penns;
tlChng = static_cast<unsigned short>
((qrtrs-48)*VALQTR +
(dimes-48)*VALDIME +
(nicks-48)*VALNCKL +
(penns-48));
cout<<"You have ";
cout<<tlChng;
cout<<" cents in change."<<endl;
//Exit stage right
return 0;
}

