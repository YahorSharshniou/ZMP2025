#include <iostream>
#include <list>
using namespace std;

int d = 1;
int i = 2;
int ii = 2;
int count = 0;
int qd = 0;
int nn;

int Euler(int n)
{
    i = 2;
    ii = 2;
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
    return count;
}

int main()
{
    cin >> nn;
    while (d<=nn)
    {
        if(nn%d==0)
        {
            qd = Euler(d);
        }
        d=d+1;
    }
    cout << qd;
    return 0;
}