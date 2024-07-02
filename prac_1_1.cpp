#include <iostream>
using namespace std;

bool can_pairs(int arr[], int num, int k)
{
  int count = 0;
  int visited[num];

  // for creating position of seconf array==-1
  for (int k = 0; k < num; k++)
  {
    visited[k] = -1;
  }

  // for checking main condition
  for (int i = 0; i < num; i++)
  {
    for (int j = i + 1; j < num; j++)
    {

      if ((arr[i] + arr[j]) % k == 0 && visited[i] == -1 && visited[j] == -1)
      {
        count++;
        visited[i] = 1;
        visited[j] = 1;
        cout << "(" << arr[i] << "," << arr[j] << ")" << endl;
      }
    }
  }

  // for creating half number of pairs
  if (count == num / 2)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int x, k;
  cout << "Enter number:";
  cin >> x;

  // for checking odd number
  if (x % 2 == 1)
  {
    cout << "-1";
    return 0;
  }

  // enter array
  int arr[x];
  for (int i = 0; i < x; i++)
  {
    cin >> arr[i];
  }

  // number by divide
  cout << "Enter a number by which you want to divide:";
  cin >> k;
  if (k <= 0)
  {
    cout << "-1" << endl;
    return 0;
  }

  // x = sizeof(arr) / sizeof(arr[0]);
  can_pairs(arr, x, k) ? cout << "True" : cout << "False";
  return 0;
}
