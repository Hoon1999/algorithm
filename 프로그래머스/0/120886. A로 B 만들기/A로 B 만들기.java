class Solution {
    public int solution(String before, String after) {
        int[] idx = new int[after.length()];
        int answer = 0;
        
        for(int i = 0; i < before.length(); ++i) {
            for(int j = 0; j < after.length(); ++j) {
                if(idx[j] == 1)
                    continue;
                if(before.charAt(i) == after.charAt(j)){
                    idx[j] = 1;
                    break;
                }
            }
            
        }
        for(int i = 0; i < idx.length; ++i) {
            if(idx[i] == 0){
                answer = 0;
                break;
            }
            answer = 1;
        }
        return answer;
    }
}