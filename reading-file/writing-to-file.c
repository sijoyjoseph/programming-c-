#include <iostream>
#include <fstream>
using namespace std;

int writeFile () {
  ofstream myfile;
  myfile.open("example.txt");
  myfile << "This is the first line.\n";
  myfile << "This is the second line.\n";
  myfile << "This is the third line.\n";
  myfile << "This is the fourth line.\n";
  myfile.close();
  return 0;
}

int main () {
  writeFile();
}
