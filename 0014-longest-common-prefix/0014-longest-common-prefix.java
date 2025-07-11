class Solution {
    public String longestCommonPrefix(String[] strs) {
        // 2차원 char 배열에 문자를 하나씩 조개서 보관할것이다.
        char[][] strings = new char[strs.length][201];
        String rst = "";
        
        if (strs.length == 1) {
            return strs[0];
        }
        
        for(int i = 0 ; i < strs.length; i++) {
            // strs[i] 를 strings[i] 에 보관
            strings[i] = strs[i].toCharArray();
            
            if(strs[i].length() == 0 ){
                return "";
            }
        }
        
        for(int i = 0; i < strings[0].length; i++) {
            for(int j = 0; j < strs.length-1; j++) {
                try{
                    if(strings[j][i] != strings[j+1][i]) {
                        // 일치하지 않는 문자열이 있는경우 여기에 도달한다.
                        return rst;
                    }
                }catch(Exception e) {
                    // out of bound
                    // 예를 들어, ab, a 가 있으면,
                    // (0,0) 은 a, (0,1) 은 b, (1,0) 은 a, (1, 1) 은 접근시 out of bound 가 발생한다.
                    // (1, 1) 에 접근하는 경우 더 이상 중복 문자를 탐색할 필요가 없으므로 종료한다.
                    return rst;
                }
            }
            rst += strings[0][i];
        }
        // 모든 문자열이 동일한 경우 여기에 도달한다.
        return rst;
    }
}