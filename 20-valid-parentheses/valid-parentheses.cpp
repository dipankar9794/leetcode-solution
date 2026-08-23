class Solution {
public:
    bool isValid(string s) {

        stack<char> t;

        for(char ch : s)
        {
            if(ch == '(' || ch == '[' || ch == '{')
            {
                t.push(ch);
            }

            else
            {
                if(t.empty())
                {
                    return false;
                }

                if(ch == ')' )
                {
                    if(t.top() == '(')
                    {
                        t.pop();
                    }
                    else
                    {
                        return false;
                    }
                }

                else if(ch == ']')
                {
                    if(t.top() == '[')
                    {
                        t.pop();
                    }
                    else
                    {
                        return false;
                    }
                }

                else if(ch == '}')
                {
                    if(t.top() == '{')
                    {
                        t.pop();
                    }
                    else
                    {
                        return false;
                    }
                }
            }
        }

        return t.empty();
    }
};