

**Add to Array-Form of Integer**

Problem :

The **array-form** of an integer numis an array representing its digits in left to right order.

•

For example, for num = 1321, the array form is [1,3,2,1].

Given num, the **array-form** of an integer, and an integer k, return *the **array-form** of the integer* num

\+ k.

**Example 1:**

**Input:** num = [1,2,0,0], k = 34

**Output:** [1,2,3,4]

**Explanation:** 1200 + 34 = 1234

Solution :

\1. Let's add numbers in normal way , column by column. For example, to add 123 and 963, we

add 3+3, then 2+6, then 1+9. Whenever our addition result is more than 10, we carry the 1

into the next column. The result is 1086.

\2. A better approach is if we add no to the last digit and take modulo 10 of the answer .Hence

canceling out the carry term .Continuing the example of 123 + 963, we start with [1, 2,

3+963]. Then we perform the addition 3+963, leaving 966. The 6 stays as the digit, while we

'carry' 960 into the next column which becomes 96. We repeat this process with [1, 2+96, 5].

We have 98, where 8 stays and 90 is carried over as 9. Again, we have [1+9, 8, 6] which

transforms into [1, 0, 8, 6].

