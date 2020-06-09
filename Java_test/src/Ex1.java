import java.util.Scanner;

public class Ex1 {
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int arr[] = new int[5];
		int max = 0, j = 0;
		
		for(j=0;j<arr.length;j++) {
			arr[j] = sc.nextInt();
		}
		System.out.println(j);
		
	}
}
