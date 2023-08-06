
#include <bits/stdc++.h>
using namespace std;


struct node
{
	int key;
	struct node *left, *right;
};

// Function to create a new BST node
struct node* newNode(int item)
{
	struct node* temp = (struct node*)malloc(
				sizeof(struct node));
	temp->key = item;
	temp->left = temp->right = NULL;
	return temp;
}

// Function to insert a new node with
// given key in BST
struct node* insert(struct node* node, int key)
{
	
	// If the tree is empty, return a new node
	if (node == NULL)
		return newNode(key);

	// Otherwise, recur down the tree
	if (key < node->key)
	{
		node->left = insert(node->left, key);
	}
	else if (key > node->key)
	{
		node->right = insert(node->right, key);
	}

	// Return the node pointer
	return node;
}


// Method 1
// Function to do inorder traversal of BST
void inorder(struct node* root)
{
	if (root != NULL)
	{
		inorder(root->left);
		cout << root->key << " ";
		inorder(root->right);
	}
}
// Method 2
// Function to do preOrder trversal of BST
// void preOrder(struct node* root)
// {
//     if (root != NULL) {
//         cout << " " << root->key;
//         preOrder(root->left);
//         preOrder(root->right);
//     }
// }

// Method 3
// Function to do postOrder traversal of BST
// void postOrder(struct node* root)
// {
//     if (root != NULL) 
//     {
//         postOrder(root->left);
//         postOrder(root->right);
//         cout << " " << root->key;
//     }
// }
int main()
{
	
	/* Let us create following BST
		   50
		  /	 \
		30	 70
		/ \   / \
	  20 40  60 80
*/
	struct node* root = NULL;

	root = insert(root, 50);

	insert(root, 30);

	insert(root, 20);

	insert(root, 40);

	insert(root, 70);

	insert(root, 60);

	insert(root, 80);

	inorder(root);

	return 0;
}

