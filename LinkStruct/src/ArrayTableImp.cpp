//
// Created by 16679 on 2024/7/18.
//
#include "/DataStruct/LinkStruct/Header/ArrayTable.h"
#include<iostream>
using namespace std;


template<typename T, typename U>
class Array{
public:
    Array(T _ArraySize): ArraySize(_ArraySize), size(0){
        data = new U(_ArraySize);
    }
    ~Array(){
        delete []data;

    }

    auto initArray() -> void {
        for (int i = 0; i < ArraySize; ++i) {data[i] = 0;}
    }

    auto getElement(int index) const -> T{
        if (index < 0 || index >= size) return -1;
        return data[index];
    }

    auto insertElement(T e, int index) -> void {
        if (index < 0 || index > size) return ;
        if (size + 1 >= ArraySize) resize();

        for (int i = size; i > index; --i){
            data[size] = data[size - 1];
        }
        data[index] = e;
        size++;
    };

    auto deleteElement(int index) -> int {
        if (index < 0 || index > size - 1) return -1;
        int deleteElement = data[index];
        for (int i = index; i < size - 1; ++i) data[i] = data[i + 1];
        size--;

        return deleteElement;
    };

    auto findIndex(T e) const -> int {
        int ans = -1;
        for (int i = 0; i < size; ++i){
            if (e == data[i])  ans = i;
        }

        return ans;
    };

    auto resize() -> U* {};

private:
    T ArraySize;
    U* data;
    int size;

};
