#include <iostream>
#include <fstream>
using namespace std;

string toAdd;
string fileText;

int main(){
  ifstream rfile("rw-test.txt");
  
  while(getline(rfile, fileText)){
    cout << fileText;
  }
  
  rfile.close();

  ofstream wfile("rw-test.txt", ios::out | ios::app);

  cout << "\nWhat would you like to add to the file? ";
  cin >> toAdd;

  wfile << toAdd << endl;

  wfile.close();
}
