#include<iostream>
using namespace std;
int main() {

    double num1, num2, divide,add,sub;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    try {

        if (num2 == 0)
            throw 0;

        // not executed if denominator is 0
        divide = num1 / num2;
        cout <<"divide:-"<< num1 << " / " << num2 << " = " << divide << endl;
    } 

    catch (int num_exception)
    {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }
    try
    {
        if(add==0)
        add=num1+num2;
        cout<<"add:-"<<num1<<"+"<<num2<<"="<<add<<"\n";
    }
    catch (int sum)
    {
        cout<<"error: cannot sum by:-"<<sum<<"\n";
    }
    try
    {
        if(sub==0)
        add=num1-num2;
        cout<<"sub:-"<<num1<<"-"<<num2<<"="<<sub;
    }
    catch (int subtract)
    {
        cout<<"error: cannot sub by:-"<<subtract;
    }

    return 0;
}
