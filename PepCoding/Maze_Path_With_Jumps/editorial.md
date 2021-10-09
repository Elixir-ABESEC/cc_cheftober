## Maze Path With Jumps
You are given a number n and a number m representing number of rows and columns in a maze.You are standing in the top-left corner and have to reach the bottom-right corner. 

In a single move you are allowed to jump 1 or more steps horizontally (as h1, h2, .. ), or 1 or more steps vertically (as v1, v2, ..) or 1 or more steps diagonally (as d1, d2, ..). 

print the list of all paths that can be used to move from top-left to bottom-right.

**Examples**

```
Input : n=3, m=3
Output : h1h1v1v1
         h1h1v2
         h1v1h1v1
         h1v1v1h1
         h1v1d1
         h1v2h1
         h1d1v1
         h2v1v1
         h2v2
         v1h1h1v1
         v1h1v1h1
         v1h1d1
         v1h2v1 
         v1v1h1h1
         v1v1h2
         v1d1h1
         v2h1h1
         v2h2
         d1h1v1
         d1v1h1
         d1d1
         d2
```

## Approach

**We are allowed to move any number of steps in horizontal, vertical or diagonal direction as long as we don't go out of matrix boundries Thus many different combinations are possible**

**we need to find all the spots that can be reached from our initial spot so that we can call our function recursively on each of those spots and print all the paths**

**Case 1 : `Along Row`**
**To move along a row, we are changing the columns while remaining in the same row. Now, the starting point of any row is actually sc i.e. the source column=0 and the endpoint of a row is the last column or the dc i.e. destination column (which is=m-1).So, the maximum possible moves that we can make and also the max possible size of move/jump that we can make along a row is (dc-sc)thus:**
`for(int i=1;i<=dc-sc;i++)                mazePath(sr+i,sc+,dr,dc,"v"+i+ans);`

**Case 2: `Along column`**
**To move along a column, we are changing the rows while remaining in the same column. Now, the starting point of any column is actually sr i.e. the source row=1, and the endpoint of a column is the last row or the dr i.e. destination row(which is=n-1). So,the maximum possible moves that we can make and also the max possible size of move/jump that we can make along a column is (dr-sr), thus:**
`for(int i=1;i<=dr-sr;i++)                mazePath(sr,sc+i,dr,dc,"v"+i+ans);`

**Case 3: `Diagonally`**
**Diagonally we have to change both rows and columns till we reamain within the boundries of matrix**

**Base Case**
**the base case for this recursion is when we reach our destination i.e. when row=dr (destination row) and column=dc (destination column)**





