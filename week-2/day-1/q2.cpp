class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int>count(26,0);

        //traversing our string and incresing the count vector for each alpha

        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
        
        }

        //now travering our count vector and if count==0 at any index them we rern i and use breakn statement

        for(int i=0 ; i<s.size() ; i++){
            if(count[s[i]-'a']==1){
               // return s[i]-'a';
               return i;
            }
        }
        return -1;


    }
};