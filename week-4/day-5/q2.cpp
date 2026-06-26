class Solution {
public:

    unordered_map<int,int> mp;
    int preorderIndex=0;

    TreeNode* build(vector<int>& preorder,
                    vector<int>& inorder,
                    int left,
                    int right){

        if(left>right)
            return NULL;

        int rootValue=preorder[preorderIndex++];
        TreeNode* root=new TreeNode(rootValue);

        int inorderIndex=mp[rootValue];

        root->left=build(preorder,inorder,left,inorderIndex-1);
        root->right=build(preorder,inorder,inorderIndex+1,right);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder,
                        vector<int>& inorder) {

        for(int i=0;i<inorder.size();i++)
            mp[inorder[i]]=i;

        return build(preorder,inorder,0,inorder.size()-1);
    }
};