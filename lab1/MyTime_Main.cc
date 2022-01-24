/**
 *   @file: MyTime_Main.cc
 * @author: Hunter Stout
 *   @date: 1/23/2022
 *  @brief: MyTime main file.
 */

#include "MyTime.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main(int argc, char const *argv[]) {

    MyTime t1, t2;
    //Inputs
    cout << "Enter a time :D" << endl;
    cin >> t1;
    cout << "Enter another time :D :D" << endl;
    cin >> t2;

    //Overloaded opperator outputs.
    cout << t1 << " + " << t2 << " = " << t1 + t2 << endl;
    cout << t1 << " - " << t2 << " = " << t1 - t2 << endl;
    cout << t1 << " * " << t2 << " = " << t1 * t2 << endl;
    cout << t1 << " / " << t2 << " = " << t1 / t2 << endl;
    if(t1 == t2) {
        cout << t1 << " = " << t2 << endl;
    }
    else {
        cout << t1 << " /= " << t2 << endl;
    }
    if(t1 < t2) {
        cout << t1 << " < " << t2 << endl;
    }
    else {
        cout << t1 << " /< " << t2 << endl;
    }
    if(t1 <= t2) {
        cout << t1 << " <= " << t2 << endl;
    }
    else {
        cout << t1 << " /<= " << t2 << endl;
    }

    return 0;
}