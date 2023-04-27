#include "Rpn.hpp"

Rpn::Rpn(std::string expresion)
{
    for (size_t i = 0; i < expresion.size(); i++) {
        char c = expresion[i];
        if (isdigit(c)) {
            int num = c - '0';
            this->polishStack.push(num);
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            int op1 = this->polishStack.top();
            this->polishStack.pop();
            int op2 = this->polishStack.top();
            this->polishStack.pop();
            int res;
            switch (c) {
                case '+': res = op2 + op1; break;
                case '-': res = op2 - op1; break;
                case '*': res = op2 * op1; break;
                case '/': res = op2 / op1; break;
            }
            this->polishStack.push(res);
        }
        else if (c != ' ')
        {
            std::cout <<  "Error" << std::endl;
            return;
        }
    }
    std::cout <<  this->polishStack.top() << std::endl;
}

Rpn::~Rpn()
{

}