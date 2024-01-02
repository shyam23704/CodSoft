#include<iostream>
using namespace std;

int main() {
    double num1, num2;
    char sy, choice;

    do {
        system("cls");
        cout << "Enter any two numbers:\n";
        cin >> num1 >> num2;

        cout << "Enter the arithmetic operator from below which you want to use for the calculation\n";
        cout << "+\n";
        cout << "-\n";
        cout << "*\n";
        cout << "/\n";
        cin >> sy;

        switch (sy) {
            case '+':
                cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
                break;

            case '-':
                cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
                break;

            case '*':
                cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
                break;

            case '/':
                if (num2 != 0) {
                    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
                } else {
                    cout << "Cannot divide by zero.\n";
                }
                break;

            default:
                cout << "The selected operator isn't an arithmetic operator\n";
                break;
        }

        cout << "If you want to calculate again, enter y/n: ";
        cin >> choice;

    } while (choice == 'y');

    return 0;
}
