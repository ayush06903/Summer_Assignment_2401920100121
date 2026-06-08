class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>count(26,0);

        if(s.size()!=t.size()){
            return false;
        }

        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
        }
    
        for(int j=0; j<s.size(); j++){
            count[t[j]-'a']--;
        }

        for(int k=0; k<26; k++){
            if(count[k]!=0){
                return false;
            }
        }
        return true;
    }
};