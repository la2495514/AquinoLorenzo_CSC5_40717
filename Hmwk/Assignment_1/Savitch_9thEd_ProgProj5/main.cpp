/* 
 * File:   main.cpp
 * Author: Lorenzo Aquino
 * Purpose: HwkAssignment 
 * Created on January 8, 2015, 8:43 AM
 */

#include <cstdlib>
#include<iostream>
using namespace std;

/* 
 * 
 */
int main(int argc, char** argv) {
    
    char c;//character
    //prompt user fo a character
    cout<<"This program inputs a character from the keyboard"<<endl;
    cout<<"and then puts a large block letter C"<<endl;
    cout<<"composed of the character, now input a character"<<endl;
    cin>>c;
    //Print out large letter C from the character user input
    cout<<"  "<<c<<c<<c<<endl;
    cout<<" "<<c<<" "<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<c<<endl;
    cout<<" "<<c<<" "<<c<<endl;
    cout<<"  "<<c<<c<<c<<endl;
    return 0;
}

