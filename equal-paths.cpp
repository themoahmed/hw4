#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;



// Helper function to determine if all paths from leaves to root have the same length
bool equalPathsHelper(Node* root, int currentDepth, int& leafDepth) {
    // Base case: when a leaf node is encountered
    if (root->left == nullptr && root->right == nullptr) {
        // If this is the first leaf node encountered, record its depth
        if (leafDepth == -1) {
            leafDepth = currentDepth;
            return true;
        }
        // For all subsequent leaf nodes, check if their depth matches the recorded leaf depth
        return currentDepth == leafDepth;
    }

    // Recursive case: traverse left and right subtrees
    bool left = true, right = true;
    if (root->left) left = equalPathsHelper(root->left, currentDepth + 1, leafDepth);
    if (root->right) right = equalPathsHelper(root->right, currentDepth + 1, leafDepth);

    return left && right;
}

// Function to be called to check if all paths from leaves to root have the same length
bool equalPaths(Node* root) {
    if (root == nullptr) return true; // Check added to handle empty trees

    int leafDepth = -1; // Initialized with -1 to indicate that no leaf has been encountered yet
    return equalPathsHelper(root, 0, leafDepth);
}




