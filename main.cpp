#include <iostream>
#include <string>
#include <QCoreApplication>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);    
    Start:

    double num1;
    double num2;
    double result;
    int input;

    printf("Enter: 1 to multiply, 2 to divide, 3 to add, 4 to subtract \n");
    cin >> input;
    if (input == 1)
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 * num2;
        cout << "The result is " + to_string(result) + "\n";
        goto Start;
    }

    else if (input == 2)
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 / num2;
        cout << "The result is " + to_string(result) + "\n";
        goto Start;
    }

    else if (input == 3)
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 + num2;
        cout << "The result is " + to_string(result) + "\n";
        goto Start;
    }

    else if (input == 4)
    {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        result = num1 - num2;
        cout << "The result is " + to_string(result) + "\n";
        goto Start;
    }

    return a.exec();
}
