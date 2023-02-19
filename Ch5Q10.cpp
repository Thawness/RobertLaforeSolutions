// Lafore C++ Ch.5 Q.10 Solution

#include <iostream>

using namespace std;

void counter (void);

int main()
{
    for (int counterc=0; counterc<10; counterc++)
        counter();
    return 0;
}

void counter(void)
{
    static int innercount = 0; innercount++;
    cout << "I have been called " << innercount << " times." << endl;
}
