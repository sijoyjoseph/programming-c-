// The East Coast sales division of a company generates 58 percent of total sales. Based
// on that percentage, write a program that will predict how much the East Coast division
// will generate if the company has $8.6 million in sales this year.

#include <iostream>

using namespace std;

int main() {
  const double PR = 58.0;
  const double SALES = 8.6E6;

  double sales;

  sales = ((PR/100.0)*SALES);

  cout << "Sales this year: " << sales << endl;
}
