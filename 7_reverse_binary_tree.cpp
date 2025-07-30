#include <bits/stdc++.h>
/************************************************************

    Following is the TreeNode class structure:

    template <typename T>

    class TreeNode {
    public:
        T val;
        TreeNode<T> *left;
        TreeNode<T> *right;
        TreeNode(T val) {
            this->val = val;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

//https://www.naukri.com/code360/problems/reverse-level-order-traversal_764339?leftPanelTabValue=PROBLEM

vector<int> reverseLevelOrder(TreeNode<int> *root){
   vector<int> v;
   queue<TreeNode<int>*> q;
   if(root)
    q.push(root);

    while(!q.empty())
    {
        TreeNode<int> *p = q.front();
        q.pop();

        v.push_back(p->val);

        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    reverse(v.begin(), v.end());
    return v;


}
