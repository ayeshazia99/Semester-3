// CPP program to print smallest element
// in each level of binary tree.
#include <bits/stdc++.h>

using namespace std;
 
// A Binary Tree Node
struct Node {
    int data;
    struct Node *left, *right;
};
 
// return height of tree
int heightoftree(Node* root)
{
 
    if (root == NULL)
        return 0;
 
    int left = heightoftree(root->left);
    int right = heightoftree(root->right);
 
    return ((left > right ? left : right) + 1);
}
 
// Inorder Traversal
// Search minimum element in each level and
// store it into vector array.
void printPerLevelMinimum(Node* root,
                  vector<int>& res, int level)
{
     
    if (root != NULL) {
 
        printPerLevelMinimum(root->left,
                              res, level + 1);
 
        if (root->data < res[level])
            res[level] = root->data;
 
        printPerLevelMinimum(root->right,
                              res, level + 1);
    }
}
 
void perLevelMinimumUtility(Node* root)
{
     
    // height of tree for the size of
    // vector array
    int n = heightoftree(root), i;
 
    // vector for store all minimum of
    // every level
    vector<int> res(n, INT_MAX);
 
    // save every level minimum using
    // inorder traversal
    printPerLevelMinimum(root, res, 0);
 
    // print every level minimum
    cout << "Every level minimum is\n";
    for (i = 0; i < n; i++) {
        cout << "level " << i <<" min is = "
                            << res[i] << "\n";
    }
}
 void helper(vector<int>& res, Node* root, int d)
{
    if (!root)
        return;
 
    // Expand list size
    if (d == res.size())
        res.push_back(root->data);
 
    else
 
        // to ensure largest value
        // on level is being stored
        res[d] = max(res[d], root->data);
 
    // Recursively traverse left and
    // right subtrees in order to find
    // out the largest value on each level
    helper(res, root->left, d + 1);
    helper(res, root->right, d + 1);
}
 
// function to find largest values
vector<int> largestValues(Node* root)
{
    vector<int> res;
    helper(res, root, 0);
    return res;
}
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node* temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
 
    return temp;
}
 
// Driver program to test above functions
int main()
{
 
    // Let us create binary tree shown
    // in above diagram
    Node* root = newNode(7);
    root->left = newNode(6);
    root->right = newNode(5);
    root->left->left = newNode(4);
    root->left->right = newNode(3);
    root->right->left = newNode(2);
    root->right->right = newNode(1);
 
    /*       7
         /  \
        6     5
       / \     / \
      4   3 2   1         */
    perLevelMinimumUtility(root);
 vector<int> res = largestValues(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}
