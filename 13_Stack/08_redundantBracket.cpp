#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool hasRedundantBrackets(string s) {
    stack<char> st;

    for (char ch : s) {
        // push opening bracket or operator
        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            st.push(ch);
        }
        else if (ch == ')') {
            bool hasOperator = false;

            // check between '(' and ')'
            while (!st.empty() && st.top() != '(') {
                char top = st.top();
                if (top == '+' || top == '-' || top == '*' || top == '/')
                    hasOperator = true;
                st.pop();
            }

            // if no operator found -> redundant bracket
            if (!hasOperator)
                return true;

            // pop the opening '('
            if (!st.empty())
                st.pop();
        }
    }

    return false; // no redundancy found
}

int main() {
    string expr;
    cout << "Enter an expression: ";
    getline(cin, expr);

    if (hasRedundantBrackets(expr))
        cout << "Contains Redundant Brackets ✅" << endl;
    else
        cout << "No Redundant Brackets ✅" << endl;

    return 0;
}
