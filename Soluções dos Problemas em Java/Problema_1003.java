import java.io.IOException;
import java.util.Scanner;

public class Main {
	
	public static void main(String[] args) throws IOException {
		int A,B,SOMA;
		Scanner scan = new Scanner(System.in);
		
		A = scan.nextInt();
		B = scan.nextInt();
		
		SOMA = A + B;
		
		System.out.printf(String.format("SOMA = %d\n",SOMA));
		
	}
	
}