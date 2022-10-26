 bool isvalid(vector<vector<int>>& grid , int i , int j, int n , int m){
        if(i >=0 && i < n && j >=0 && j < m && grid[i][j]==1){
            return true;
        }
        return false;
    }
    void dfs(vector<vector<int>>& grid , int i , int j, int n , int m ,int *count){
        *count = *count + 1;
        grid[i][j] = 0;
        if(isvalid(grid , i+1 ,j , n ,m )){
            dfs(grid , i+1, j , n ,m, count);
        }
        if(isvalid(grid , i-1, j , n ,m )){
            dfs(grid , i-1, j , n ,m, count);
        }
        if(isvalid(grid , i ,j+1 , n ,m )){
            dfs(grid , i, j+1 , n ,m, count);
        }
        if(isvalid(grid , i ,j-1 , n ,m )){
            dfs(grid , i, j-1 , n ,m, count);
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        vector<int> v;
        int size1 = grid.size();
        for(int i =0;i <size1 ;i++){
            int size2 = grid[i].size();
            for(int j =0;j <size2;j++){
               if(grid[i][j]==1){
                    int ans =0;
               dfs(grid , i , j , size1 , size2 , &ans);
                v.push_back(ans);
               }
            }
        }
        int m = 0;
        for(auto x: v){
            if(x > m){
                m = max(m ,x);
            }
        }
        return m;
        
        
    }
