class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
        int pair=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j]<target) pair++;
            }
        }
        return pair;
    }
};
