## Reverse Linked List
Given the head of a singly linked list, reverse the list, and return the reversed list.

**Example :**

```C++
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]
```
## Iterative approach

1. Initialize two pointers prev as NULL and next
2. Iterate through the linked list
    - next = head->next  // Store next node
    - head->next = prev  // Change next to head
    - prev = head, head = next;  // Move the pointers 

## Recursive approach

   1. Divide the list in two parts - first node and rest of the linked list.
   2. Call reverse for the rest of the linked list.
   3. Link rest to first.
   4. Fix head pointer