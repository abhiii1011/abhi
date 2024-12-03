#include <iostream>
using namespace std;
int main(){

double num1,num2 ; 
cout<<"Enter the two number : "<<endl;
cin>>num1>>num2;
char operation;
cout<< "Enter the operation : "<<endl;
cin>>operation ;


switch (operation)
{
case '+':
cout<<"Result: "<< num1 + num2<<endl;
    
    break;
    case '-':
cout<<"Result: "<< num1 -num2<<endl;
    
    break;
    case '*':
cout<<"Result: "<< num1 * num2<<endl;
    
    break;
    case '/':
    if (num2 != 0)
cout<<"Result: "<< num1 / num2<<endl;

else {
     cout << "Error: Division by zero is not allowed." << endl;
            }
            break;

    
    break;

default:
  cout << "Error: Invalid operator!" << endl;
    break;
}
    return 0;
}
