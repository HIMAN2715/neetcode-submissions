class Solution {
public:
    bool isPalindrome(string s) {
        string simple ="";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                simple+=tolower(s[i]);
            }
        }
        int left =0;
        int right =simple.length()-1;
        while(left<=right){
            if(simple[left]==simple[right]){
                left++;
                right--;
            }
            else return false ;
        }
        return true;
        
    }
};
