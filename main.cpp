#include <iostream>
#include <limits>
#include <stdlib.h>
#include <sstream>

using namespace std;

int sqr(int x)
{

    return x * x;
}

bool odd_or_even(int x)
{

    return x % 2 == 0;
}

int main()
{
    char choice1;
    bool valid_input = false;

    do
    {
        int num;
        int choice;

        do
        {
            system("cls");
            cout << "[1] Square a number" << endl;
            cout << "[2] Check if its odd or even" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            if (cin.fail())
            {
                system("cls");
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "\n invalid choice, please try again: ";
                valid_input = false;
            }
            else
            {
                valid_input = true;
            }

        } while (!valid_input);

        if (choice == 1)
        {
            do
            {

                cout << "\n Give me number that you want to know its square: ";
                cin >> num;

                if (cin.fail())
                {

                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    system("cls");
                    cout << "error, enter a valid input: ";
                    valid_input = false;
                }

                else
                {
                    valid_input = true;
                }

            } while (!valid_input);

            int skwer = sqr(num);

            cout << "The square of " << num << " is " << skwer;

            cout << "\n Would you like to do it once again Y/N? \n ";
            cin >> choice1;
        }
        else if (choice == 2)
        {
            int num2;

            do
            {

                system("cls");
                cout << "Provide me number and let's see if its odd or even: " << endl;
                cin >> num2;

                if (cin.fail())
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    system("cls");
                    cout << "\n error, please try again: ";
                    valid_input = false;
                }

                else
                {
                    valid_input = true;
                }

            } while (!valid_input);

            bool result = odd_or_even(num2);

            if (result == 1)
            {

                cout << "The number " << num2 << " is  even \n";
            }
            else
            {
                cout << "The number " << num2 << " is odd \n ";
            }

            cout << "\n Would you like to do it once again Y/N? \n ";
            cin >> choice1;
        }
    } while (choice1 == 'Y' || choice1 == 'y');

    cout << "\n Till you come again...";

    return 0;
}