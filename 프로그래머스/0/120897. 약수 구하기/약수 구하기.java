import java.util.ArrayList;
class Solution {
    public int[] solution(int n) {
        ArrayList<Integer> arr = new ArrayList<Integer>();
        int[] answer = {};
        
        for(int i = 1; i <= n/2; i++) {
            if(n % i == 0)
                arr.add(i);
        }
        arr.add(n);
        
        answer = new int[arr.size()];
        for(int i = 0; i < arr.size(); i++) {
            answer[i] = arr.get(i).intValue();
        }
        
        return answer;
    }
}