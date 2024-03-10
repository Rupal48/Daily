#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.begin(),happiness.end());
        int index = happiness.size()-1;
        int count = 0;
        long long sumHappy = 0;
        while(count < k) {
            if (happiness[index]-count > 0) {
               sumHappy += happiness[index]-count; 
            }
            else return sumHappy;
            index--;
            count++;
        }
        return sumHappy;
    }
};