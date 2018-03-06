#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
  string line;

  fstream infile("example.txt");

  while (getline(infile, line)) {
    cout << line << endl;
  }
}
