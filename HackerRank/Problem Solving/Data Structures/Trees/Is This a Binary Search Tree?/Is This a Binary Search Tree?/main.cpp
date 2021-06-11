//
//  main.cpp
//  Is This a Binary Search Tree?
//
//  Created by Aarnav Gupta on 11/06/21.
//

/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.

The Node struct is defined as follows:
    struct Node {
        int data;
        Node* left;
        Node* right;
    }
*/
vector<int> inc;  // Stores the ascending order if the tree is a BST by inorder traversal

    void inorder(Node* root) {
        if(root) {
            if(root -> left) inorder(root -> left);
            inc.push_back(root -> data);
            if(root -> right) inorder(root -> right);
        }
    }

    bool checkBST(Node* root) {
        inorder(root);
        int last_val = -1;
        for(int i: inc) {
            if (i <= last_val) return false;
            last_val = i;
        }
        return true;
    }
