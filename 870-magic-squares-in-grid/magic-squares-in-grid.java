class Solution {
    public int numMagicSquaresInside(int[][] grid) {
        int count = 0;
        if(grid.length<3 && grid[0].length<3)
            return 0;
        for(int i = 0; i<grid.length-2; i++){
            for(int j = 0; j<grid[i].length-2; j++){
                boolean[] arr = new boolean[10];
                int sum1 = grid[i][j]+grid[i][j+1]+grid[i][j+2];
                int sum2 = grid[i+1][j]+grid[i+1][j+1]+grid[i+1][j+2];
                int sum3 = grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2];
                int org_sum = 15;
                if(sum1==sum2 && sum2==sum3 && sum3==org_sum){
                    int diag1 = grid[i][j] + grid[i+1][j+1] + grid[i+2][j+2];
                    int diag2 = grid[i][j+2] + grid[i+1][j+1] + grid[i+2][j];
                    if(diag1 == diag2 && diag2 == org_sum){
                        sum1 = grid[i][j] + grid[i+1][j] + grid[i+2][j];
                        sum2 = grid[i][j+1] + grid[i+1][j+1] + grid[i+2][j+1];
                        sum3 = grid[i][j+2] + grid[i+1][j+2] + grid[i+2][j+2];
                        if(sum1==sum2 && sum2==sum3 && sum3 == org_sum){
                            boolean cont = true;
                            int ten  = 10;
                            if(grid[i][j] < 10)arr[grid[i][j]] = true;
                            else cont=false;
                            if (grid[i][j+1]<10) arr[grid[i][j+1]] = true;
                            else cont=false;
                            if (grid[i][j+2]<10) arr[grid[i][j+2]] = true;
                            else cont=false;
                            if (grid[i+1][j]<10) arr[grid[i+1][j]] = true;
                            else cont=false;
                            if(grid[i+1][j+1]<10) arr[grid[i+1][j+1]] = true; 
                            else cont=false;
                            if(grid[i+1][j+2]<10) arr[grid[i+1][j+2]] = true;
                            else cont=false;
                            if (grid[i+2][j]<10) arr[grid[i+2][j]] = true;
                            else cont=false;
                            if(grid[i+2][j+1]<10 )arr[grid[i+2][j+1]] = true;
                            else cont=false;
                            if(grid[i+2][j+2]<10) arr[grid[i+2][j+2]] = true;
                            else cont=false;
                            
                            for(int k = 1; k<arr.length;k++){
                                if(!arr[k])
                                    cont =false;
                            }
                            if(cont)
                                count++;
                        }
                    }
                }
                
            }
        }
        return count;
    }
}