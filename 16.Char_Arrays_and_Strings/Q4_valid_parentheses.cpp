/*
Valid Parentheses

Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


Example 1:
Input: s = "()"
Output: true

Example 2:
Input: s = "()[]{}"
Output: true

Example 3:

Input: s = "(]"
Output: false

Example 4:
Input: s = "([])"
Output: true

Example 5:
Input: s = "([)]"
Output: false


Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.
*/

#include <iostream>
using namespace std;
#include <string>

bool validParenthesis(string s)
{
    string st = "";

    for (int i = 0; i < s.length(); i++)
    {
        // Store opening brackets
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push_back(s[i]);
        }
        // Check closing brackets
        else
        {
            if (st.empty())
            {
                return false;
            }

            if (s[i] == ')' && st.back() == '(')
            {
                st.pop_back();
            }
            else if (s[i] == ']' && st.back() == '[')
            {
                st.pop_back();
            }
            else if (s[i] == '}' && st.back() == '{')
            {
                st.pop_back();
            }
            else
            {
                return false;
            }
        }
    }

    // Valid only when no opening brackets remain
    return st.empty();
}

// TC = O(n), SC = O(n)

int main()
{
    string s1 = "()"; // true
    cout << validParenthesis(s1) << "\n";

    string s2 = "()[]{}"; // true
    cout << validParenthesis(s2) << "\n";

    string s3 = "(]"; // false
    cout << validParenthesis(s3) << "\n";

    string s4 = "([])"; // true
    cout << validParenthesis(s4) << "\n";

    string s5 = "([)]"; // false
    cout << validParenthesis(s5) << "\n";

    return 0;
}