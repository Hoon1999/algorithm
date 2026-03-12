import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int h = sc.nextInt(); 
        int m = sc.nextInt(); 
        int time = sc.nextInt(); 
        
        int temp = m + time; 
        int carry = temp / 60; 
        m = temp % 60; 
        h = h + carry;
        
        if (h >= 24) {
            h = h - 24;
        }
        
        System.out.println(h + " " + m);
    }
}