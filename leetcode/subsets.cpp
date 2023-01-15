//Include and Exclude vali game lgni h isme 



class Solution {
    private: 
    // hmne yha & issiliyue lgaya hai kyoki hm original vector me changes krana chahte h
    void solve(vector<int>& nums , vector<int>output,int index, vector<vector<int>>&ans) {
        //base condition 
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        //exclude
        solve(nums,output,index+1,ans);

        //include
        int element = nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);

    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index=0;
        solve(nums, output, index ,ans);
        return ans;
    }
};