#include <iostream>
#include <string>

using namespace std;

double read_double(string prompt)
{
    double result;
    cout << prompt;
    cin >> result;
    return result;
}

int read_integer(string prompt)
{
    int result;
    cout << prompt;
    cin >> result;
    return result;
}

int main()
{
    char choice;
    do
    {
        double num1, num2;
        cout << "Easy Calculator" << endl;
        num1 = read_double("Enter the 1st number: ");
        num2 = read_double("Enter the 2nd number: ");

        cout << "Select operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;

        choice = read_integer("Enter your choice (1/2/3/4): ");

        switch (choice)
        {
        case 1:
            cout << "Result: " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Result: " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Result: " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
            break;
        case 4:
            if (num2 != 0)
            {
                cout << "Result: " << num1 << " / " << num2 << " = " << num1 / num2 << endl;
            }
            else
            {
                cout << "Error: Division by zero is not allowed. Please enter new numbers." << endl;
            }
            break;
        default:
            cout << "Invalid choice. Please select a valid operation (1/2/3/4)." << endl;
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Goodbye!" << endl;

    return 0;
}
