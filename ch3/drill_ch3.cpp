#include "../include/std_lib_facilities.h"
int main()  
{
    cout << "Please enter your first name (followed by 'enter'):\n"; // prompts first name and age" 
    string first_name = "???"; 
    cin >> first_name; // get name and age from console
    cout << "Hello, " << first_name <<"!\n";
    return 0;   
}
