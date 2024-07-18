//
// Created by 16679 on 2024/7/18.
//

#ifndef ARRAYTABLE_H
#define ARRAYTABLE_H


template<typename T, typename U>
class Array{
public:
    explicit Array(T _arraysize): ArraySize(_arraysize) {
        size = 0;
        data = new U(_arraysize);
    };
    ~Array();

    auto initArray() -> void;

    auto getElement(int index) const -> T;

    auto insertElement(T e, int index) -> void ;

    auto deleteElement(int index) -> int ;

    auto findIndex(T e) const -> int ;

    auto resize() -> bool ;

private:
    T ArraySize;
    U* data;
    int size;

};


#endif //ARRAYTABLE_H
