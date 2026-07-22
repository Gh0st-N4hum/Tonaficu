#include <iostream>

using namespace std;

bool is_even(int a)
{
    return a % 2 == 0;
}

int main()
{
    if (is_even(4))
    {
        cout << "even";
    }
    else
    {

        cout << "odd";
    }
}