#include <iostream>
using namespace std;

int day;

int main() {
  cout << "what day is it? (1-7) ";
  cin >> day;

  switch(day){
    case 1:
      cout << "Sunday:\nrelax!";
      break;
    case 2:
      cout << "Monday:\nrobotics after school";
      break;
    case 3:
      cout << "Tuesday:\ndinner early at 5:30 pm\nmove trash bins down\ndo dishes after dinner";
      break;
    case 4:
      cout << "Wednesday:\nrobotics after school\nmove trash bins up";
      break;
    case 5:
      cout << "Thursday:\ndo dishes after dinner";
      break;
    case 6:
      cout << "Friday:\nrobotics after school\npizza for dinner";
      break;
    case 7:
      cout << "Saturday:\nmaybe robotics";
      break;
    default:
      cout << "thats not a valid day!";
      return 1;
  }

  return 0;
}
