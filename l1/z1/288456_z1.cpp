#include <iostream>
using namespace std;

int x;
int count = 1;

int main()
{
    cin >> x;
    while (x!=1)
    {
        cout << x << " ";
        if(x%2==0)
        {
            x=x/2;
        }
        else
        {
            x=3*x+1;
        }
        count = count + 1;
    }
    cout << x << ", " << count;
}