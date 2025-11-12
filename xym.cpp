#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter an expression: ";
    cin >> input;

    for (char c : input) {
        if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%' || c == '=') {
            cout << "Operator found: " << c << endl;
        }
        else{
            cout<<"operator not found!"<<endl;
        }
    }
    return 0;
}
