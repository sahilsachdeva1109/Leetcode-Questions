
//https://leetcode.com/problems/fair-candy-swap/description/
/*
approach - binary search on array which is imagined as merged 
steeps - 


*/
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        
        sort(aliceSizes.begin(),aliceSizes.end());
        sort(bobSizes.begin(),bobSizes.end());
        int sum1=0;
        int sum2=0;
        vector<int> ans;
        for(int i=0 ; i<aliceSizes.size();i++){
            sum1 +=aliceSizes[i];
        }
        for(int i=0 ; i<bobSizes.size();i++){
            sum2 +=bobSizes[i];
        }
        int diff = (sum1 - sum2)/2;
        for(int i =0 ; i<aliceSizes.size();i++){
            int l=0;
            int h=bobSizes.size()-1;
            while(l<=h){
                int mid = l+(h-l)/2;
                if(bobSizes[mid] == aliceSizes[i]-diff){
                    ans.push_back(aliceSizes[i]);
                    ans.push_back(bobSizes[mid]);
                    
                    return ans;
                }
                else if(bobSizes[mid] > aliceSizes[i]-diff){
                    h = mid-1;
                }
                else if(bobSizes[mid] < aliceSizes[i]-diff){
                    l=mid+1;
                }

            }
        }
    return ans;
    }
};