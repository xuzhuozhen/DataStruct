//
// Created by 16679 on 2024/7/19.
//

#ifndef LINKLIST_H
#define LINKLIST_H
template<typename T>
struct node {
    T data;
    struct node* next;
    explicit node(T e):data(e), next(nullptr){};
};


template<typename U>
class linklist {
private:
    struct node<U> *head;
    int size;


public:
    linklist();
    ~linklist();


    auto insertNode(U e) -> void;

    auto deleteNode(int index) -> bool;

    auto findNode(U e) -> node<U>*;

    auto accessNode(int index) -> node<U>*;

};

#endif //LINKLIST_H
