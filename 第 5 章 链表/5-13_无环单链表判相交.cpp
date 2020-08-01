/*
题目：
    无环单链表判相交
描述：
    现在有两个无环单链表，若两个链表的长度分别为m和n，请设计一个时间复杂度为O(n + m)，
    额外空间复杂度为O(1)的算法，判断这两个链表是否相交。

    给定两个链表的头结点headA和headB，请返回一个bool值，代表这两个链表是否相交。
    保证两个链表长度小于等于500。
地址：
    https://www.nowcoder.com/study/vod/1/5/13
备注：
    剑指offer - 52 题
*/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

// 方法一：
class CheckIntersect {
public:
    bool chkIntersect(ListNode* headA, ListNode* headB) {
        // write code here
        ListNode* curA = headA;
        ListNode* curB = headB;
        
        while ( curA != curB ) {
            if ( curA == nullptr )
                curA = headB;
            else
                curA = curA->next;
            
            if ( curB == nullptr )
                curB = headA;
            else
                curB = curB->next;
        }
        
        return curA != nullptr;
    }
};

// 方法二：直接判断两个链表的最后一个节点是否相同
class CheckIntersect_2 {
public:
bool chkIntersect(ListNode* headA, ListNode* headB) {
     // write code here
     if(headA==NULL||headB==NULL)
         return false;
     ListNode *pa,*pb;
     pa=headA;
     pb=headB;
     while(pa->next!=NULL)
         pa=pa->next;
     while(pb->next!=NULL)
         pb=pb->next;
     if(pa==pb)
         return true;
     else
         return false;
 }
};

int main()
{
    

    return 0;
}