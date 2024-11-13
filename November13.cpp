#include <iostream>
using namespace std;

int main() {
    string visitor;
    int month;
    int Day;
    int Year;
    
    float LeapYear = Year % 4;
    
    cout<<  " Hello, I am Joaquin  !!!  Welcome to my first C++ application" << endl;
    cout<< " Hey! What is your name:______"<< endl;
    cin>> visitor;
    cout << "Good Day " << visitor << "! it's nice to meet you!"<< endl;
    cout<< "When is your birthday?"<< endl;
    
  
    cout << "month: "<<endl;
    cin >> month;
    
    cout << "Day: "<<endl;
    cin >> Day;
    
    cout << "Year: "<<endl;
    cin >> Year;
    cout << "Your birthday is on " << month << Day << Year<< endl;
    cout<< LeapYear << endl;
    if (LeapYear == 0)
    cout << " Your Year is a Leap Year";
    else
    cout << "Your Year is not a Leap Year";
    
    
    
    
    
    
    
    return 0;
}