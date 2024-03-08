class Solution {
    public int solution(int[] box, int n) {
        int answer = 0;
        
        int x = box[0] >= n ? (box[0]/n) : 0;
        int y = box[1] >= n ? (box[1]/n) : 0;
        int z = box[2] >= n ? (box[2]/n) : 0;
        
        answer = x * y * z;
        return answer;
    }
}