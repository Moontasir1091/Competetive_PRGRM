/*
Preprder:
    1. Root
    2. Left
    3. Right

Inorder:
    1. Left
    2. Root
    3. Right

Postorder:
    1. Left
    2. Right
    3. Root
*/
#include <bits/stdc++.h>
using namespace std;

class BinaryTree
{
public:
    struct Node
    {
        int data;
        Node *left;
        Node *right;

        Node(int value)
        {
            data = value;
            left = nullptr;
            right = nullptr;
        }
    };

    static Node *buildTree(int nodes[], int &idx)
    {
        if (nodes[idx] == -1)
        {
            idx++;
            return nullptr;
        }

        Node *newNode = new Node(nodes[idx++]);
        newNode->left = buildTree(nodes, idx);
        newNode->right = buildTree(nodes, idx);
        return newNode;
    }

    static void preorder(Node *root)
    {
        if (root == nullptr)
        {
            cout << "-1 ";
            return;
        }
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }

    static void inorder(Node *root)
    {
        if (root == nullptr)
        {
            cout << "-1 ";
            return;
        }
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }

    static void postorder(Node *root)
    {
        if (root == nullptr)
        {
            cout << "-1 ";
            return;
        }
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
};

int main()
{
    int nodes[] = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
    int idx = 0; // Start index for building the tree

    BinaryTree::Node *root = BinaryTree::buildTree(nodes, idx);

    cout << "Preorder Traversal: ";
    BinaryTree::preorder(root);
    cout << endl;

    cout << "Inorder Traversal: ";
    BinaryTree::inorder(root);
    cout << endl;

    cout << "Postorder Traversal: ";
    BinaryTree::postorder(root);
    cout << endl;

    return 0;
}
