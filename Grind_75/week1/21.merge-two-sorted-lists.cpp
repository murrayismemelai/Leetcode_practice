/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
 */

// @lc code=start
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
// 20 min
// Forget to initial temp pointer as dummy
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode(), *ptr = dummy;

        while(list1 && list2) {
            //cout << list1 -> val << "," << list2 -> val << endl;
            if(list1 -> val < list2 -> val) {
                ptr -> next = list1;
                list1 = list1 -> next;
            } else {
                ptr -> next = list2;
                list2 = list2 -> next;
            }
            ptr = ptr -> next;
        }

        if(list1) {
            ptr -> next = list1;
        }
        if(list2) {
            ptr -> next = list2;
        }

        return dummy -> next;
    }
};
// @lc code=end

