# Binary Search

Binary search is a fast search algorithm with run-time complexity of Ο(log n). This search algorithm works on the principle of divide and conquer. For this algorithm to work properly, the data collection should be in sorted form.

Binary search looks for a particular item by comparing the middle most item of the collection. If a match occurs, then the index of the item is returned. If the middle item is greater than the item, then the item is searched in the sub-array to the left of the middle item. Otherwise, the item is searched for in the sub-array to the right of the middle item. This process continues on the sub-array as well until the size of the subarray reduces to zero.

## How the Algorithm works

1. First the middle index of the array is found out using the formula `mid = low + (high - low) / 2`, where `low=0` and `high = length of array -1`.

2. Then, the value stored in the mid index is compared to the value of the key whose index is to be found out.

3. If the value in mid is equal to the value of the key, then the algorithm terminates and the value of mid is returned to the user. If the value of the key is larger than the value in mid, and we have a sorted array, so we also know that the key value must be in the upper portion of the array. And if the value of the key is smaller than the value in the mid, we know that the key-value must be in the lower (left) portion of the array.

4. If the key is larger, then the values of the variables change to `low =mid+1`, and we find a new mid using the formula in step 1. If the key is smaller, then the values of the variables change to `high = mid-1`. and we find a new mid using the formula in step 1.

5. This continues until eventually the value in mid is equal to the value we want to find and the algorithm terminates.

## Complexity

### Time complexity

**Best Case Time Complexity of Binary Search**
The best case of Binary Search occurs when:

- The element to be search is in the middle of the list

In this case, the element is found in the first step itself and this involves 1
comparison.
Therefore, Best Case Time Complexity of Binary Search is O(1).
**Average Case Time Complexity of Binary Search**
If an array contains N elements, then,
Total number of comparisons = N * (logN - 1) + 1
Total number of cases = N+1
*Average number of comparisons = N _ logN / (N+1) - N/(N+1) + 1/(N+1)_
The dominant term is N \* logN / (N+1) which is approximately logN. Therefore, Average Case Time Complexity of Binary Search is O(logN).
**Worst Case Time Complexity of Binary Search**
The worst case of Binary Search occurs when:

- The element is to search is in the first index or last index

In this case, the total number of comparisons required is logN comparisons.
Therefore, Worst Case Time Complexity of Binary Search is O(logN).

### Space Complexity

In an iterative implementation of Binary Search, the space complexity will be O(1).
This is because we need two variable to keep track of the range of elements that are to be checked. No other data is needed.
In a recursive implementation of Binary Search, the space complexity will be O(logN).
This is because in the worst case, there will be logN recursive calls and all these recursive calls will be stacked in memory. In fact, if I comparisons are needed, then I recursive calls will be stacked in memory and from our analysis of average case time complexity, we know that the average memory will be O(logN) as well.
