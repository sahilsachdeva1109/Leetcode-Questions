// leetcode Question for Maximum Subarray 
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // initializing the sum and max sum 
        int sum = 0; 
        int maxi = INT_MIN;
        //adding values 
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            //storing max values by using max function
            maxi = max(sum,maxi);
            // checking the conditions 
            if(sum >= maxi ) maxi = sum ;
            if(sum <0 ) sum = 0;
           
        }
        return maxi;
}
};
