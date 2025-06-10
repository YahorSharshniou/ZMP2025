#include <iostream>
using namespace std;

int n;
int liczba_inwersji = 0;

int inwersje(int f[], int size)
{
    int counter = 0;
    int more_c = 0;
    int less_c = 0;
    int i = 1;
    int less[size] {0};
    int more[size] {0};
    int more_rec;
    int less_rec;
    while (i < size)
    {
        if(f[0] > f[i])
        {
            counter = counter + 1;
            less_c = less_c + 1;
            less[less_c] = f[i];
        }
        else 
        {
            more_c = more_c + 1;
            more[more_c] = f[i];

        }
        i = i + 1;
    }
    if (less_c != 0 && i <= size)
    {
        less_rec = inwersje(less, less_c);
    }
    if (more_c != 0 && i <= size)
    {
        more_rec = inwersje(more, more_c);
    }
    counter = counter + more_rec + less_rec;

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