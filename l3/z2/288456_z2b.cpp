#include <iostream>
#include <string>
using namespace std;

int n;
int k;

void subset(int T[], int len, int f[], int len2, int ii, int size)
{
    if (ii >= len)
    {
        int i = 0;
        while (i < len2)
        {
            if(size >= len2)
            {
                if (i == 0)
                {
                    cout << "{";
                }
                cout << f[i];
            }
        i = i + 1;
        if (size >= len2 && i < len2)
        {
            cout << ", ";
        }
        }
        if(i > 0 && i <= len)
            cout << "}\n";

        return;
    }
    subset(T, len, f, len2, ii+1, size);

    f[len2] = T[ii];
    subset(T, len, f, len2+1, ii+1, size);
}



int main()
{
    cin >> n;
    int T[n] {0};
    for (int jj = 0; jj<n;jj++)
    {
        cin >> T[jj];
    }
    cin >> k;
    int f[n] = {0};
    if (k >= 0)
        cout << "empty\n";
    subset(T, n, f, 0, 0, k);
}