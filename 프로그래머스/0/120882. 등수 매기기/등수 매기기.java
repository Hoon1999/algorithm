import java.util.Arrays;

class Solution {
    public int[] solution(int[][] score) {
        double[] tempArr = new double[score.length];
        double[] sortedAvg = new double[score.length];
        int[] answer = new int[score.length];
        
        for(int i = 0; i < tempArr.length; i++) 
            tempArr[i] = (score[i][0] + score[i][1])/2.0;
        
        Arrays.sort(tempArr);
        for(int i = 0 ; i < sortedAvg.length; i++) 
            sortedAvg[i] = tempArr[tempArr.length-i-1];
            
        for(int i = 0; i < tempArr.length; i++) 
            tempArr[i] = (score[i][0] + score[i][1])/2.0;
        
        for(int i = 0; i < tempArr.length; i++) {
            for(int j = 0; j < sortedAvg.length; j++) {
                if(tempArr[i] == sortedAvg[j]) {
                    answer[i] = j+1;
                    break;
                }
            }
        }
        
        return answer;
    }
}