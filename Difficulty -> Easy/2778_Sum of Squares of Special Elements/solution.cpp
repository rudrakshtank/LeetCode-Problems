class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int a=nums.size();
        int sum=0;
        for(int i=1;i<=a;i++){
            if(a%i==0) sum+=(nums[i-1]*nums[i-1]);
        }
        return sum;
    }
};
