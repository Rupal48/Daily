#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int totalApples = 0;
        for (int i=0;i<apple.size();i++) totalApples += apple[i];
        sort(capacity.begin(),capacity.end());
        int boxesReq = 0;
        int index = capacity.size()-1;
        while(totalApples > 0) {
            boxesReq++;
            totalApples -= capacity[index];
            index--;
        }
        return boxesReq;
    }
};