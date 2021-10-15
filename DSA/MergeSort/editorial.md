# Merge Sort

A sorting technique based on the divide-and-conquer method of solving a problem.

Merge sort is the top choice for sorting when extra space is available as it guarantees O(N log N) runtime even in the worst case.

  

[![Merge Sort](https://upload.wikimedia.org/wikipedia/commons/e/e6/Merge_sort_algorithm_diagram.svg?download)](https://en.wikipedia.org/wiki/Merge_sort)

# Algorithm
**Step 1** − If it is only one element in the list it is already sorted, return. <br>
**Step 2** − Divide the list recursively into two halves until it can no more be divided. <br>
**Step 3** − Merge the smaller lists into a new list in sorted order.

# Complexity analysis
Merge sort can be expressed as the given recurrence relation : T(n) = 2T(n/2) + θ(n)
On solving the relation, it is clear that merge sort takes O(N log N) time.
Auxilary space required: O(n) (For merging)
\* There is no efficient in-place merging algorithm, hence we need extra space.

