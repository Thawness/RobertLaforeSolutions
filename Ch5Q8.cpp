// Solution to Robert Lafore C++ Ch.5 Q. 8

#include <iostream>

using namespace std;

void swap (int&, int&); // calling pass by reference

int main()
{
    int num1, num2;
    // char dummychar;
    cout << "enter two numbers for swapping :\n";
    cin >> num1;
    cin >> num2;

    swap (num1, num2);

    cout <<"first number after swap : " << num1 << endl;
    cout <<"second number after swap : " << num2 << endl;

    return 0;
}

void swap (int& a, int& b) // passing the arguments by reference
{
    int temp = a;
    a = b;
    b = temp;
}
