#include <iostream>
using namespace std;

// Definition for a tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
//Function below finds the height of a tree in a recursive manner.
int findHeight(TreeNode* temp) {
    //Base Condition
    if(temp == nullptr){
        return -1;
    }

    //Recursive Case
    int left = findHeight(temp->left);
    int right = findHeight(temp->right);

    //Returning the height of the node accordingly
    if(left > right) {
        return left + 1;
    }
        return right + 1;
}

int main() {
    // Testing below for a simple tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    cout << "Height of the tree is " << findHeight(root) << endl;
    return 0;
}
