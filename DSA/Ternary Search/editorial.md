
# Ternary Search

-**Ternary search** is a **divide and conquer algorithm** that can be used to find an element in an array.    
-It is similar to **binary search** where we divide the array into two parts but in this algorithm,   
we divide the given array into **three parts** and determine which has the key (searched element).    
-We can divide the array into three parts by taking **mid1** and **mid2** which can be calculated as shown below.      
-Initially, **l** and **r** will be equal to **0** and **n-1** respectively, where n is the length of the array.   

**mid1 = l + (r-l)/3**  
**mid2 = r – (r-l)/3**

## Example
![Example](ternary_search.png "example of ternary search")

## Steps to perform Ternary Search: 

1. First, we compare the key with the element at mid1. If found equal, we return mid1.

2. If not, then we compare the key with the element at mid2. If found equal, we return mid2.

3. If not, then we check whether the key is less than the element at mid1. If yes, then recur to the first part.

4. If not, then we check whether the key is greater than the element at mid2. If yes, then recur to the third part.

5. If not, then we recur to the second (middle) part.

## Complexity 

At each step, you are reducing the size of the searchable range by a constant factor (in this case 3). If you find your element after n steps, then the searchable range has size N = 3n. Inversely, the number of steps that you need until you find the element is the logarithm of the size of the collection. That is, the runtime is O(log N). A little further thought shows that you can also always construct situations where you need all those steps, so the worst-case runtime is actually Θ(log N).
