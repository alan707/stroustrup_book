#include "../include/std_lib_facilities.h"
int main()  
{
    cout << "Please enter your first name and age\n"; // prompts first name and age" 
    string first_name = "???"; 
    double age = 0.0; // modified for children who can be very proud of being 5.5 years old
    int age_in_months = 0; // initialize age in months
    cin >> first_name >> age; // get name and age from console
    age_in_months = age * 12 ; // convert age to months
    cout << "Hello, " << first_name << 
        " (age in months: "<< age_in_months <<", age in years: "<< age <<" )\n"; 

    return 0;   
}
