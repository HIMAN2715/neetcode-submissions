class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int left=0;
        int count=2;
        string merge= "";
        int right =0;
        while((left < word1.length() || right < word2.length())){
            if(count%2==0){
              if(left<word1.length()) 
              { merge+=word1[left];
                left++;}
            }
            else if(count%2!=0){
               if(right<word2.length()){ merge+=word2[right];
                right++ ;
               }
            }
            count++;
        }
        return merge ;
        
    }
};