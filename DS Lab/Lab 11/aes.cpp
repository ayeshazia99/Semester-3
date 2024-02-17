// C++ program to demonstrate insertion
// in a BST recursively.
#include <iostream>
#include<vector>
using namespace std;

class BST
{
	int data;
	BST *left, *right;

public:
	// Default constructor.
	BST();

	// Parameterized constructor.
	BST(int);

	// Insert function.
	BST* Insert(BST*, int);

	// Inorder traversal.
	void Inorder(BST*);
};

// Default Constructor definition.
BST ::BST()
	: data(0)
	, left(NULL)
	, right(NULL)
{
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data)
	{
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::Inorder(BST* root)
{
	if (!root) {
		return;
	}
	Inorder(root->left);
	cout << root->data << endl;
	Inorder(root->right);
}
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
void printPerLevelMinimum(Node* root, vector<int>& res, int level)
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
 
// Driver code
int main()
{
		BST b, *root = NULL;
	int x;
	cin>>x;

	for(int i =0;i<x;i++){
	  int y;
	  cin>>y;
	  root= b.Insert(root,y);
		
	}
  
 vector<int> res = largestValues(root);
    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
	b.Inorder(root);
	return 0;
}


