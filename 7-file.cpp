// basic file operations
#include <iostream>
#include <fstream>
using namespace std;


int main () {
  ofstream myfile;
  myfile.open ("ejemplo.txt");
  myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
