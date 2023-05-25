### PMERGEME

Your program must use a merge-insert sort algorithm to sort the positive integer
sequence.

In this case we use vctor and deque containers to fill in diferent positions.

deque does not guarantee the same constant-time random access, as it divides its elements into multiple blocks of memory. 

Considering the characteristics mentioned above, vector is often a preferable choice for implementing the merge sort algorithm due to its superior random access performance. Merge sort involves frequent splitting and merging of subarrays, which benefit from efficient random access to perform these operations effectively. However, it's important to note that the actual performance difference between vector and deque may vary depending on the size of the input and the specific implementation details.
### BIBILOGRAPHY

https://www.javatpoint.com/merge-sort#:~:text=Merge%20sort%20is%20similar%20to,merges%20the%20two%20sorted%20halves.

https://www.geeksforgeeks.org/merge-sort/

https://github.com/Seishinu/cpp09/tree/master/ex02
