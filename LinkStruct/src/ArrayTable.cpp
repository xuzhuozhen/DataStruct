//
// Created by 16679 on 2024/7/19.
//
#include "../Header/ArrayTable.h"
#include<iostream>
using namespace std;


template<typename T, typename U>
Array<T, U>::~Array() {
    delete []data;
}

template<typename T, typename U>
auto Array<T, U>::initArray() -> void {
    for (int i = 0; i < ArraySize; ++i) { data[i] = 0;}
}


template<typename T, typename U>
auto Array<T, U>::getElement(int index) const -> T {
    if (index < 0 || index >= size) return -1;
    return data[index];
}


template<typename T, typename U>
auto Array<T, U>::insertElement(T e, int index) -> void {
    if (index < 0 || index > size) return ;
    if (size + 1 >= ArraySize) resize();

    for (int i = size; i > index; --i){
        data[size] = data[size - 1];
    }
    data[index] = e;
    size++;
}


template<typename T, typename U>
auto Array<T, U>::findIndex(T e) const -> int {
    int ans = -1;
    for (int i = 0; i < size; ++i){
        if (e == data[i])  ans = i;
    }

    return ans;
}


template<typename T, typename U>
auto Array<T, U>::deleteElement(int index) -> int {
    if (index < 0 || index > size - 1) return -1;
    int deleteElement = data[index];
    for (int i = index; i < size - 1; ++i) data[i] = data[i + 1];
    size--;

    return deleteElement;
}


template<typename T, typename U>
auto Array<T, U>::resize() -> bool {
    U* newData = new U(2 * ArraySize);
    if (!newData) return false;
    for (auto i: data){
        *newData = i;
        newData++;
    }
    delete []data;
    this->data = newData;
    return true;
}
