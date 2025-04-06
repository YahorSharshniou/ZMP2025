#include <iostream>
#include <list>
using namespace std;

long long int n;
long long int f;

long long fibonacci(long long int nn) 
{
    int ii = 2;
    long long int f[3] {1};
    f[0] = 1;
    f[1] = 1;
    while(ii <= nn) 
    {
        f[2] = f[1] + f[0];
        ii = ii + 1;
        if (ii >= nn)
        {
            long long int answ = f[2];
            return answ;
        }
        f[0] = f[1];
        f[1] = f[2];
    }
}
int main()
{
    cin >> n;
    f = fibonacci(n);
    cout << f;
}