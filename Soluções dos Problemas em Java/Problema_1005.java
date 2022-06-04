import java.io.IOException;
import java.util.Scanner;

public class Problema_1005 {
 
    public static void main(String[] args) throws IOException {
		double A,B,MEDIA;
		Scanner leitor = new Scanner(System.in);
		//3.5 e a nota B tem peso 7.5 
		A = leitor.nextDouble();
		B = leitor.nextDouble();
		
		MEDIA = (3.5*A+7.5*B)/11;
        System.out.printf(String.format("MEDIA = %.5f",MEDIA));		
		
    }
 
}