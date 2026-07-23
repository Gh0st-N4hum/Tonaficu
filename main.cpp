#include <iostream>
#include <limits>
#include <stdlib.h>
#include <sstream>

using namespace std;

int sqr(int x)
{

    return x * x;
}

int main()
{
    char choice;

    do
    {
        int num;
        cout << "enter a number: ";
        cin >> num;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            system("cls");
            cout << "error, enter a valid input: ";
        }

        int skwer = sqr(num);

        cout << "The square of " << num << " is " << skwer;

        cout << "\n Do you want to know more square numbers? Y/N" << endl;
        cin >> choice;



    } while (choice == 'Y' || choice == 'y');

    cout << "Till you come again...";

    return 0;
}