import java.util.Scanner;
import java.lang.Math;

public class LE2 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt(), b = scan.nextInt(), c = scan.nextInt();
        int h = Math.max(a, Math.max(b, c));
        int total = a*a + b*b + c*c;
        System.out.print(total/(h*h) == 2 ? "RIGHT" : "NOT RIGHT");
    }
}