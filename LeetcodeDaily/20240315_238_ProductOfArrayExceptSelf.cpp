#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        // First ask the interviewer about the range until which the product can go to
        // Like is it under the limit of 32-bit integer or maybe a 64-bit integer etc etc


        // Brute Force
        // Just use a for loop with index i pointing to an index in the array and
        // then use another index j which traverses accross the entire array multiplying
        // all the elements except when i==j
        // TC -> O(N^2) , SC -> O(N)


        // Slightly optimised
        // Using Mathematics
        // We will traverse across the array and multiply all the elements
        // Then for each element we just divide the prodect by the elemnt itself
        // This way we will get the req ans
        // TC -> O(N) , SC -> O(1)
        // This will be the most optimal approach in case the elements of the array
        // Cannot be 0
        // In case of 0 as an element it will give runtime error as we try to divide an exp by 0
        // Even if we try to handle the 0 seperately using an if statement ot something
        // We will have to calculate the prodect of other elements seperately as 0 will make
        // The entire prodect 0 if done together
        // Hence this method will not work in this particular questions


        // More optimised soluttion
        // We will calculate the prefix product and suffix product for each element and store it
        // in seperate arrays
        // Then we just multiply them and get the desired array/ans
        // ----------THE CODE-------------------

        // int n = nums.size();
        // vector<int> prefix(n,1) , suffix(n,1);

        // for (int i=1;i<n;i++) prefix[i] = prefix[i-1]*nums[i-1];
        // for (int i=n-2;i>=0;i--) suffix[i] = suffix[i+1]*nums[i+1];

        // vector<int> ans;
        // for (int i=0;i<n;i++) ans.push_back(prefix[i]*suffix[i]);

        // return ans;

        // -------------------------------------------

        // Now at this point TC -> O(3n) and SC -> O(2n)


        // Now the interviewer will ask you to optimize it
        // Since the time comp is pretty much O(n) you cannot really do much with it
        // But in case of space complexity
        // Since the questions doesnt count the ans vector/array as extra space
        // We will use ans array as a prefix array
        // Also instead of calculating the suffix seperately and storing it
        // We do the operations directly to the ans array as it already contains the prefix part

        // -----------------The FInal Optimized Code-----------------------------

        int n = nums.size();
        vector<int> ans(n,1);
        for (int i=1;i<n;i++) {
            ans[i] = ans[i-1]*nums[i-1]; 
        }

        int suffixProduct = 1;
        for (int i=n-2;i>=0;i--) {
            suffixProduct *= nums[i+1];
            ans[i] *= suffixProduct;
        }

        return ans;

        // Now the TC -> O(2n) approx O(n)
        // SC -> O(1)

    }
};