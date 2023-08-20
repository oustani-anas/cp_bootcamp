
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#define endl '\n'
#define ll long long


// Binary Search in C++

#include <iostream>
#include <vector>


int binarySearch(const std::vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;
}

int main() {
    std::vector<int> sortedArray = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int target = 11;

    int index = binarySearch(sortedArray, target);

    if (index != -1) {
        std::cout << "Element " << target << " found at index " << index << endl;
    } else {
        std::cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}

