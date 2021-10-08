## The Grid Fill Problem
Given an integer N, help Chef in finding an N-digit odd positive integer X such that X is divisible by 3 but not by 9. :-
**Note:  There should not be any leading zeroes in X. In other words, 003 is not a valid 3-digit odd positive integer.**

**Examples**

```
Input : 1
Output : 3

Input : 2
Output : 15

Input : 3
Output : 123
```

**Explanation**
* We should have to find the number which is divisible by 3 only not by 9 and the number must be odd.

## Approach

**We know that `3, 33, 303 3003, 30003, .....` and so on. This number is divisible by 3 but not by 9 and an odd number. So we just have to make this number as output.**

* Step 1:- For `n==1`, just print 3.
* Step 2:- For `n > 1`, find the `pow(10,n-1)`-> **This will give the power of 10** 
```
For example:- If n = 2, so pow(10,n-1) gives 10. This will help us to make it 33 just by addin 1 to it. As 33 is the number which is not divisible by 9 but divisible by 3.
```
* Step 3:- Add `1 to the power of 10` and then Multiply the resultant value with `3`.

**Now you will get the required result**