#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        // Optimal Solution using unordered set
        // This one lesser TC but higher SC
        unordered_set<int> copy(nums1.begin(),nums1.end());
        vector<int> ans;
        for (auto x: nums2) {
            if(copy.erase(x)) ans.push_back(x);
        }
        return ans;


        // My soln

        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        // int index1 = 0;
        // int index2 = 0;
        // vector<int> ans;
        // while(index1 < nums1.size() && index2 < nums2.size()) {
        //     if (nums1[index1] == nums2[index2]) {
        //         ans.push_back(nums1[index1]);
        //         index1++;
        //         index2++;
        //         while(index1 < nums1.size() && nums1[index1] == nums1[index1-1]) index1++;
        //         while(index2 < nums2.size() && nums2[index2] == nums2[index2-1]) index2++;
        //     }
        //     else if (nums1[index1] < nums2[index2]) index1++;
        //     else index2++;
        // }
        // return ans;
    }
};