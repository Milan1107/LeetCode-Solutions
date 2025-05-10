class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int ncol = matrix[0].size();
        int nrow = matrix.size();
        bool flag = false;

        for(int i=0;i<nrow;i++)
        {
            if(matrix[i][ncol-1]>=target)
            {
                for(int j=0;j<ncol;j++)
                {
                    if(matrix[i][j]==target){    
                        flag =  true;
                        break;
                    }
                }
                break;
            }
            else{
                continue;
            }
        }
        return flag;
    }
};