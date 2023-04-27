

#include "Rpn.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
    {
        Rpn *rpn1 = new Rpn(argv[1]);
        delete rpn1;
    }
}