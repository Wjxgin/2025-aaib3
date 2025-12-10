/// week14-3.cpp 學習計畫 Linked List 第二題 交換兩個鏈表節點
/// LeetCode 206. Reverse Linked List
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; /// 「伸縮自如」的陣列
        while (head != nullptr) { /// 不是結尾的nullptr
            a.push_back(head->val); /// 將「伸縮自如」的陣列
            head = head->next; /// 換下一筆
        } /// 以上，把 Linked List 裡面的值，放入陣列 a

        ListNode* ans = new ListNode(999); /// 答案掛在這裡
        ListNode* now = ans; /// 現在要處理的 node, 負責 ans 收尾
        for (int i = a.size()-1; i >= 0; i--) { /// 倒過來的回圈
            now->next = new ListNode(a[i]); /// 建立「新」的 node, 接起來
            now = now->next; /// 換下一筆
        } /// 跟上週的寫法很像!!
        return ans->next; /// 鎖住!! (上述的學習計畫書有發生錯誤嗎？？？)
        return ans->next; /// 真的答案，是掛在 ans 的右邊一筆
    }
};

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
