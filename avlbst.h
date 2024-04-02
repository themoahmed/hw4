#ifndef AVLBST_H
#define AVLBST_H

#include <iostream>
#include <exception>
#include <cstdlib>
#include <cstdint>
#include <algorithm>
#include "bst.h"

struct KeyError { };

/**
* A special kind of node for an AVL tree, which adds the balance as a data member, plus
* other additional helper functions. You do NOT need to implement any functionality or
* add additional data members or helper functions.
*/
template <typename Key, typename Value>
class AVLNode : public Node<Key, Value>
{
public:
    // Constructor/destructor.
    AVLNode(const Key& key, const Value& value, AVLNode<Key, Value>* parent);
    virtual ~AVLNode();

    // Getter/setter for the node's height.
    int8_t getBalance () const;
    void setBalance (int8_t balance);
    void updateBalance(int8_t diff);

    // Getters for parent, left, and right. These need to be redefined since they
    // return pointers to AVLNodes - not plain Nodes. See the Node class in bst.h
    // for more information.
    virtual AVLNode<Key, Value>* getParent() const override;
    virtual AVLNode<Key, Value>* getLeft() const override;
    virtual AVLNode<Key, Value>* getRight() const override;

protected:
    int8_t balance_;    // effectively a signed char
};

/*
  -------------------------------------------------
  Begin implementations for the AVLNode class.
  -------------------------------------------------
*/

/**
* An explicit constructor to initialize the elements by calling the base class constructor
*/
template<class Key, class Value>
AVLNode<Key, Value>::AVLNode(const Key& key, const Value& value, AVLNode<Key, Value> *parent) :
    Node<Key, Value>(key, value, parent), balance_(0)
{

}

/**
* A destructor which does nothing.
*/
template<class Key, class Value>
AVLNode<Key, Value>::~AVLNode()
{

}

/**
* A getter for the balance of a AVLNode.
*/
template<class Key, class Value>
int8_t AVLNode<Key, Value>::getBalance() const
{
    return balance_;
}

/**
* A setter for the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::setBalance(int8_t balance)
{
    balance_ = balance;
}

/**
* Adds diff to the balance of a AVLNode.
*/
template<class Key, class Value>
void AVLNode<Key, Value>::updateBalance(int8_t diff)
{
    balance_ += diff;
}

/**
* An overridden function for getting the parent since a static_cast is necessary to make sure
* that our node is a AVLNode.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getParent() const
{
    return static_cast<AVLNode<Key, Value>*>(this->parent_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getLeft() const
{
    return static_cast<AVLNode<Key, Value>*>(this->left_);
}

/**
* Overridden for the same reasons as above.
*/
template<class Key, class Value>
AVLNode<Key, Value> *AVLNode<Key, Value>::getRight() const
{
    return static_cast<AVLNode<Key, Value>*>(this->right_);
}


/*
  -----------------------------------------------
  End implementations for the AVLNode class.
  -----------------------------------------------
*/


template <class Key, class Value>
class AVLTree : public BinarySearchTree<Key, Value>
{
public:
    virtual void insert (const std::pair<const Key, Value> &new_item); // TODO
    virtual void remove(const Key& key);  // TODO
protected:
    virtual void nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2);

    // Add helper functions here
    void insertFix(AVLNode<Key, Value>* parent, AVLNode<Key, Value>* newNode);
    void rightRotate(AVLNode<Key, Value>* parent);
    void leftRotate(AVLNode<Key, Value>* parent);


};

/*
 * Recall: If key is already in the tree, you should 
 * overwrite the current value with the updated value.
 */
template<class Key, class Value>
void AVLTree<Key, Value>::insert (const std::pair<const Key, Value> &new_item)
{

    //root is empyt
    if(this->root_ == nullptr)
    {
        this->root_ = new AVLNode<Key, Value>(new_item.first, new_item.second, nullptr);
        return;
    }

    //make sure the key exists
    if(this->internalFind(new_item.first) != nullptr)
    {
        this->internalFind(new_item.first)->setValue(new_item.second);
        return;
    }

    AVLNode<Key, Value>* parentNode = static_cast<AVLNode<Key, Value>*>(this->root_);
    AVLNode<Key, Value>* newNode = new AVLNode<Key, Value>(new_item.first, new_item.second, nullptr);

    while(parentNode != nullptr){
        if(newNode->getKey() < parentNode->getKey()){
            if(parentNode->getLeft() == nullptr){
                parentNode->setLeft(newNode);
                newNode->setParent(parentNode);
                break;
            }
            else{
                parentNode = parentNode->getLeft();
            }
        }
        else{
            if(parentNode->getRight() == nullptr){
                parentNode->setRight(newNode);
                newNode->setParent(parentNode);
                break;
            }
            else{
                parentNode = parentNode->getRight();
            }
        }
    }

    //avl part
    if(parentNode->getBalance() == -1 || parentNode->getBalance() == 1) {
        parentNode->setBalance(0);
        return;
    } else if(parentNode->getBalance() == 0) {
        if(parentNode->getLeft() == newNode) parentNode->updateBalance(-1);
        else if(parentNode->getRight() == newNode) parentNode->updateBalance(1);
        insertFix(parentNode, newNode);
    }
    



}


template<class Key, class Value>
void AVLTree<Key, Value>::insertFix(AVLNode<Key, Value>* parent, AVLNode<Key, Value>* newNode)
{
    AVLNode<Key, Value>* grandParent = parent->getParent();
    if(grandParent == nullptr) return;
    if(parent == grandParent->getLeft()){
        if(parent->getBalance() == -1){
            if(newNode == parent->getLeft()){
                rightRotate(grandParent);
                grandParent->setBalance(0);
                parent->setBalance(0);
            }
            else{
                leftRotate(parent);
                rightRotate(grandParent);
                if(newNode->getBalance() == 0){
                    grandParent->setBalance(0);
                    parent->setBalance(0);
                }
                else if(newNode->getBalance() == 1){
                    grandParent->setBalance(-1);
                    parent->setBalance(0);
                }
                else{
                    grandParent->setBalance(0);
                    parent->setBalance(1);
                }
            }
        }
        else{
            parent->setBalance(0);
            return;
        }
    }
    else{
        if(parent->getBalance() == 1){
            if(newNode == parent->getRight()){
                leftRotate(grandParent);
                grandParent->setBalance(0);
                parent->setBalance(0);
            }
            else{
                rightRotate(parent);
                leftRotate(grandParent);
                if(newNode->getBalance() == 0){
                    grandParent->setBalance(0);
                    parent->setBalance(0);
                }
                else if(newNode->getBalance() == 1){
                    grandParent->setBalance(-1);
                    parent->setBalance(0);
                }
                else{
                    grandParent->setBalance(0);
                    parent->setBalance(1);
                }
            }
        }
        else{
            parent->setBalance(0);
            return;
        }
    }
    insertFix(grandParent, newNode);
}

template<class Key, class Value>
void AVLTree<Key, Value>::rightRotate(AVLNode<Key, Value>* parent)
{
    AVLNode<Key, Value>* grandParent = parent->getParent();
    AVLNode<Key, Value>* child = parent->getLeft();
    AVLNode<Key, Value>* childRight = child->getRight();
    if(grandParent == nullptr){
        this->root_ = child;
        child->setParent(nullptr);
    }
    else{
        if(grandParent->getLeft() == parent){
            grandParent->setLeft(child);
        }
        else{
            grandParent->setRight(child);
        }
        child->setParent(grandParent);
    }
    child->setRight(parent);
    parent->setParent(child);
    parent->setLeft(childRight);
    if(childRight != nullptr){
        childRight->setParent(parent);
    }
}

template<class Key, class Value>
void AVLTree<Key, Value>::leftRotate(AVLNode<Key, Value>* parent)
{
    AVLNode<Key, Value>* grandParent = parent->getParent();
    AVLNode<Key, Value>* child = parent->getRight();
    AVLNode<Key, Value>* childLeft = child->getLeft();
    if(grandParent == nullptr){
        this->root_ = child;
        child->setParent(nullptr);
    }
    else{
        if(grandParent->getLeft() == parent){
            grandParent->setLeft(child);
        }
        else{
            grandParent->setRight(child);
        }
        child->setParent(grandParent);
    }
    child->setLeft(parent);
    parent->setParent(child);
    parent->setRight(childLeft);
    if(childLeft != nullptr){
        childLeft->setParent(parent);
    }
}

/*
 * Recall: The writeup specifies that if a node has 2 children you
 * should swap with the predecessor and then remove.
 */
template<class Key, class Value>
void AVLTree<Key, Value>:: remove(const Key& key)
{
   //could not finish

}


template<class Key, class Value>
void AVLTree<Key, Value>::nodeSwap( AVLNode<Key,Value>* n1, AVLNode<Key,Value>* n2)
{
    BinarySearchTree<Key, Value>::nodeSwap(n1, n2);
    int8_t tempB = n1->getBalance();
    n1->setBalance(n2->getBalance());
    n2->setBalance(tempB);
}


#endif
