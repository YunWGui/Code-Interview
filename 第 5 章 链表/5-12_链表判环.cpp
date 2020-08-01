/*
题目：
    5.12 链表判环
描述：
    如何判断一个单链表是否有环？有环的话返回进入环的第一个节点的值，无环的话返回-1。
    如果链表的长度为N，请做到时间复杂度O(N)，额外空间复杂度O(1)。

    给定一个单链表的头结点head（注意另一个参数adjust为加密后的数据调整参数，方便数据设置，与本题求解无关)，请返回所求值。

地址：
    https://www.nowcoder.com/study/vod/1/5/12
*/

#include <iostream>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};


class ChkLoop {
public:
    int chkLoop(ListNode* head, int adjust) {
        // write code here
        if ( head == nullptr || head->next == nullptr )
            return -1;
        
        ListNode* fast = head;
        ListNode* slow = head;
        while ( fast != nullptr && fast->next != nullptr ) {
            fast = fast->next->next;
            slow = slow->next;
            
            if ( fast == slow )
                break;
        }
        
        if ( fast == nullptr || fast->next == nullptr )
            return -1;
        
        fast = head;
        while ( fast != slow ) {
            fast = fast->next;
            slow = slow->next;
        }
        
        return slow->val;
    }
};

int main()
{
    

    return 0;
}