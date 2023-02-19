/*
Solution to Robert Lafore CPP Ch.5 Q.11
--------------------------------------------

Write a program that obtains from the user two money amounts in old-style British pound (£9:19:11), adds them,
and displays the result in old style format.
Use three functions. First should obtain a pounds-shilling-pence value from the user and return the value as a
structure of type sterling. The second should take two arguments of type sterling and return a value of struct
sterling type, which is the sum of the arguments. The third should take a sterling structure as its argument
and display its value.
*/

#include <iostream>

using namespace std;

struct sterling{
    int pound, shilling, pence;
    };

sterling OldCurrency (int, int, int);
sterling sterlingsum (sterling, sterling);
void sterlingDisplay (sterling);

int main(void)
{
    sterling s1, s2, sum;

    cout << "Enter first value for old British currency: \n" << endl;
    cout << "Enter pound: "; cin >> s1.pound;
    cout << "Enter shilling: "; cin >> s1.shilling;
    cout << "Enter pence: "; cin >> s1.pence;

    cout << "\nEnter second value for old British currency: \n" << endl;
    cout << "Enter pound: "; cin >> s2.pound;
    cout << "Enter shilling: "; cin >> s2.shilling;
    cout << "Enter pence: "; cin >> s2.pence;

    s1 = OldCurrency (s1.pound, s1.shilling, s1.pence);
    s2 = OldCurrency (s2.pound, s2.shilling, s2.pence);
    sum = sterlingsum (s1, s2);

    cout << "\nFirst value: "; sterlingDisplay (s1);
    cout << "\nSecond value: "; sterlingDisplay (s2);
    cout << "\nSum : "; sterlingDisplay (sum);
    cout << endl;

return 0;
}

sterling OldCurrency (int pnd, int shill, int penc) {
    sterling s;
    s.pound = pnd;
    s.shilling = shill;
    s.pence = penc;
    return s;
}

sterling sterlingsum(sterling st1, sterling st2) {

    st1.pound = st1.pound + st2.pound;
    st1.shilling = st1.shilling + st2.shilling;
    st1.pence = st1.pence + st2.pence;
    if(st1.pence > 11) {st1.shilling += static_cast <int> (st1.pence/12); st1.pence %= 12;}
    if(st1.shilling > 19) {st1.pound += static_cast <int> (st1.shilling/20); st1.shilling %= 20;}
    return st1;
}

void sterlingDisplay (sterling st) {
    cout << "\x9c " << st.pound << ":" << st.shilling << ":" << st.pence; // \x9c is the hex code for pound symbol
}
