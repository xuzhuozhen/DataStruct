//
// Created by 16679 on 2024/7/19.
//
#include"../Header/Linklist.h"
#include<iostream>
using namespace std;


template<typename U>
linklist<U>::linklist() {
    size = 0;
    head = new node<U>(-1);
}

template<typename U>
linklist<U>::~linklist() {
    while (head) {
        node<U> *cur = head->next;
        delete head;
        head = cur;
    }
}

/**
 * @brief 头插法
 * @param e (插入元素)
 *
 */
template<typename U>
auto linklist<U>::insertNode(U e) -> void {
    auto *newnode = new node<U>(e);
    newnode->next = head->next;
    head->next = newnode;
    size++;
}

/**
 * @brief 删除指定Index的元素
 * @param index
 *
 */
template<typename U>
auto linklist<U>::deleteNode(int index) -> bool {
    if (index < 1 || index > size) return false;

    node<U>* cur = head->next;
    node<U>* tmp = nullptr;
    for (int i = 1; i < index - 1; ++i) {
        cur = cur->next;
    }

    tmp = cur->next;
    cur->next = tmp->next;
    delete tmp;

    return true;
}


/**
 * @brief 查找节点
 * @param e (节点值)
 * @return 查找成功则返回节点指针，查找失败则返回nullptr
 */
template<typename U>
auto linklist<U>::findNode(U e) -> node<U>* {
    node<U>* cur = head->next;

    while (cur) {
        if (cur->data == e) return cur;
        cur = cur->next;
    }

    return nullptr;
}


/**
 * @brief 访问指定index的元素
 * @param index
 * @return 下标符合条件则返回对应下标的元素指针，否则返回空指针
 */
template<typename U>
auto linklist<U>::accessNode(int index) -> node<U> * {
    if (index < 1 || index > size) return nullptr;

    node<U> *cur = head->next;
    for (int i = 1; i < index; ++i) {
        cur = cur->next;
    }

    return cur;
}







