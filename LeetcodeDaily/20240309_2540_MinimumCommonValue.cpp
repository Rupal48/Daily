#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        // Doint it as Daily Question

        int index1 = 0; // Pointer for 1st array
        int index2 = 0; // POinter for 2nd array

        // Running the loop until one the arrays are finished
        while(index1 < nums1.size() && index2 < nums2.size()) {

            // If both have common integer we directly return the common integer
            // Since it will be the min int as the arrays are in ascending order
            if (nums1[index1] == nums2[index2]) return nums1[index1];

            // If the value in 1st array is lesser do index1++
            if (nums1[index1] < nums2[index2])  index1++;
            // If the value in 2nd array is lesser do index2++
            else index2++;
        }

        // In case none of the int are common we return -1
        return -1;

    }
};