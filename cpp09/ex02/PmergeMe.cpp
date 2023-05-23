
#include "PmergeMe.hpp"


PmergeMe::PmergeMe(std::string expresion)
{
    
    std::stringstream ss(expresion);
    int num;

    while (ss >> num) {
        if (ss.fail()) {
            std::cout << "Error" << std::endl;
            return;
        }
        v.push_back(num);
        d.push_back(num);
    }
    
    std::cout << "Before : ";
	printvecval();
	std::clock_t vecstart_time = std::clock();
	vecmergesort(v, 0, v.size());
	std::clock_t vecend_time = std::clock();
	std::cout << "After : ";
	printvecval();
	double time_elapsed = static_cast<double>(vecend_time - vecstart_time) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->v.size() << " elements with std::[vector] : " << std::fixed << std::setprecision(5) << (time_elapsed * 1000000.0) << " us"<< std::endl;
	// std::clock_t deqstart_time = std::clock();
	// qmergesort(myq, 0, size - 1);
	// std::clock_t deqend_time = std::clock();
	// time_elapsed = static_cast<double>(deqend_time - deqstart_time) / CLOCKS_PER_SEC;
	// std::cout << "Time to process a range of " << size << " elements with std::[deque] : " << std::fixed << std::setprecision(5) << (time_elapsed * 1000000.0) << " us"<< std::endl;
}
PmergeMe::~PmergeMe()
{

}

void PmergeMe::printvecval() {
	std::vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		std::cout << "|"<< *it << "| ";
	std::cout << std::endl;
}

/* Function to merge the subarrays of a[] */  
void PmergeMe::vecmerge(std::vector<int> a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2]; //temporary arrays
      
    /* copy data to temp arrays */  
    for (int i = 0; i < n1; i++)    
    LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
    RightArray[j] = a[mid + 1 + j];    

    i = 0; /* initial index of first sub-array */  
    j = 0; /* initial index of second sub-array */   
    k = beg;  /* initial index of merged sub-array */  
      
    while (i < n1 && j < n2)    
    {    
        if(LeftArray[i] <= RightArray[j])    
        {    
            a[k] = LeftArray[i];    
            i++;    
        }    
        else    
        {    
            a[k] = RightArray[j];    
            j++;    
        }    
        k++;    
    }    
    while (i<n1)    
    {    
        a[k] = LeftArray[i];    
        i++;    
        k++;    
    }    
      
    while (j<n2)    
    {    
        a[k] = RightArray[j];    
        j++;    
        k++;    
    }  
    
}    
  
void PmergeMe::vecmergesort(std::vector<int> a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        vecmergesort(a, beg, mid); 
        vecmergesort(a, mid + 1, end); 
        vecmerge(a, beg, mid, end);  
        
    }  
}  
  