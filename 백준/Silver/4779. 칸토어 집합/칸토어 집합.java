import java.util.Scanner;

public class Main {
    public static StringBuilder rst = new StringBuilder();
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = 0;
        int len = 0;
        while(sc.hasNextInt()){
            rst.setLength(0); // rst 초기화. 문자열로 비유하면 rst = "";
            n = sc.nextInt();
            len =(int)(Math.pow(3, n)/3);
            recursion(n, len);
            System.out.println(rst);
        }
    }
    public static void recursion(int n, int len) {
        if(n == 0) {
            rst.append("-");
            return ;
        }

        recursion(n-1, len/3);
        for(int i = 0; i < len; i++) {
            rst.append(" ");
        }
        recursion(n-1, len/3);
    }

}