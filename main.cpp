/*  MIT License
 *
 *  Copyright (c) 2020 Glenn Alon
 *
 *  Permission is hereby granted, free of charge, to any person obtaining a copy
 *  of this software and associated documentation files (the "Software"), to deal
 *  in the Software without restriction, including without limitation the rights
 *  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 *  copies of the Software, and to permit persons to whom the Software is
 *  furnished to do so, subject to the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included in all
 *  copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 *  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 *  SOFTWARE.
*/

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

    printf("Enter: 1 to multiply, 2 to divide, 3 to add, 4 to subtract and 5 to quit \n");
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

    else if (input == 5)
    {
        return(0);
    }

    return a.exec();
}
