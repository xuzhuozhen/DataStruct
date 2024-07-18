//
// Created by 16679 on 2024/7/19.
//

#ifndef LINKLIST_H
#define LINKLIST_H
template<typename T>
struct node {
    T data;
    struct node* next;
};


template<typename U>
class linklist {
private:
    struct node<U> *head;
    int size;


public:
    linklist();
    ~linklist();

};



#endif //LINKLIST_H
