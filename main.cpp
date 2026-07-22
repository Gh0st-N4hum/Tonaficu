#include <iostream>

using namespace std;

int sqr(int x)
{

    return x * x;
}

int main()
{

    int num;
    cout << "enter a number: ";
    cin >> num;

    int skwer = sqr(num);

    cout << "The square of " << num << " is " << skwer;

    return 0;
}