class Solution {
    public double separateSquares(int[][] squares) {
        double totalArea = 0;
        double maxY = Double.MIN_VALUE;
        double minY = Double.MAX_VALUE;
        for(int [] square : squares){
            int y = square[1];
            int L = square[2];
            totalArea += (double)L*L;
            minY = Math.min(minY, y);
            maxY = Math.max(maxY, y+L);
        }
        double targetArea = totalArea/2;
        double right = maxY, left = minY;
        for(int i = 0; i<100; i++){
            double mid = (left+right)/2;
            double areaBelow = calculateAreaBelow(squares, mid);
            if(areaBelow<targetArea)
                left = mid;
            else
                right = mid;
        }
        return (right+ left)/2.0;
    }
    private double calculateAreaBelow(int [][] squares, double h){
        double area = 0;
        for(int[] square : squares){
            int Y = square[1];
            int L = square[2];
            int top = Y+L;
            if(h<=Y)
                continue;
            else if(h>=top)
                area+=(double)L*L;
            else{
                double cut = h-Y;
                area += (double) L*cut;
            }
        }
        return area;
    }
}