#include <iostream>
#include <list>
#include <Windows.h>

using namespace std;

int n;
int x;
bool found;
string indexes;
bool wait = false;
int main()
{
    cin >> x;
    cin >> n;
    int wejscia[n];
    for (int i = 0; i<n;i++)
    {
        cin >> wejscia[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(wejscia[i] == x)
        {
            if (!found)
            {
                cout << "tak ";
                found = true;
            }
            indexes = indexes + to_string(i) + " ";
        }
    }
    while(!wait)
    { 
        if((GetKeyState(VK_SPACE) & 0x8000))
        {
            cout << indexes;
            wait = true;
        }
    }
}