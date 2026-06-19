class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> vals;

        while (list1 != nullptr) {
            vals.push_back(list1->val);
            list1 = list1->next;
        }

        while (list2 != nullptr) {
            vals.push_back(list2->val);
            list2 = list2->next;
        }

        sort(vals.begin(), vals.end());

        ListNode dummy(0);
        ListNode* tail = &dummy;

        for (int x : vals) {
            tail->next = new ListNode(x);
            tail = tail->next;
        }

        return dummy.next;
    }
};
