// Q1 ..Reverse Linked List

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* node = nullptr;

        while (head != nullptr) {
            ListNode* temp = head->next;
            head->next = node;
            node = head;
            head = temp;
        }

        return node;        
    }
};

//Input head = [1,2,3,4,5] ; Output [5,4,3,2,1] Expected [5,4,3,2,1]





