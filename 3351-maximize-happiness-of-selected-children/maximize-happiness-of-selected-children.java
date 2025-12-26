class Solution {
    public long maximumHappinessSum(int[] happiness, int k) {
      long sum = 0;
      Arrays.sort(happiness);
      int j = happiness.length-1;
      for(int i = 0; i<k; i++){
        if(happiness[j]-i > 0){
            sum += happiness[j]-i;
        }
        j -= 1;
      }  
      return sum;
    }
}