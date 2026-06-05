class Solution {
public:
    void reverseString(vector<char>& s) {

        int length=s.size();

        stack<int>st;

        for(int i=0;i<length;i++){
            st.push(s[i]);
    
        }
         
        int i=0;
        while(!st.empty()){
            s[i]=st.top();
            st.pop();
            i++;
        }
        
    }
};