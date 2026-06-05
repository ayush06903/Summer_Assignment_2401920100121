class Solution {
public:
    bool isPalindrome(string s) {
      /*  //we need to convert all the letter to small caps so that we can compare

        for(int i=0; i<s.size(); i++){
            s[i]=tolower(s[i]);
        }
        //do pointer lelo ek first ele pr aur ek last ele pr
        int i=0;
        int j=s.size()-1;
        //ek ek krkr check krte rho
        while(i<s.size() && j>=0){
            if(s[i]>=97 && s[i]<=122 && s[j]>=97 && s[j]<=122){ //dono ith and jth ptr
                if(s[i]==s[j]){
                i++;
                j--;
                }else{
                return false;
                }
            }else if(s[i]>=97 && s[i]<=122){
                   j--;
            }else if(s[j]>=97 && s[j]<=122){
                   i++;
            }
        }
        return true;*/

        //optimal
        int i=0;
        int j=s.size()-1;
        
        while(i<j){
            while(i<j && !isalnum(s[i])){
                 i++;
            }

            while(i<j && !isalnum(s[j])){
                 j--;
            }

            if(tolower(s[i])!=tolower(s[j])){
                 return false;
            }else{
                i++;
                j--;
            }
        }
        return true;
        
    }
};