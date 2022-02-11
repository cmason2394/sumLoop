#include <iostream>
using namespace std;

//objective: make a loop that adds one each time.

int main() {
  double n, sum;
  int i;

  cout << "input n:" << endl;
  cin >> n;

  sum = 0;

  for (i = 0; i <= n; i++) {
    sum = i + 1;
    cout << sum << endl;
  }

  return 0;
}