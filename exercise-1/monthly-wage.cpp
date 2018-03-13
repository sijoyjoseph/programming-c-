#include <iostream>
#include <string>

using namespace std;

int main() {
  double dailyWage = 6000.0;
  // variables
  double fivePr = 5.0 , sevenPr = 7.0, tenPr = 10.0;

  // content
  fivePr = ((fivePr/100.0)*dailyWage);
  sevenPr = ((sevenPr/100.0)*dailyWage);
  tenPr = ((tenPr/100.0)*dailyWage);

  // Display
  cout << fivePr << " " << sevenPr << " " << tenPr << endl;
}
