//
//  main.cpp
//  Tree: Level Order Traversal
//
//  Created by Aarnav Gupta on 10/06/21.
//

#include <bits/stdc++.h>

using namespace std;
    
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
          Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
                }

               return root;
           }
        }
/*
class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};
*/

    int height(Node* root) {
        if (root -> left == nullptr and root -> right == nullptr) return 1;
        else {
            int l = 0, r = 0;
            if (root -> left != nullptr) l = height(root -> left);
            if (root -> right != nullptr) r = height(root -> right);
            return max(l, r) + 1;
        }
    }
    
    void printLevel(Node* root, int lev) {
        if (root == nullptr) return;
        if (lev == 1) cout << root -> data << " ";
        printLevel(root -> left, lev-1);
        printLevel(root -> right, lev-1);
    }

    void levelOrder(Node * root) {
        int h = height(root);
        for (int i = 1; i <= h; i++) {
            printLevel(root, i);
        }
    }

}; //End of Solution

int main() {
    
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    myTree.levelOrder(root);

    return 0;
}
