#include "../include/std_lib_facilities.h"
int main()  
{
    cout << "Please enter your first name and age\n"; // prompts first name and age" 
    string first_name = "???"; 
    int age = 0;
    cin >> first_name >> age;
    cout << "Hello, " << first_name << " (age "<< age <<")\n";
    return 0;   
}
