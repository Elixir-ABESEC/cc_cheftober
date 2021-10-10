## The Old Saint And Three Questions
You are given an array of `N` integers. Find the minimum number of integers you need to delete from the array such that the `absolute difference` between each pair of integers in the remaining array will become equal.

**Examples**

```
Input : 2
        1 2
Output : 0

Input : 5
        2 5 1 2 2
Output : 2

Input : 4
        1 2 1 2
Output : 2

```

**Explanation**
* We have to count the frequency of the number in the array. (As same number always has same commonn difference i.e 0.)

**Case 1:- If n == 1 or n == 2**
* Print 0. (As they have same difference so there is no need to delete any number from the array).

**Case 2:- if n > 2**
* Find the maximum frequency of the numbers. 
* If `maximum count == 1` (This tells that every number is different `i.e 1,2,3,4,5`.). In this case print the `n-2` because except any two numbers in the array do not have same difference.
* If `maximum count > 1` Print `n - maximum count`.
**BOOM YOU GOT THE ANSWER**

**Question Link**
<a href="https://www.codechef.com/problems/EQDIFFER">Question Link</a>