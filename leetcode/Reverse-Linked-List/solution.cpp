// https://leetcode.com/problems/reverse-linked-list/

// Iterative approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        while(head!=NULL)
        {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
        return prev;
    }   
};

// Recursive approach
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode* rest = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return rest;
    }   
};