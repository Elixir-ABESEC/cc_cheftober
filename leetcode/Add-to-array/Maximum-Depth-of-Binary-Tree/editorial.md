## Maximum Depth of Binary Tree
Given the root of a binary tree, return its maximum depth.

A binary tree's maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

**Example :**

```C++
Input: root = [3,9,20,null,null,15,7]
Output: 3
```

## Recursive approach

   1. Break the problem into subproblems and recursively find the maxDepth of left and right child 

   2. Cases : 
        - If current node is null return 0;
        - Else :
            - maxDepth(root->left) // Find the maxDepth of left child 
            - maxDepth(root->right) // Find the maxDepth of right child 
            - Return the max of maxDepth of left and right child and add 1 for current node 