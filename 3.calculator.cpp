#include <iostream>
using namespace std;

string num1;
string num2;
string operation;
float output;

int main() {
  cout << "calculator!\nwhich operation? (+, -, *, /)\n";
  cin >> operation;
  cout << "what is the first number? ";
  cin >> num1;
  cout << "what is the second number? ";
  cin >> num2;

  if(operation == "+"){
    output = stof(num1) + stof(num2);
  } else if (operation == "-") {
    output = stof(num1) - stof(num2);
  } else if (operation == "*") {
    output = stof(num1) * stof(num2);
  } else if (operation == "/"){
    output = stof(num1) / stof(num2);
  } else {
    cout << "invalid operation";
    return 1;
  }

  cout << output << endl;
  return 0;
}
