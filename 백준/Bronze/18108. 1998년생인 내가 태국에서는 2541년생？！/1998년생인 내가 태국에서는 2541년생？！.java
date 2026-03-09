import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        int gap = 2541 - 1998;
        int year;
        Scanner sc = new Scanner(System.in);
        
        year = sc.nextInt();
        
        System.out.println(year - gap);
    }
}