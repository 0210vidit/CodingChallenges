#include <iostream>
using namespace std;

int main()
{

  int n;
  cin >> n;
  int arr[n];
  int largest = INT_MIN;
  int smallest = INT_MAX;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout << largest << endl;
  cout << smallest << endl;
}