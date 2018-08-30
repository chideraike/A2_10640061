#include <iostream>
using namespace std;

int main()
{
  int n, i;
  bool iPrime = true;

  cout << "Enter a Positive Integer: ";
  cin >> n;

  for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          iPrime = false;
          break;
      }
  }
  if (iPrime)
      cout << "This is a Prime Number";
  else
      cout << "This is not a Prime Number";

  return 0;
}
