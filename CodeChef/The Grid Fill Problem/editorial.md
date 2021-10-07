## The Grid Fill Problem
You are given a N × N grid. You need to fill each cell of the grid with 1 or −1. You need to fill the grid in a way such that the following conditions are met :-

-For every column - (Sum of values present in the column) x (Product of values present in the column) < 0
-For every row - (Sum of values present in the row) x (Product of values present in the row) < 0

It is guaranteed that there exists at least one way to fill the grid under given constraints such that both the conditions are satisifed. If there exists multiple ways to fill the grid by satisfying both the conditions, you can print any.

**Examples**

```
Input : 2
Output : -1 -1
         -1 -1
```

**Explanation**
-For each ROW, sum of elements is -2.
-For each ROW, product of elements is 1.
-For each COLUMN, sum of elements is -2.
-For each COLUMN, product of elements is 1.

**Hence both the above mentioned condition is satisfied**

## Approach

**We should have to make the `Matrix` such a way in which, `sum of rows or columns > 0` or `product of rows and columns < 0` and vice versa. Because This will give product of `(Sum of values present in the rows or columns) x (Product of values present in the rows or columns) < 0`.**


**Case 1 :-** **When given input is `EVEN`**
1. Create a MATRIX of size `n`.
2. Append `-1` into `Each position of the Matrix`.
**This will always give `sum < 0` and `product > 0`. This shows that `negative integer X positive integet`, which will always give negative.** 

**Case 2 :-** **When given input is `ODD`**
1. Create a MATRIX of size `n`.
2. Append `-1` into the `Diagonal of the Matrix` on each position and Append `1` to other positions.
**This will always give `sum > 0` and `product < 0`. This shows that `negative integer X positive integet`, which will always give negative.** 