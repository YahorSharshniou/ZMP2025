#include <iostream>
#include <list>
using namespace std;

int n;
int count5 = 0;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        if(i%5==0)
        {
            count5 = count5+1;
        }
    }
    cout << count5;
    return 0;
}