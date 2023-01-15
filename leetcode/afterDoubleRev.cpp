class Solution {

public:
    int reverse(int x){
        int reverse=0;
        while(x!=0){
            int lastdigit = x%10;
            if(reverse > INT_MAX/10 || reverse< INT_MIN/10){
                return 0;
            }
            reverse= (reverse * 10)+ lastdigit;
            x= x/10;
        }
        return reverse;
    }
    bool isSameAfterReversals(int num) {
        
        if(reverse(reverse(num)) == num){
            return true;
        }
        else 
        return false;

        
    }
};
/*
easiest approach 
class Solution {
public:
    bool isSameAfterReversals(int num) {
        if(num==0) return true;
        if(num%10==0) 
            return false;
        return true;   
    }
}



*/