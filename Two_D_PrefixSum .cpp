#include<iostream>
#include<vector>

using namespace std;

void two_D_prefixSum(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>> grid(n+1,vector<int>(m+1,0));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=m; j++){
            cin>>grid[i][j];
        }
        
    }

    // sum column (Row + Row)
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=m; j++){
            grid[i][j] +=grid[i-1][j];
        }
        
    }
    // sum Row (Colum + Colum)
    // this is the final sumation
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <=m; j++){
            grid[i][j] +=grid[i][j-1];
        }
        
    }
    
    int q;
    cin>>q;
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        cout<<grid[x2][y2] - grid[x1-1][y2] - grid[x2][y1-1] + grid[x1-1][y1-1];
    }
    

}

int main()
{
    two_D_prefixSum();

    return 0;
}
