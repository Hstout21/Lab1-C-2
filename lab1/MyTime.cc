/**
 *   @file: MyTime.cc
 * @author: Hunter Stout
 *   @date: 1/23/2022
 *  @brief: MyTime implementation file.
 */

#include "MyTime.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//########## Constructor ##########
MyTime::MyTime(int h, int m){
    hours = h;
    minutes = m;
}

//########## Member functions ##########
void MyTime::Reset(int h, int m){
    hours = h;
    minutes = m;
}
void MyTime::simplify(){
    hours += minutes/60;
    minutes = minutes%60;
}
void MyTime::input(){
	char junk;
	cout << "Enter hour: ";
    cin >> hours;
    cin.get(junk);
	cout << "Enter Minutes: ";
    cin >> minutes;
	cout << endl;
}
void MyTime::output()const{
    cout << hours << ':' << setw(2) << setfill('0') << minutes;
}

//########## Operator overloaders ##########
MyTime MyTime::operator + (const MyTime& t1) const{
	MyTime tmp;
    tmp.hours = t1.hours + hours;
    tmp.minutes = t1.minutes + minutes;
    tmp.simplify();
    return tmp;
}
MyTime MyTime::operator - (const MyTime& t1) const{
    MyTime tmp;
    tmp.minutes = abs((t1.hours*60+t1.minutes) - (hours*60+minutes));
    tmp.simplify();
    return tmp;
}
MyTime MyTime::operator / (const MyTime& t1) const{
    MyTime tmp;
    tmp.minutes = t1.hours*60 + t1.minutes;
    tmp.simplify();
    return tmp;
}
MyTime MyTime::operator * (const MyTime& t1) const{
    MyTime tmp;
    tmp.minutes = t1.hours*60 + t1.minutes;
    tmp.simplify();
    return tmp;
}
bool MyTime::operator == (const MyTime& t1) const{
    return t1.hours == hours && t1.minutes == minutes;
}
bool MyTime::operator < (const MyTime& t1) const{
    return (t1.hours*60 + t1.minutes) < (hours*60 + minutes);
}
bool MyTime::operator <=(const MyTime& t1) const{
    return (t1 == hours && minutes) || (t1 < hours && minutes);
}

//########## Outside functions ##########
ostream& operator <<(ostream& fout, const MyTime& t){
    t.output();
    return fout;
}
istream& operator >>(istream& fin, MyTime& t){
    t.input();
    t.simplify();
    return fin;
}
