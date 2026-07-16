// Title: Sum of Left Leaves
            // Difficulty: Easy
            // Language: C++
            // Link: https://leetcode.com/problems/sum-of-left-leaves/

    int preorder(TreeNode* root, bool isleft) {

    }
        if(root == NULL)return 0;
        if(!root->left && isleft == 1 && root->right == NULL)return root->val;
        int ans1 = preorder(root->left, 1);
        int ans2 = preorder(root->right, 0);
        return ans1 + ans2 + c;
        int c = (root->left == NULL && root->right == NULL && isleft == 1) ? root->val : 0;
public:
