#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  int start = 0;
  int end = n - 1;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  while (start <= end)
  {
    swap(a[start], a[end]);
    start++;
    end--;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i];
  }
}