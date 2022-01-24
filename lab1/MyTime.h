/**
 *   @file: MyTime.h
 * @author: Hunter Stout
 *   @date: 1/23/2022
 *  @brief: My time header file.
 */

#include <iostream>
#ifndef MYTIME_H
#define MYTIME_H
    
class MyTime{

  public:

    //Constructor
    /**
    * MyTime - Default constructor.
    * @h - Hours input.
    * @m - Time input.
    */
    MyTime(int h = 0, int m = 0);  

    //Members
    /**
    * Reset - Sets values to 0.
    * @h - Hours input.
    * @m - Time input.
    */
    void Reset(int h, int m);
    /**
    * get_hours - Hours placeholder.
    * @return - Hours.
    */
    int get_hours() const{return hours;}
    /**
    * get_minutes - Minutes placeholder.
    * @return - Minutes.
    */
    int get_minutes() const{return minutes;}
    /**
    * input - Cin input.
    */
    void input();
    /**
    * output - Completes time for cout.
    */     
    void output()const;
    /**
    * simplify - Cleans up times.
    */
    void simplify();

    // Friend functions
    /**
    * "+" operator - Adds time 1 & 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    MyTime operator + (const MyTime& t1)const;
    /**
    * "-" operator - Subtracts time 1 & 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    MyTime operator - (const MyTime& t1)const;
    /**
    * "*" operator - Multiplies time 1 & 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    MyTime operator * (const MyTime& t1)const;
    /**
    * "/" operator - Divides time 1 & 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    MyTime operator / (const MyTime& t1)const;
    /**
    * "==" operator - Checks if time 1 & 2 are equal.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    bool operator == (const MyTime& t1)const;
    /**
    * "<" operator - Checks if time 1 is less than 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    bool operator < (const MyTime& t1)const;
    /**
    * "<=" operator - Checks if time 1 is less than or equal to 2.
    * @t1 - time 1.
    * @t2 - time 2.
    */
    bool operator <= (const MyTime& t1)const;
   
  private:
      int hours;
      int minutes;
 };

    /**
    * "istream" operator - Takes inputs for cin.
    * @fin - stream.
    * @t - time.
    */
    std::istream& operator >>(std::istream& fin, MyTime& t);
    /**
    * "ostream" operator - Cleans up time for output.
    * @fout - Out stream.
    * @t - time.
    */
    std::ostream& operator <<(std::ostream& fout, const MyTime& t);

#endif