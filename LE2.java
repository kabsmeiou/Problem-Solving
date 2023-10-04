import java.util.Scanner;
import java.lang.Math;

public class LE2 {
    public static void main(String args[]){
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter three sides of a triangle: ");
        int a = scan.nextInt(), b = scan.nextInt(), c = scan.nextInt();
        int h = Math.max(a, Math.max(b, c)); //get maxa among the three
        int total = a*a + b*b + c*c; //accumulate a^2 b^2 and c^2
        System.out.print(total/(h*h) == 2 ? "RIGHT" : "NOT RIGHT"); //result should be (c^2)*2
    }
}