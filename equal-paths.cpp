#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;




bool equalPathsHelper(Node* root, int currentDepth, int& leafDepth) {
  
    if (root->left == nullptr && root->right == nullptr) {
     
        if (leafDepth == -1) {
            leafDepth = currentDepth;
            return true;
        }
     
        return currentDepth == leafDepth;
    }

 
    bool left = true, right = true;
    if (root->left) left = equalPathsHelper(root->left, currentDepth + 1, leafDepth);
    if (root->right) right = equalPathsHelper(root->right, currentDepth + 1, leafDepth);

    return left && right;
}

bool equalPaths(Node* root) {
    if (root == nullptr) return true; 

    int leafDepth = -1; 
    return equalPathsHelper(root, 0, leafDepth);
}




