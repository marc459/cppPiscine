/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msantos- <msantos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 21:15:01 by msantos-          #+#    #+#             */
/*   Updated: 2023/05/10 12:28:25 by msantos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PmergeMe.hpp"

int main()
{
    PmergeMe *sort1 = new PmergeMe(" 3 88 5 9 74 4");
    delete sort1;

}

/*
int main()  
{  
    int a[] = { 11, 30, 24, 7, 31, 16, 39, 41 };  
    int n = sizeof(a) / sizeof(a[0]);  
    cout<<"Before sorting array elements are - \n";  
    printArray(a, n);  
    mergeSort(a, 0, n - 1);  
    cout<<"\nAfter sorting array elements are - \n";  
    printArray(a, n);
    std::cout << std::endl;
    return 0;  
}  */