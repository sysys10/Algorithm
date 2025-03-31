#include <iostream>
#include <stack>
#include <string>

using namespace std;

void showAll(stack<char> s)
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string s;
    stack<char> stack;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cout << s[i];
        }
        else
        {
            if (s[i] == '(')
                stack.push(s[i]);
            else if (s[i] == '*' || s[i] == '/')
            {
                while (!stack.empty() && (stack.top() == '*' || stack.top() == '/'))
                {
                    cout << stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
            }
            else if (s[i] == '+' || s[i] == '-')
            {
                while (!stack.empty() && stack.top() != '(')
                {
                    cout << stack.top();
                    stack.pop();
                }
                stack.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!stack.empty() && stack.top() != '(')
                {
                    cout << stack.top();
                    stack.pop();
                }
                stack.pop();
            }
        }
    }
    showAll(stack);

    return 0;
}