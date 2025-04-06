#include <iostream>
#include <list>
using namespace std;

int n;
long long int ff;
int ii = 2;
long long int f[3] {1};
long long int answ;

long long int fibonacci(int nn) 
{
    ii = ii + 1;
    f[2] = f[1] + f[0];
    f[0] = f[1];
    f[1] = f[2];
    if (ii < nn) 
    {
        f[2] = fibonacci(nn);
    }
    if (nn < 2)
        return 1;
    return f[2];
}
int main()
{
    f[0] = 1;
    f[1] = 1;
    f[2] = 1;
    cin >> n;
    ff = fibonacci(n);
    cout << ff;
}