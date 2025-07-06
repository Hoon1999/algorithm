class Solution {
    public int strStr(String haystack, String needle) {
        
        for(int i = 0; i < haystack.length(); i++) {
            // if : 만약 needle 의 첫 문자가 haystack[i] 와 같다면,
            // haystack[i], haystack[i+1], ... 을 needle과 비교해서 같은 문자열인지 검사한다.
            if(haystack.charAt(i) == needle.charAt(0)) {
                // flag 가 1이면 needle 을 찾은것이다.
                // 찾지 못하면 flag 가 0으로 바뀐다.
                int flag = 1;
                for(int j = 0 ; j < needle.length(); j++) {
                    try {
                        if(haystack.charAt(i+j) != needle.charAt(j)) {
                            flag = 0;
                            break;
                        }
                    } catch(StringIndexOutOfBoundsException e) {
                        return -1;
                    }
                }
                if(flag == 1)
                    return i;
            }
        }
        return -1;
    }
}