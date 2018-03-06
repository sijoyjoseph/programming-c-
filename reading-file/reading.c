#include <iostream>
#include <fstream>

using namespace std;

int main () {
  string a;
  ifstream infile("example.txt");

  while (infile >> a) {
    cout << a;
  }
  
}
