# Insertion Sort

-**Insertion sort** is a simple **sorting** algorithm that works similar to the way you sort playing cards in your hands.  
-The array is virtually split into a sorted and an unsorted part.   
-Values from the unsorted part are picked and placed at the correct position in the sorted part.



## Steps to perform Insertion Sort: 

To sort an array of size n in ascending order: 
1. Iterate from arr[1] to arr[n] over the array. 
2. Compare the current element (key) to its predecessor. 
3. If the key element is smaller than its predecessor, compare it to the elements before. Move the greater elements one position up to make space for the swapped element.

## Complexity 


-Worst case time complexity: Θ(n^2)  
-Average case time complexity: Θ(n^2)  
-Best case time complexity: Θ(n)  
-Space complexity: Θ(1)