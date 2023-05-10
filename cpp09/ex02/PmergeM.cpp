
#include "PmergeM.hpp"

PmergeM::PmergeM(std::string expresion)
{
    std::stringstream ss(expresion);
    int num;

    while (ss >> num) {
        if (ss.fail()) {
            //ss.clear();
            //ss.ignore(1);
            //continue;
            std::cout << "Error" << std::endl;
            return;
        }
        v.push_back(num);
    }
    for (size_t i = 0; i < this->v.size(); i++) {
        std::cout << this->v[i] << " ";
    }
}
PmergeM::~PmergeM()
{

}

void	PmergeM::sortDeque()
{



}
void	PmergeM::sortVector()
{


    
}