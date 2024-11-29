#include <iostream>
using namespace std;

int main() {
    int  num1 , num2 , result;
    char operation;
    
    cout << "Enter your Operation: + , - , * , / :";
    cin >> operation;
    
    cout << "Enter a Number: ";
    cin >> num1; 
   
    cout << "Enter a Number: ";
    cin >> num2;
    
    switch(operation) {
        case '+' : 
        result = num1 + num2;
        cout << "The Result is: " << num1 << " + " << num2 << " = " << result << endl;
        break;
        
        case '-' :
        result = num1 - num2;
        cout << "The Result is: " << num1 << " - " << num2 << " = " << result << endl;
        break; 
        
        case '*' : 
        result = num1 * num2;
        cout << "The Result is: "
        << num1 << " * " << num2 << " * " << result << endl;
        break;
        
        case '/' : 
        result = num1 / num2;
        cout << "The Result is: " << num1 << " / " << num2 << " / " << result << endl;
        break;
        
        default: 
        cout << "Invalid Operation";
        
        return 0;
        
        
       
    } 
    
    
    
    
    
   
        
    }
    
    
    
