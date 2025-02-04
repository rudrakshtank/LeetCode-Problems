class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int a=nums.size();
        int maxsum=0; 
        int currentsum=0;
        int prevalue;
        for(int i=0;i<a;i++){
            if(nums[i]>prevalue){
                currentsum+=nums[i];
            }
            else{
                currentsum=0;
                currentsum+=nums[i];
            }
            prevalue=nums[i];
            if(currentsum>maxsum) maxsum=currentsum;
        }
        return maxsum;
    }
};
