//
// Created by 16679 on 2024/7/19.
//

#ifndef TREE_H
#define TREE_H

template<typename T>
struct node {
    T val;
    struct node* left;
    struct node* right;
    explicit node(T _val): val(_val) {
        left = nullptr, right = nullptr;
    };
};


template<typename U>
class Tree {
private:
    struct node<U>* root;

public:
    Tree();
    ~Tree();


};

#endif //TREE_H
