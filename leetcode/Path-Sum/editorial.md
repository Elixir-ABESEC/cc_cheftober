## Path Sum
Given the root of a binary tree and an integer targetSum, return true if the tree has a root-to-leaf path such that adding up all the values along the path equals targetSum.

A leaf is a node with no children.

**Example :**

```C++
Input: root = [5,4,8,11,null,13,4,7,2,null,null,null,1], targetSum = 22
Output: true
```

## Recursive approach

   1. Break the problem into subproblems and subtract the node value from the targetsum when recurring down.

   2. Cases : 
        - If current node is null return false
        - If current node is a leaf node (i.e, left and right child are null) and target sum - node->val = 0 return true;
        - else recursively check if left or right child has path sum equal to target sum - node->val
