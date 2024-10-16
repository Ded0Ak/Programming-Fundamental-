/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * Lab 2.3-2.4
 */

#include <iostream>
#include <stack>
#include <string>
#include <cctype>
#include <sstream>
#include <stdexcept>

using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}

bool isOperator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int performOperation(char operation, int operand1, int operand2)
{
    switch (operation)
    {
    case '+':
        return operand1 + operand2;
    case '-':
        return operand1 - operand2;
    case '*':
        return operand1 * operand2;
    case '/':
        if (operand2 == 0)
            throw invalid_argument("Error: Division by zero");
        return operand1 / operand2;
    default:
        throw invalid_argument("Error: Invalid operator");
    }
}

string infixToPostfix(const string &expression)
{
    stack<char> operators;
    string postfix;
    string number;

    for (size_t i = 0; i < expression.size(); ++i)
    {
        char c = expression[i];

        if (isdigit(c))
        {
            number += c;
        }
        else
        {
            if (!number.empty())
            {
                postfix += number + " ";
                number.clear();
            }

            if (isOperator(c))
            {
                while (!operators.empty() && precedence(operators.top()) >= precedence(c))
                {
                    postfix += operators.top();
                    postfix += " ";
                    operators.pop();
                }
                operators.push(c);
            }
        }
    }

    if (!number.empty())
    {
        postfix += number + " ";
    }

    while (!operators.empty())
    {
        postfix += operators.top();
        postfix += " ";
        operators.pop();
    }

    return postfix;
}

int evaluatePostfix(const string &expression)
{
    stack<int> operands;
    istringstream iss(expression);
    string token;

    while (iss >> token)
    {
        if (isdigit(token[0]))
        {
            operands.push(stoi(token));
        }
        else if (isOperator(token[0]))
        {
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(token[0], operand1, operand2);
            operands.push(result);
        }
    }

    return operands.top();
}

int main()
{
    try
    {
        string expression;
        cout << "Enter an infix expression without parentheses: ";
        getline(cin, expression);

        string postfix = infixToPostfix(expression);
        cout << "Postfix expression: " << postfix << endl;

        int result = evaluatePostfix(postfix);
        cout << "Result: " << result << endl;
    }
    catch (const exception &e)
    {
        cerr << e.what() << endl;
    }

    return 0;
}
