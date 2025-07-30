//https://www.naukri.com/code360/problems/node-level_920383

#include <bits/stdc++.h> 

int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue<pair<TreeNode<int>*, int>> q;
    if(root)
    {
        q.push({root, 1});
    }

    while(!q.empty())
    {
       pair<TreeNode<int>*, int> parent = q.front(); //As queue is a queue of pair so we need to receive every queue.front() as a pair;
       q.pop();

       //Dividing the values of pair;
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        if(node->val == searchedValue)
            return level;

        if(node->left)
            q.push({node->left, level+1});

        if(node->right)
            q.push({node->right, level+1}); 
    }
}

















