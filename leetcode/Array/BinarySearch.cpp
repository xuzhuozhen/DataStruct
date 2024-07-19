//
// Created by 16679 on 2024/7/19.
//
#include <bits/stdc++.h>
using namespace std;


class ArrayAlgo {
public:
    ArrayAlgo() = default;
    ~ArrayAlgo() = default;


    /**
     *
     * @param nums
     * @param target
     * @return index of nums
     */
    static int BinarySearch(vector<int> &nums, int target) {
       int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) >> 1;
            if (nums[mid] < target) {
                left = mid + 1;
            }else if (nums[mid] > target) {
                right = mid - 1;
            }else {
                return mid;
            }
        }

        return -1;
    }
};

