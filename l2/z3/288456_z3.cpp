#include <iostream>
#include <list>
#include<cmath>

using namespace std;

int n;
int x;
int outputt;
int i = 0;

int main()
{
    int wejscia1[8];
    for (int i = 0; i<8;i++)
    {
        cin >> wejscia1[i];
    }
    cout << "=============\n";
    int wejscia2[8];
    for (int i = 0; i<8;i++)
    {
        cin >> wejscia2[i];
    }
    while (i < 8)
    {
        outputt = wejscia1[i]^wejscia2[i];
        cout << outputt;
        i = i + 1;
    }
}