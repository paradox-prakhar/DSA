// Output
// A
// BB
// CCC
// DDDD
// EEEEE

#include <iostream>
using namespace std;
void P16(int n)
{
   
    for (int i = 0; i < n; i++)
    {
        char a = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << char(a);
            
        };
        cout << endl;
    };
}
int main()
{
    P16(5);
    return 0;
}