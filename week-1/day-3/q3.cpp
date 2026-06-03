class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxwater=0;
        int area=0;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;

            area=h*w;
            maxwater=max(area,maxwater);

            if(height[i]<height[j]){
                i++;
            }else if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
            
            
        }
        return maxwater;
    }
};