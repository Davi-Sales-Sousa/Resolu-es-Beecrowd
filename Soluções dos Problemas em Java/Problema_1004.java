import java.io.IOException;
import java.util.Scanner;

public class Problema_1004 {
 
    public static void main(String[] args) throws IOException {
        Scanner leitor = new Scanner(System.in);
        int A,B,PROD;
        
        A = leitor.nextInt();
        B = leitor.nextInt();
        
        PROD = A*B;
        
        System.out.printf(String.format("PROD = %d\n",PROD));
 
    }
 
}

