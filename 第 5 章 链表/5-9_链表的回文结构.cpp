/*
题目：
    链表的回文结构
地址：
    https://www.nowcoder.com/study/vod/1/5/9
*/

#include <iostream>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Palindrome {
public:
    bool isPalindrome(ListNode* pHead) {
        // write code here
        ListNode* fast = pHead;
        ListNode* slow = pHead;
        
        while ( fast != nullptr && fast->next != nullptr ) {
            fast = fast->next->next;
            slow = slow->next;
        }
        
        ListNode* prevNode = nullptr;
        while ( slow != nullptr ) {
            ListNode* nextNode = slow->next;
            
            slow->next = prevNode;
            
            prevNode = slow;
            slow = nextNode;
        }
        
        while ( pHead != nullptr && prevNode != nullptr ) {
            if ( pHead->val != prevNode->val )
                return false;
            
            pHead = pHead->next;
            prevNode = prevNode->next;
        }
        
        return true;
    }
};