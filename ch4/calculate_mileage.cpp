#include <iostream>
#include <vector>

using namespace std;

enum State {Manual = 0, Auto = 1, Ready = 2};

int startodom = -1;
int endodom = -1;
int totalodom = 0;

struct datalog {
    int timestamp;
    int value; // av miles
    State drivemode;
};

    vector<datalog> data{

    {500,  25, Manual},
    {600,  26, Auto},
    {700,  27, Auto},
    {800,  30, Manual},
    {900,  35, Ready},
    {1000, 36, Auto},
    {1100, 38, Manual},
    {1200, 55, Auto},
    {1300, 57, Auto},
    {1400, 65, Manual},
    {1500, 66, Manual},
    };

int main()  
{
    for (int i = 0; i < data.size(); i++)
    {
        if (data[i].drivemode == 1 && data[i].value != -1 )
        {
            startodom = data[i].value;
            cout << "Start Odomoter when AV mode = " << startodom << endl;
        }
        
        if (data[i].drivemode == 0 && data[i].value != startodom )
        {
            endodom = data[i].value;
            cout << "End Odomoter when AV mode " << endodom << endl;

        }


    }
    
    cout << "Total Autonomous Miles = " << totalodom << endl;
    // cout << "Total Autonomous Miles = " << totalodom << endl;
    return 0;
}