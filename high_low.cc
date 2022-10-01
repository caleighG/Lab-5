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
    double highest_high; 
    double lowest_low;
    int i = 0; //Counter variable

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
            if (i == 0)//First loop value will be set to highest_high
            {
                highest_high = user_input;
            }
            //if new value is higher than highest_high
            else if (user_input > highest_high)
            {
                //Setting highest_high to new value
                highest_high = user_input;
            }

            //Asking user to enter the lowest temperature for the day
            cout << "Enter the low temperature for the day: " << endl;
            cin >> user_input;
            
            if (i == 0)//First loop value will be set to lowest_low
            {
                lowest_low = user_input;
            }
            //If new value is lower than lowest_low
            else if (user_input < lowest_low)
            {
                //Setting lowest_low to new value
                lowest_low = user_input;
            }
        }

        i++; //Adding 1 to i
    }


    //Outputting the highest recorded temperature
    cout << "\nThe highest temperature so far is " << highest_high << endl;
    //Outputting the lowest recorded temperature
    cout << "The lowest temperature so far is " << lowest_low << endl;
}