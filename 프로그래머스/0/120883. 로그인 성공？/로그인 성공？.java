class Solution {
    public String solution(String[] id_pw, String[][] db) {
        String answer = "fail";
        
        for(int i = 0; i < db.length; i++) {
            // 아이디가 같은 경우
            if(id_pw[0].equals(db[i][0])) {
                // 비밀번호까지 같은 경우
                if(id_pw[1].equals(db[i][1]))
                    answer = "login";
                // 비밀번호는 다른경우
                else
                    answer = "wrong pw";
            }
        }
        return answer;
    }
}