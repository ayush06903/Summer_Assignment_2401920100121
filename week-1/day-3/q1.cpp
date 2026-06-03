class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[j]=nums[i];
                j++;
            }
        }
        //now we will place the zeroes thats we ignored in previous pass

       /* for(int i=0; i<nums.size(); i++){
            if(nums[i]==0){
                nums[j]=0;
                i++;
            }
        }*/

        while(j<nums.size()){
            nums[j]=0;
            j++;
        }

    }
};