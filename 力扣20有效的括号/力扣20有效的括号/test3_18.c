#define _CRT_SECURE_NO_WARNINGS 1

bool isValid(char* s) 
{
    int n = strlen(s);
    char stack[n];
    int top = -1;

    for (int i = 0; i < n; i++) 
    {
        char ch = s[i];
        if (ch == '(' || ch == '{' || ch == '[') 
        {
            stack[++top] = ch;
        }
        else 
        {
            if (top < 0) 
                return false;
            char prev = stack[top--];
            if ((prev == '(' && ch != ')') ||(prev == '{' && ch != '}')||(prev == '[' && ch != ']'))
            {
                return false;
            }
        }
    }

    return top == -1;
}