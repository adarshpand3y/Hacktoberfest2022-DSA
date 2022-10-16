/*
Problem Statement
Design a data structure, which represents two stacks using only array common for both stacks.The data structure should support the following operations.
Sample Input 1:
3 5
1 1 3
1 2 4
1 1 5
2 1
2 2
Sample Output 1:
5
4
*/
#include <iostream>
using namespace std;
class TwoStack
{
private:
    int *arr;
    int top1;
    int top2;
    int size;

public:
    TwoStack(int s)
    {
        this->size = s;
        top1 = -1;
        top2 = s;
        arr = new int[s];
    }
    void push1(int element)
    {
        if (top2 - top1 > 1)
        {
            top1++;
            arr[top1] = element;
        }
    }
    void push2(int element)
    {
        if (top2 - top1 > 1)
        {
            top2--;
            arr[top2] = element;
        }
    }
    int pop1()
    {
        if (top1 >= 0)
        {
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    int pop2()
    {
        if (top2 < size)
        {
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else
        {
            return -1;
        }
    }
};

int main()
{
    TwoStack ts(7);
    ts.push1(1);
    ts.push2(5);
    ts.push1(4);
    ts.push1(8);
    ts.push2(10);
    cout << ts.pop1() << endl;
    cout << ts.pop2() << endl;
    return 0;
}
