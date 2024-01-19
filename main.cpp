#include <iostream>

using namespace std;

int calc (int a, int b, char function)
{
    if (function == '+')
        return a+b;
    else if (function == '-')
        return a-b;
    else if (function == '*')
        return a*b;
    else if (function == '%')
        return a%b;
    else if (function == '/' && b != 0)
        return a/b;

    return 0;
}

int main() {
    cout << "Welcome to the TAMID Calculator!" <<endl << endl;

    char input;
    int a,b, result;

    while (1)
    {
        cout << "Would you like to calculate something (y/n): ";
        cin >> input;

        if (input == 'n')
            break;
        else if (input == 'y')
        {
            cout<<"Please enter the first number: ";
            cin >> a;
            cout<<"Please enter the second number: ";
            cin >> b;
            char function;
            cout << "Please enter your function: ";
            cin >> function;

            if (function == '/' && b == 0)
            {
                cout << "You cannot divide by 0!" << endl;
                continue;
            }

            if (function != '/' && function  != '+' && function != '*' && function  != '-' && function != '%')
            {
                cout << "Invalid function input!" << endl;
                continue;
            }
            result = calc (a,b, function);

            cout << "Your result was: " << result << "!" << endl;

        }
    }

    cout << "Thanks for coming!";
    return 0;
}
