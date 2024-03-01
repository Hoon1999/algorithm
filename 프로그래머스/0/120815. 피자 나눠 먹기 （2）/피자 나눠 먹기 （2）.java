class Solution {
    public int solution(int n) {
        int answer = 0;
        int i = 0;
        int peaceOfPizza = 0;
        // 카테고리(?)가 배열에 속해 있길래 배열로 풀었음.
        int[] arr = new int[n];
        while(true) {
            ++answer;
            peaceOfPizza += 6;
            while(true) {
                if(peaceOfPizza == 0)
                    break;
                --peaceOfPizza;
                ++arr[i++];
                if(i == arr.length)
                    i = 0;
            }
            if(i == 0)
                break;
        }
        return answer;
    }
}