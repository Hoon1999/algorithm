class Solution {
    public int solution(String[] spell, String[] dic) {
        /*
        * dic 에서 문자열을 꺼냄
        * 꺼낸 문자열과 spell을 매칭해야 하는데 spell의 원소가 단 한번씩만 사용된다고 하니 spell을 기준으로 반복문 작성
        */
        String word = "";
        int answer = 2;
        
        for(int i = 0 ; i < dic.length; ++i) {
            word = dic[i];
            if(spell.length != word.length())
                continue;
            for(int j = 0; j < spell.length; ++j) {
                if(word.contains(spell[j]))
                    ;
                else
                    break;
                if(j == spell.length -1)
                    answer = 1;
            }
            if (answer == 1 )
                return answer;
        }
        return answer;
    }
}