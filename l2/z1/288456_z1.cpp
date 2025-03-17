#include <iostream>
#include <list>
using namespace std;

int n =56;
int reszta = 0;
int maxmax = 0;
int nwd = 1;
bool wait = 0;
int ii = 0;
int resztaa = 1;

int count_nwd()
{
    while (resztaa != 0)
    {
    resztaa = maxmax % reszta;
    //cout << resztaa << ",, \n";
    if(resztaa != 0)
    {
        nwd = maxmax / reszta;
        //cout << nwd << ".. \n";
        maxmax = reszta;
        reszta = resztaa;
    }
    //cout << reszta << "!!\n";
    }
    return reszta;
}


int main()
{
    cin >> n;
    int wejscia[n];
    for (int i = 0; i<n;i++)
    {
        cin >> wejscia[i];
    }
    while (ii<n-1)
    {
        ii = ii + 1;
        if(wejscia[ii] != wejscia[ii - 1])
        {
            reszta = min(wejscia[ii], wejscia[ii-1]);
            //cout << "bbbb \n";
            maxmax = max(wejscia[ii], wejscia[ii-1]);
            resztaa = 1;
            wejscia[ii] = count_nwd();
            wejscia[ii - 1] = wejscia[ii];
            ii = 0;
        }
    }
    cout << wejscia[0];
}