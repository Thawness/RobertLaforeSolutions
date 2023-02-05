// program to calculate power of different data types by implementing function overloading
#include <iostream>

using namespace std;

double power (double, int p=2); // default power is raised to 2
int power (int, int p=2);
char power (char, int p=2);
long power (long, int p=2);
float power (float, int p=2);


int main()
{
    double d1; char c1; int i1; long l1; float f1;
    char yesorno;
    int pow = 1;

    cout << "C++ program to implement function overloading: " << endl;
    cout << "==========================================================" << endl;

    cout << "\nEnter a double number: ";
    cin >> d1;
    cout <<"\nEnter a char: ";
    cin >> c1;
    cout <<"\nEnter an int: ";
    cin >> i1;
    cout <<"\nEnter a long: ";
    cin >> l1;
    cout <<"\nEnter a float: ";
    cin >> f1;

    cout << "\n----------------------------------------------------------" << endl;
    cout << "\nWant to enter power (y/n): ";
    cin >> yesorno;
    cout << "\n----------------------------------------------------------" << endl;

    if(yesorno == 'y'){
        cout << "\nEnter power: ";
        cin >> pow;
        cout << "\n----------------------------------------------------------" << endl;
        cout << "\nAnswer double is : " << power(d1, pow) << endl;
        cout << "\nAnswer char is : " << power(c1, pow) << endl;
        cout << "\nAnswer int is : " << power(i1, pow) << endl;
        cout << "\nAnswer long is : " << power(l1, pow) << endl;
        cout << "\nAnswer float is: " << power(f1, pow) << endl;
        cout << "\n----------------------------------------------------------" << endl;
        cout << "----------------------------------------------------------" << endl;
    }
    else {
        cout << "----------------------------------------------------------" << endl;
        cout << "\nAnswer double is : " << power(d1) << endl;
        cout << "\nAnswer char is : " << power (c1) << endl;
        cout << "\nAnswer int is : " << power (i1) << endl;
        cout << "\nAnswer long is : " << power (l1) << endl;
        cout << "\nAnswer float is : " << power (f1) << endl;
        cout << "\n----------------------------------------------------------" << endl;
        cout << "----------------------------------------------------------" << endl;
    }
    return 0;
}

double power (double d, int p) // returns n raised to the power of p
{
    double result = 1.0;
    for (int j=0; j<p; j++)
        result *= d;
    return result;
}

int power (int i, int p)
{
    int result = 1;
    for (int j=0; j<p; j++)
        result *= i;
    return result;
}

char power (char c, int p)
{
    char result = 1;
    for (int j=0; j<p; j++)
        result *= c;
    return result;
}

long power (long l, int p)
{
    long result = 1;
    for (int j=0; j<p; j++)
        result *=l;
    return result;
}

float power (float f, int p)
{
    float result = 1.0;
    for (int j=0; j<p; j++)
        result *=f;
    return result;
}

