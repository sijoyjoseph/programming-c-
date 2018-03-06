#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int y (20);
  int z {30};

  // Print the variable values
  cout << "Printing the variables" << endl;
  cout << x << endl;
  cout << y << endl;
  cout << z << endl;

  int result;
  cout << "Basic Arithematic" << endl;
  result = x + y + z;
  cout << result << endl;

  return 0;
}
