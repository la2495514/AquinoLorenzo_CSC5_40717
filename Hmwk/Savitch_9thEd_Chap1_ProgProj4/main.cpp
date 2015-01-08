/* 
 * File:   main.cpp
 * Author: LorenzoAquino
 * Created on January 6, 2015, 10:30 AM
 * Purpose: Hwk, Solution for free fall project
 */

//system libraries
#include <iostream>
using namespace std;

/*//user libraries
 * 
 */
//Global constant
const float GRAVITY=32.174;//(ft/sec^2)

//FunctionPrototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(seconds)
    float dist;//distance(ft)
    //prompt user for input
    cout<<"The program calculates free fall"<<endl;
    cout<<"Distance dropped in feet with an"<<endl;
    cout<<"Object starting at rest"<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The time input is a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    //dist=1.0f/2*GRAVITY*time*time;
    //dist=1/2.0f*GRAVITY*time*time;
    //dist=GRAVITY*time*time/2;
    dist=0.5f*GRAVITY*time*time;
    //now output the results
    cout<<"Distance Dropped ="<<dist<<"(ft)"<<endl;
    
    
    return 0;
}

