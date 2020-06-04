import java.util.Scanner;

public class Test2 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[5];
		int max = 0, idx = 0;
		
		for(int i=0;i<5;i++) {
			System.out.println(i+1 + "번째 입력 : ");
			arr[i] = sc.nextInt();
			if(arr[i] > max) {
				max = arr[i];
				idx = i + 1;
			}
		}
		
		System.out.println("가장 큰 수는 " + idx + "번째 숫자인 " + max);
		sc.close();
	}

}
