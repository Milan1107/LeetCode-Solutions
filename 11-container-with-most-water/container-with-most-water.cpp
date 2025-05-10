class Solution {
public:
    int maxArea(vector<int>& height) {
        int i,j,area,h;

        i=0;j=height.size()-1;
        area=0;

        while(i<j)
        {
            h = min(height[i],height[j]);
            area = max(area, h*(j-i));

            if(height[i]<height[j])
            {
                i++;
            }
            else{
                j--;
            }
        }   

        return area;    
    }
};