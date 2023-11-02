#include <iostream>
using namespace std;

int count;

int main(){
  cout << "what number should I count to? ";
  cin >> count;
  count++; //start on 1 instead of 0
  
  for(int i = 1; i < count; i++){
    cout << i << endl;
  }

  return 0;
}
