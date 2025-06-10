#include <iostream>
using namespace std;

int n;
int liczba_inwersji = 0;

int inwersje(int f[], int size)
{
    int counter = 0;
    int i = 0;
    while (i < size)
    {
        int ii = i;
        while (ii < size)
        {
            if (f[i] > f[ii])
            {
                counter = counter + 1;
            }
            ii = ii + 1;
        }
        i = i + 1;
    }
    return counter;
}

int main()
{
    cin >> n;
    int wejscia[n];
    for (int i = 0; i<n;i++)
    {
        cin >> wejscia[i];
    }
    liczba_inwersji = inwersje(wejscia, n);
    cout << liczba_inwersji << "\n";

}