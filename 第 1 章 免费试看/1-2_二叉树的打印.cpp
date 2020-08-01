#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode ( int x ): val( x ), left( NULL ), right( NULL ) {  }
};

class TreePrinter {
public:
    vector<vector<int> > printTree(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> temp;
        queue<TreeNode*> Q;
        
        if ( root )
            Q.push( root );
        
        while ( !Q.empty() ) {
            int scale = Q.size();  // 当前层的节点数
            for ( int i = 0; i < scale; ++i ) {
                TreeNode* root = Q.front();  Q.pop();
                temp.emplace_back( root->val );
                
                if ( root->left )   Q.push( root->left );
                if ( root->right )  Q.push( root->right );
            }
            res.emplace_back( temp );
            temp.clear();
        }
        
        return res;
    }
};

int main()
{
    

    return 0;
}