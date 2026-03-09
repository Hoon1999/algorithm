import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b;
        int x,y,z;
        Scanner sc = new Scanner(System.in);
        
        a = sc.nextInt();
        b = sc.nextInt();
        
        x = b % 10;
        y = (b % 100) / 10;
        z = (b % 1000) / 100;
        
        System.out.println(a * x);
        System.out.println(a * y);
        System.out.println(a * z);
        System.out.println(a * b);
    }
}