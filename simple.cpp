#include <iostream>
using namespace std;

int main()
{

    double a, b, divide;

    cout << "Enter numerator: ";
    cin >> a;

    cout << "Enter denominator: ";
    cin >> b;

    try {

        // throw an exception if denominator is 0
        if (b == 0)
            throw 0;

        // not executed if denominator is 0
        divide = a / b;
        cout << a << " / " << b << " = " << divide << endl;
    } 

    catch (int num_exception) {
        cout << "Error: Cannot divide by " << num_exception << endl;
    }

    return 0;
}
