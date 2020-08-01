/*
题目：
    6-7 完全二叉树计数
描述：
    给定一棵完全二叉树的根节点root，返回这棵树的节点个数。如果完全二叉树的节点数为N，
    请实现时间复杂度低于O(N)的解法。

    给定树的根结点root，请返回树的大小。
地址：
    https://www.nowcoder.com/study/vod/1/6/7
备注：
    同《程序员面试指南》P176 - 24.统计完全二叉树的节点数
*/

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};

class CountNodes {
public:
    int count(TreeNode* root) {
        if ( root == nullptr )
            return 0;
        
        return dfs( root, 1, mostLeftLevel( root, 1 ) );
    }
    
    int dfs( TreeNode* root, int level, int high ) {
        if ( level == high )
            return 1;
        
        if ( mostLeftLevel( root->right, level + 1 ) == high )  // 以 root->left 为头节点的子树是「满二叉树」
            return pow(2, high - level ) + dfs( root->right, level + 1, high );  // 转向「右子树」
        else  // !=high 即：node 的整棵右子树是满二叉树
            return pow(2,  high - level - 1 ) + dfs( root->left, level + 1, high );  // 转向「左子树」
    }
    
    int mostLeftLevel( TreeNode* root, int level ) {
        while ( root != nullptr ) {
            ++level;
            root = root->left;
        }
        return level - 1;
    }
};

int main()
{
    

    return 0;
}