#include <iostream>

using namespace std;

int main() {
  double purchase = 95.0;

  const double state = 4.0;
  const double country = 2.0;

  double total;

  total = (((state/100.0)*purchase) + ((country/100)*purchase));
  cout << "Total Sales tax: " << total << endl;
  return 0;
}
