//leetcode 
/*
approach  - last digit ko 10 mod krke 
rev variable dekhege ki vo int max hai ya nahi
fir usko 10 se multiply krke + last digit me add kr denge
aur tb tk mod 10 krte rhege jbb tk digits khtm ni ho jate 
*/
class Solution {
public:
    int reverse(int x) {
        int reverse=0;
        while(x!=0){
            int lastdigit = x%10;
            if(reverse > INT_MAX/10 || reverse < INT_MIN/10){
                return 0;
            }
            reverse = (reverse*10)+lastdigit;
            x = x/10;
        }
       
        return reverse ;
    }
};