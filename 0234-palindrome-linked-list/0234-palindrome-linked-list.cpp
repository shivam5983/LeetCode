class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return true;

        // Step 1: Find middle
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next!= NULL && fast->next->next!= NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Step 2: Reverse second half
        ListNode* secondHalf = reverse(slow->next);

        // Step 3: Compare both halves
        ListNode* firstHalf = head;
        ListNode* temp = secondHalf;

        while (temp != NULL) {
            if (firstHalf->val != temp->val)
                return false;

            firstHalf = firstHalf->next;
            temp = temp->next;
        }

        return true;
    }

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};
