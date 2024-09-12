/**
* Name: Bryce Lombardo
* Program Name: Making a Caculator
* Date: 9/12/2024
* Extra:
*/

#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "What is your first number: " << endl; 
    cin >> num1;
    cout << "What is your second number" << endl;
    cin >> num2;
    

    int sum = num1 + num2;
    int dif = num1 - num2;
    int prod = num1 * num2;
    int div = num1 / num2;
    int r = num1 % num2;
    int inc = ++num1;
    int dec = --num2;
    int extra = sum + dif + prod + div + r + inc + dec;

    cout << "Sume: " << sum << endl;
    cout << "Difference: " << dif << endl;
    cout << "Product: " << prod << endl;
    cout << "Division: " << div << endl;
    cout << "Remainder: " << r << endl;
    cout << "Increment of your first number is: " << inc << endl;
    cout << "Decrement of your first number is: " << dec << endl;
    cout << "The Sume of every value is: " << extra << endl;


}