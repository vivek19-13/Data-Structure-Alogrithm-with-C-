// fuction to find snake pattern in 2d matrix

vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i=0; i<n; i++)
        {
            int x;
            if(i%2 == 0)
            {
                for(int j=0; j<m; j++)
                {
                    ans.push_back(matrix[i][j]);
                }
            }
            else
            {
                for(int j=m-1; j>= 0; j--)
                {
                    ans.push_back(matrix[i][j]);
                }  
            }
        }
        return ans;  
     }
    
