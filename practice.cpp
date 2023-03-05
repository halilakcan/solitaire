#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string input;
    bool result;
    int open = 0, close = 0;
    cin >> input;
    char left = '(', right = ')';
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == left)
        {
            open = open + 1;
            close = 0;
        }
        if (input[i] == right)
        {
            if (input[i - 2 * close - 1] == left)
            {
                open = open - 1;
                close = close + 1;
            }
        }
    }
    if (open == 0)
        result = true;
    cout << "Open Pair " << open << endl;
    cout << "Close Pair " << close << endl;
    cout << "True/False " << result << endl;
}