// Q2 ..Remove Duplicates from sorted list 

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* res = head;

        while (head && head->next) {
            if (head->val == head->next->val) {
                head->next = head->next->next;
            } else {
                head = head->next;
            }
        }

        return res;        
    }
};

//Case 1 Input head = [1,1,2] Output [1,2] Expected [1,2]
