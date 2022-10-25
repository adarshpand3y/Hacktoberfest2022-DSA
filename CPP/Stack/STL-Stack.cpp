#include <iostream>
#include <stack>
using namespace std;
int main() {
    stack<int> stack;
    // push element to stack
    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    // pop element from stack
    stack.pop();
    stack.pop();

    // print whole stack
    while (!stack.empty()) {
        cout << stack.top() << " ";
        stack.pop();
    }
}