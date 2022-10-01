/**
File: high_low.cc
Name: Caleigh Gillespie
Email: cg083718@ohio.edu
Date: 09-29-2022
*/

#include <iostream>

using namespace std;

int main()
{
    
    //DEFINING VARIABLES
    int end_loop = -100; //This values ends the loop
    double user_input;
    double highest_high = -1000; //Pre-set to absurdly low temperature so no interference from not pre-setting
    double lowest_low = 1000; //Pre-set to absurdly high temperature so no interference from not pre-setting

    //Will continue until user input is equal to -100
    while (user_input != end_loop)
    {
        //Tells user they can exit the loop by entering -100
        cout << "End loop anytime by entering -100." << endl;

        //Asking user to enter the highest temperature for the day
        cout << "\nEnter the high temperature for the day: " << endl;
        cin >> user_input;

        //If user input is = -100 skips if statment
        if (user_input != end_loop)
        {

            //if new value is higher than highest_high
            if (user_input > highest_high)
            {
                //Setting highest_high to new value
                highest_high = user_input;
            }

            //Asking user to enter the lowest temperature for the day
            cout << "Enter the low temperature for the day: " << endl;
            cin >> user_input;
        
            //If new value is lower than lowest_low
            if (user_input < lowest_low)
            {
                //Setting lowest_low to new value
                lowest_low = user_input;
            }
        }
    }


    //Outputting the highest recorded temperature
    cout << "\nThe highest temperature so far is " << highest_high << endl;
    //Outputting the lowest recorded temperature
    cout << "The lowest temperature so far is " << lowest_low << endl;
}