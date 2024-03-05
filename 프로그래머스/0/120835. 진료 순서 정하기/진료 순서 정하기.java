class Solution {
    public int[] solution(int[] emergency) {
        int[] answer = new int[emergency.length];
        
        for(int j = 0; j < emergency.length; j++) {
            int max = 0;
            int key = -1;
            
            for(int i = 0; i < emergency.length; i++) {
                if(max < emergency[i]) {
                    max = emergency[i];
                    key = i;
                }
            }
            answer[key] = j + 1;
            emergency[key] = -1;
        }
        return answer;
    }
}