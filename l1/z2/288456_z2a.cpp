#include <iostream>
using namespace std;

int n;
int i = 2;
int ii = 2;
int count = 0;

int main()
{
    cin >> n;
    n=n+1;
    int numbers[n] {0};
    for (int iii = 2; iii < n; iii++)
    {
        numbers[iii]=1;
    }
    while(i<n)
    {
        ii = 2;
        i=i+1; 
        while (ii<i)
        {
            if(i%ii==0 && numbers[i]==1)
            {
                numbers[i] = 0;
            }
            ii=ii+1;
        }
    } 
    int i = 0;
    while (i < n)
    {
        count = count + numbers[i];
        i=i+1; 
    }
    cout << count;
    return 0;
}