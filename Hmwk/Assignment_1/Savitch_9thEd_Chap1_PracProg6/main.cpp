/* 
 * File:   main.cpp
 * Author: Lorenzo Aquino
 * Purpose: to show errors that may happen to beginners like me
 * Created on January 8, 2015, 11:00 AM
 */

#include <cstdlib>
#include <iostream>
//a)error: <<iostream> "cannot find include file <<iostream>" 
//b)error: iostream> "#include expects "FILENAME" or <FILENAME>
using namespace std;

/*
 * 
 */
//e)error: unidentified tokens and main identifiers
 int main (int argc, char** argv) {
 //c)error: unable to resolve identifier argc
 //d)error: id returned 1 exit status   
    int number_of_pods, peas_per_pod, total_peas;
 cout << "Press return after entering a number.\n";
 //f) error: expected ";" before constant string
 cout << "Enter the number of pods:\n";
 cin >> number_of_pods;
 cout << "Enter the number of peas in a pod:\n";
 cin >> peas_per_pod;
 total_peas = number_of_pods * peas_per_pod;
 cout << "If you have ";
 cout << number_of_pods;
 cout << " pea pods\n";
 cout << "and ";
 cout << peas_per_pod;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << total_peas;
 cout << " peas in all the pods.\n";

    return 0;
 }
//f)error:expected }at the end of input/unexpected end of file
