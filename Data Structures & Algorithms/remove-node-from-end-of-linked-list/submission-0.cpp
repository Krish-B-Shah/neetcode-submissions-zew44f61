/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */




 /*
Remove the nth node from the back and return the head
Input: pointer to node
Output: pointer to node
Edge Case: We can assume there is no edge case or no empty


Brute Force: 
    - Or create a new vector of integer and add all of the elements. 
    - Then remove the nth element from the vector 
    - create a new linkedlist without the nth element. 
    - o(n), o(n)


Optimal appraoch that I think: 
    - Is to have two pointers in the list. 
    - First pointer is at nth distance from the second pointer. 
    - Two pointers with distance of n

 */ 

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* first = head; 
        ListNode* second = head; 
        ListNode* prev_second = head; 
        int count = 0; 

        


        while (count < n){
            first = first->next; 
            count++; 
        } 
        if (first == nullptr){
            head = head->next; 
            return head; 
        } 
        else{
            while (first != nullptr){
                first = first->next; 
                prev_second = second; 
                second = second->next; 
            }
            prev_second->next = second->next; 
        }

        return head; 
    }
};
