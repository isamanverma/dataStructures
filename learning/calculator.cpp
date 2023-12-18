#include <iostream>
using namespace std;

int main(void)
{
    int a, b, n;
    cout << "Number 1: ";
    cin >> a;
    cout << "Number 2: ";
    cin >> b;
    cout << endl
         << "Select the operation" << endl
         << "1. Add" << endl
         << "2. Subtract" << endl
         << "3. Multiply" << endl
         << "4. Divide" << endl
         << endl
         << "Operation: ";

    cin >> n;

    switch (n)
    {
    case 1:
        cout << "Addition result: " << (a + b) << endl;
        break;
    case 2:
        cout << "Subtraction result: " << (a - b) << endl;
        break;
    case 3:
        cout << "Multiplication result: " << (a * b) << endl;
        break;
    case 4:
        cout << "Division result: " << (a / b) << endl;
        break;
    default:
        cout << "Enter a valid operation" << endl;
        break;
    }
    return 0;
}