/*
题目：
    5.11 复杂链表的复制
描述：
    输入一个复杂链表（每个节点中有节点值，以及两个指针，一个指向下一个节点，另一个特殊指针指向任意一个节点）。
地址：
    https://www.nowcoder.com/study/vod/1/5/11
*/

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;


struct RandomListNode {
    int label;
    struct RandomListNode *next, *random;
    RandomListNode(int x) :
            label(x), next(NULL), random(NULL) {
    }
};


// 方法一：哈希表
class Solution {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        unordered_map<RandomListNode*, RandomListNode*> hashMap;
        RandomListNode* curNode = pHead;
        
        while ( curNode ) {
            hashMap[curNode] = new RandomListNode( curNode->label );
            curNode = curNode->next;
        }
        
        curNode = pHead;
        while ( curNode ) {
            hashMap[curNode]->next = hashMap[curNode->next];
            hashMap[curNode]->random = hashMap[curNode->random];
            curNode = curNode->next;
        }
        
        
        return hashMap[pHead];
    }
};


// 方法二：
class Solution_2 {
public:
    RandomListNode* Clone(RandomListNode* pHead) {
        if ( pHead == nullptr )
            return nullptr;
        
        RandomListNode* curNode = pHead;
        RandomListNode* curDupNode = nullptr;
        RandomListNode* nextNode = nullptr;
        
        while ( curNode ) {
            nextNode = curNode->next;
            
            curDupNode = new RandomListNode( curNode->label );
            curNode->next = curDupNode;
            
            curDupNode->next = nextNode;
            
            curNode = nextNode;
        }
        
        curNode = pHead;
        while ( curNode ) {
            curDupNode = curNode->next;
            if ( curNode->random ) {
                curDupNode->random = curNode->random->next;
            }
            curNode = curNode->next->next;
        }
        
        // 拆分链表
        curNode = pHead;
        RandomListNode* newHead = curNode->next;
        while ( curNode ) {
            curDupNode = curNode->next;
            nextNode = curNode->next->next;
            curNode->next = nextNode;  // 重定向当前节点
            
            if ( nextNode ) 
                curDupNode->next = nextNode->next;
            else
                curDupNode->next = nullptr;
            
            curNode = nextNode;
        }
        
        return newHead;
    }
};




int main()
{
    

    return 0;
}