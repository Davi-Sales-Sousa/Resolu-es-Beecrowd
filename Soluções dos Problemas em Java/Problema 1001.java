import java.io.IOException;
import java.util.Scanner;
 
public class Main {
 
    public static void main(String[] args) throws IOException {
        int A=0,B=0,X=0;
        Scanner scan = new Scanner(System.in);
        
        A = scan.nextInt();
        B = scan.nextInt();
        X = A+B;
        System.out.printf("X = "+ X +'\n');
    }
 
}