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
        int ii = i;
        while(ii%5==0)
        {
            count5 = count5+1;
            ii=ii/5;
        }
    }
    cout << count5;
    return 0;
}