#include <iostream>
using namespace std;

int add_func(int a, int b)
{
    return a - b;
}

int main()
{

    int result = add_func(45, 89);
    cout << result;
    return 0;
}