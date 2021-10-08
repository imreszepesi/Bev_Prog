// drill4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "std_lib_facilities.h"

int main()
{ 
    /* 
    1-5.feladat
  
    double first_number;
    double second_number;
    while (cin >> first_number >> second_number)
    {
        if (first_number > second_number)
        {
            cout << "The smaller value: " << second_number << endl;
            cout << "The larger value: " << first_number << endl;
        }
        if (first_number < second_number)
        {
            cout << "The smaller value: " << first_number << endl;
            cout << "The larger value: " << second_number << endl;
        }
        if (first_number == second_number)
        {
            cout << "The numbers are equal: " << endl;
        }
        if (abs(first_number - second_number) < 0.01)
        {
            cout << "The numbers are almost equal: " << endl;
        }
       
    }
       */
    /*
    6.feladat-
    */
    double smaller = std::numeric_limits<double>::max();
    double larger = std::numeric_limits<double>::min();
    double number;
    string unit;
    vector<double> numbers = {};
    vector<string> units = {};
    while (cin >> number >> unit)
    {
        /*Reject values without units or with "illegal" 
        representations of units, such
         as y, yard, meter, km, and gallons
            */
      
        
        if(unit == "cm" || unit == "in" || unit == "ft" || unit == "m")
        {
            //cm,in,ft,m//
            if (unit == "cm")
            {
               
                numbers.push_back(number * 0.01);
                number = number * 0.01;
            }
            if (unit == "in")
            {
               
                numbers.push_back(number * 0.0254);
                number = number * 0.0254;
            }
            if (unit == "ft")
            {
              
                numbers.push_back(number * 0.3048);
                number = number * 0.3048;
            }
            if (unit == "m")
            {
                numbers.push_back(number);
            }
           
            units.push_back(unit);
            if (number > larger)
            {
                
                cout << "The largest so far" << endl;
                larger = number;
            }
            if (number < smaller)
            {
                cout << "The smallest so far " << endl;
                smaller = number;
            }
        }
        else {
            cout << "illegal unit" << endl;
        }
       
    }
    //sort(numbers.begin(), numbers.end());
    cout << "The smallest: " << smaller <<  " m"<<endl;
    cout << "The largest: " << larger << " m" << endl;
    cout << "The number of values: " << numbers.size() << endl;
    double sum = 0;
    for (size_t i = 0; i < numbers.size(); i++)
    {
        sum = sum + numbers[i];
    }
    cout << "The sum of values: " << sum << "m" <<endl;
    cout << "All of them: \n";
    for (size_t i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << " m" << endl;
    }

}


