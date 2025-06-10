#include <iostream>

using namespace std;

int n = 0;

int max_diff(int f[], int size)
{
  int i = 0;
  int j = 0;
  int diff = f[j] - f[i];
  while (i < size)
  {
    while (j < size)
    {
      int diff_temp = f[j] - f[i];
      if (diff < diff_temp)
      {
        diff = diff_temp;
      }
      j = j + 1;
    }
    i = i + 1;
    j = i;
  }
  return diff;
}

int main()
{
  cin >> n;
  int wejscia[n];
  for (int i = 0; i<n;i++)
  {
      cin >> wejscia[i];
  }
  int maxxing = max_diff(wejscia, n);
  cout << maxxing << "\n";
}
