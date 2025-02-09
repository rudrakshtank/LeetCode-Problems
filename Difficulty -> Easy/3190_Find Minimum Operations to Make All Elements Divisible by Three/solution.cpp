class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int left_no=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3!=0) left_no++;
        }
        return left_no;
    }
};
