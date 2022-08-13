#include <iostream>
using namespace std;

int main()
{

    cout << "Welcome to the Registration process\nPlease select one of the options below: \n";
    int option;
    string username;
    string password;

    cout << "\n======================\n1-Sign In\n======================\n2-Sign Up\n======================\n3-Exit\n======================\n";

start:
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Type your username: ";
        cin >> username;
        cout << "Type your password";
        cin >> password;
        break;

    case 2:
        cout << "Register your username: ";
        cin >> username;
        cout << "Register your password";
        cin >> password;
        break;

    case 3:
        return 0;
        break;

    default:
        cout << "Invalid option, please select a valid option";
        goto start;
    }

    return 0;
}