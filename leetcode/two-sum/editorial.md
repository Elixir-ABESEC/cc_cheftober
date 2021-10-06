## Two Sum
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

**Example :**

```C++
Input: nums = [2,7,11,15], target = 9 
Output: [0,1]
Output: Because nums[0] + nums[1] == 9, we return [0, 1]
```

## Brute force Approach 
1. For any element `a[i]` in the array, find `sum = a[i] + a[j]` where `j` is in range of array length and is not equal to `i`.\
2. If sum is equal to target, Accumulate the answer and continue.
3. Exit if all combinations is tested.

## Better approach using hashmap
1. find complement of a[i] (i.e. `complement = target-a[i]`)
2. Now search for complement in the array.
3. To optimise the search, we can use hashmap or set to search in constant time
