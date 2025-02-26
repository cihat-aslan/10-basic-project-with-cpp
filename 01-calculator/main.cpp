#include <iostream>
#include <limits>

using namespace std;

int main() {
    char condition2;

    do {
        double num1, num2, result;
        char op;

        cout << "Enter first number: ";
        cin >> num1;
	if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "invalid character or too long integer, please type a valid number: ";
            cin >> num1;
        }
        cout << "Enter second number: ";
        cin >> num2;
	if (cin.fail()) {
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "invalid character or too long integer, please type a valid number: ";
            cin >> num2;
        }
        cout << "Enter arithmetic operator (+, -, *, /): ";
        cin >> op;

        switch (op) {
            case '+': result = num1 + num2; break;
            case '-': result = num1 - num2; break;
            case '*': result = num1 * num2; break;
            case '/':
                if (num2 != 0)
                    result = num1 / num2;
                else {
                    cout << "Error! Division by zero." << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid operator." << endl;
                continue;
        }

        cout << num1 << " " << op << " " << num2 << " = " << result << endl;

        while (true) {
            cout << "Do you want to continue (y/n): ";
            cin >> condition2;

            if (condition2 == 'y' || condition2 == 'Y') {
                break;
            }
            if (condition2 == 'n' || condition2 == 'N') {
                return 0;
            }
            cout << "Invalid choice, please try again." << endl;
        }

    } while (true);
}


