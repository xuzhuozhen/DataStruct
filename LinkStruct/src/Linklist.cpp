//
// Created by 16679 on 2024/7/19.
//
#include"../Header/Linklist.h"
#include<iostream>
using namespace std;


template<typename U>
linklist<U>::linklist() {
    size = 0;
    head = new node<U>();
}

template<typename U>
linklist<U>::~linklist() {
    while (head) {
        node<U> *cur = head->next;
        delete head;
        head = cur;
    }
}




