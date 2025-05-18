#include <iostream>
#include <vector>
using namespace std;

int n;
vector<int> rara;


vector<int> sort(vector<int> lista, int size)
{
    bool swapping = true;
    while(swapping)
    {
        swapping = false;
        int i = 1;
        while(i < size)
        {
            if (lista[i - 1] > lista[i]) 
            {
                swap(lista[i - 1], lista[i]);
                swapping = true;
            }
            i = i + 1;
        }
    }
    return lista;
}

int main() 
{
    cin >> n;
    int d;
    for (int i = 0; i<n;i++)
    {
        cin >> d;
        rara.push_back(d);
    }
    rara = sort(rara, n);
    for (auto v : rara)
        cout << v << "\n";
}