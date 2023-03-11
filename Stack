#include <iostream>
#include <stack>

using namespace std;

void sortStack(stack<int>& s)
{
    stack<int> tmpStack;

    while (!s.empty())
    {
        int tmp = s.top();
        s.pop();

        while (!tmpStack.empty() && tmpStack.top() < tmp)
        {
            s.push(tmpStack.top());
            tmpStack.pop();
        }

        tmpStack.push(tmp);
    }

    while (!tmpStack.empty())
    {
        s.push(tmpStack.top());
        tmpStack.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(6);
    s.push(4);
    s.push(3);
    s.push(5);
    s.push(2);
    s.push(1);

    sortStack(s);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
