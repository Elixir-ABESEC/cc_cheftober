Sort Colors
-----------

Problem :
=========

Given an array *nums *with *n *objects colored red, white, or blue, sort
them [****in
****](https://en.wikipedia.org/wiki/In-place_algorithm)****place ****so
that objects of the same color are adjacent, with the colors in the
order red, white, and blue.

We will use the integers *0*, *1*, and *2*to represent the color red,
white, and blue, respectively.

You must solve this problem without using the library's sort function.

**Example 1:**

**Input:** nums = \[2,0,2,1,1,0\]

**Output:** \[0,0,1,1,2,2\]

**Constraints:**

-   **n == nums.length**
-   **1 &lt;= n &lt;= 300**
-   **nums\[i\] **is **0**, **1**, or **2**.

Solution :

1\. We can sort the array nums in ascending order using sorting algortitm
like Quick sort , Merge Sort or bubble sort . Print nums .

Time complexity : O( n logn )

2\. Since we know there are only 3 elements in array we can use counter
variable for them , count occurance of each element and print them in
order .

Time complexity : O( n ) (approx.)
