/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:41:31 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/30 14:53:54 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"


PmergeMe::PmergeMe(int *arr, int size)
{

    for (int i = 0; i < size; i++) {
        v.push_back(arr[i]);
        d.push_back(arr[i]);
    }
    
    std::cout << "Before : ";
	printVector();
	std::clock_t vecstart_time = std::clock();
	vectorMergeSort(v, 0, v.size()-1);
	std::clock_t vecend_time = std::clock();
	std::cout << "After : ";
	printVector();
	double time = static_cast<double>(vecend_time - vecstart_time) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << this->v.size() << " elements with std::[vector] : " << std::fixed << std::setprecision(5) << (time * 1000000.0) << " us"<< std::endl;
	std::clock_t deqstart_time = std::clock();
	dequeMergeSort(d, 0, d.size() -1);
	std::clock_t deqend_time = std::clock();
	time = static_cast<double>(deqend_time - deqstart_time) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << d.size() << " elements with std::[deque] : " << std::fixed << std::setprecision(5) << (time * 1000000.0) << " us"<< std::endl;
}
PmergeMe::~PmergeMe()
{

}

void PmergeMe::printVector() {
	std::vector<int>::iterator it;
	for (it = v.begin(); it != v.end(); it++)
		std::cout <<  *it << " ";
	std::cout << std::endl;
}

void PmergeMe::printDeque() {
	std::deque<int>::iterator it;
	for (it = d.begin(); it != d.end(); it++)
		std::cout <<  *it << " ";
	std::cout << std::endl;
}

void PmergeMe::vectorMerge(std::vector<int> &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2];
      
    for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];
    i = 0; 
    j = 0;  
    k = beg;
      
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
void PmergeMe::dequeMerge(std::deque<int> &a, int beg, int mid, int end)    
{    
    int i, j, k;  
    int n1 = mid - beg + 1;    
    int n2 = end - mid;    
      
    int LeftArray[n1], RightArray[n2];
      
    for (int i = 0; i < n1; i++)    
        LeftArray[i] = a[beg + i];    
    for (int j = 0; j < n2; j++)    
        RightArray[j] = a[mid + 1 + j];    
    i = 0; 
    j = 0;  
    k = beg;
      
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
  
void PmergeMe::vectorMergeSort(std::vector<int> &a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        vectorMergeSort(a, beg, mid); 
        vectorMergeSort(a, mid + 1, end); 
        vectorMerge(a, beg, mid, end);  
        
    }  
}

void PmergeMe::dequeMergeSort(std::deque<int> &a, int beg, int end)  
{  
    if (beg < end)   
    {  
        int mid = (beg + end) / 2;  
        dequeMergeSort(a, beg, mid); 
        dequeMergeSort(a, mid + 1, end); 
        dequeMerge(a, beg, mid, end);  
        
    }  
}  
  