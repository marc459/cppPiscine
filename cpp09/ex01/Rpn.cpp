#include "Rpn.hpp"

Rpn::Rpn(std::string expresion)
{
    int op1;
    int op2;
    for (size_t i = 0; i < expresion.size(); i++) {
        char c = expresion[i];
        if (isdigit(c)) {
            int num = c - '0';
            this->polishStack.push(num);
        } else if (c == '+' || c == '-' || c == '*' || c == '/') {
            
            if(!this->polishStack.empty())
            {
                op1 = this->polishStack.top();
                this->polishStack.pop();
            }
            if(!this->polishStack.empty())
            {
                op2 = this->polishStack.top();
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
        }
        else if (c != ' ')
        {
            std::cout <<  "Error" << std::endl;
            return;
        }
    }
    if(!this->polishStack.empty())
        std::cout <<  this->polishStack.top() << std::endl;
    else
        std::cout <<  "Error" << std::endl;
}

Rpn::~Rpn()
{

}