#include <iostream>
#include <sstream>
using namespace std;

int main() {
    stringstream text;
    string str;
    char mark;
    double a = 0;
    double b = 0;

    cin >> str;
    text << str;
    text >> a >> mark >> b;
    switch (mark) {
        case '+':
            cout << a + b;
            break;
        case '-':
            cout << a - b;
            break;
        case '*':
            cout << a * b;
            break;
        case '/':
            cout << a / b;
            break;
    }
}