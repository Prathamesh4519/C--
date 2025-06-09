#include <iostream>
#include <stack>
#include <string>
using namespace std;

int issymbol(char t) {
    return (t == '+' || t == '-' || t == '*' || t == '/');
}

int precedence(char t) {
    switch(t) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

void post(string infix) {
    stack<char> symbo;
    symbo.push('(');
    infix = infix + ")";
    string postfix;
    int i = 0;

    while (i < infix.size()) {
        char curr = infix[i];
        if (issymbol(curr)) {
            while (!symbo.empty() && precedence(symbo.top()) >= precedence(curr)) {
                postfix += symbo.top();
                symbo.pop();
            }
            symbo.push(curr);
        }
        else if (curr == '(') {
            symbo.push(curr);
        }
        else if (curr == ')') {
            while (!symbo.empty() && symbo.top() != '(') {
                postfix += symbo.top();
                symbo.pop();
            }
            symbo.pop(); // pop the '('
        }
        else {
            postfix += curr;
        }
        i++;
    }

    cout << "Postfix Expression: " << postfix << endl;
}

int main() {
    cout << "Enter an infix expression: ";
    string infix;
    getline(cin, infix);
    post(infix);
    return 0;
}
