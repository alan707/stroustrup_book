#include "../include/std_lib_facilities.h"
int main()  
{
    
    string first_name = "???"; 
    string friend_name = "????";
    string bodyText;
    string letter;
    string greeting;
    string friendQuestion;
    char friend_sex = 0;
    int age;

     bodyText = "   Lorem ipsum dolor amet quinoa offal gastropub vegan aesthetic mumblecore tousled. Street art tofu mumblecore typewriter PBR&B banh mi, jianbing semiotics. Celiac lyft whatever forage, kogi you probably haven't heard of them pop-up activated charcoal swag intelligentsia XOXO fingerstache.\n";
    

    cout << "Enter the name of the person you want to write to\n"; // prompts person you want to write to" 
    cin >> first_name; // get name from console
    greeting = "Dear " + first_name +",\n";
    letter = greeting + bodyText;
    cout << letter;
    cout << "Enter the name of another friend\n";
    cin >> friend_name;
    friendQuestion = "\nHave you seen " + friend_name + " lately?\n"; // add two new lines
    letter = letter + friendQuestion;
    cout << "New revised letter: \n";
    cout << letter <<"\n";

    cout << "Please enter \"m\" if your friend is a male and \"f\" if your friend is a female \n";
    cin >> friend_sex;

    if (friend_sex == 'm'){
        cout << "\nIf you see "<< friend_name << " please ask him to call me\n";
    }
    
    if (friend_sex == 'f'){
        cout << "\nIf you see "<< friend_name << " please ask her to call me\n";
    }
    // Enter age of recipient
    //TODO: Figure out why if statement is not continuing
    cout << "\nPlease enter age of the recipient \n";
    cin >> age;

    cout << "\nI hear you just had a birthday and you are " << age << " years old.\n";

    return 0;   
}
