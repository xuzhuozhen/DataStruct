//
// Created by 16679 on 2024/7/18.
//

#ifndef ARRAYTABLE_H
#define ARRAYTABLE_H


template<typename T, typename U>
class Array{
public:
    Array(T _ArraySize): ArraySize(_ArraySize), size(_ArraySize){};
    ~Array(){};

    auto initArray() -> void {};

    auto getElement(int index) const -> T{};

    auto insertElement(T e, int index) -> void {};

    auto deleteElement() -> void {};

    auto findIndex() const -> int {};

    auto resize() -> U* {};

private:
    T ArraySize;
    U* data;
    int size;

};


#endif //ARRAYTABLE_H
