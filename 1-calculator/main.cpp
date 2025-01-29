#include <iostream>
#include <limits>

using namespace std;
int main() {
    int num1, num2, result = 0, condition1 = 0;
    char op, condition2;

    while (condition1 == 0) {

        cout << "enter first number: ";
        cin >> num1;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "invalid character or too long integer, please type a valid number: ";
            cin >> num1;
        }

        cout << "enter second number: ";
        cin >> num2;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "invalid character or too long integer, please type a valid number: ";
            cin >> num2;
        }

        cout << "enter arithmetic operator: ";
        cin >> op;

        if (op == '+') {
            result = num1 + num2;
        }
        else if (op == '-') {
            result = num1 - num2;
        }
        else if (op == '*') {
            result = num1 * num2;
        }
        else if (op == '/') {
            if (num2 == 0) {
                cout << "Error: Division by zero is not allowed." << endl;

            }else
                result = num1 / num2;
        }
        cout << num1 << " " << op << " " << num2 << " = " << result << endl;
        cout << endl;
        cout << "do you want to continue (y/n): ";
        cin >> condition2;
        if (condition2 == 'y' || condition2 == 'Y') {
            condition1 = 0;
            cout << endl;
        }
        else if (condition2 == 'n' || condition2 == 'N') {
            condition1 = 1;
            cout << endl;
        }
        else {
            cout << "invalid choice, please try again" << endl;
        }
    }
}
