import java.util.Scanner;

public class Test2 {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		int[] arr = new int[5];
		int max = 0, idx = 0;
		
		for(int i=0;i<5;i++) {
			System.out.println(i+1 + "��° �Է� : ");
			arr[i] = sc.nextInt();
			if(arr[i] > max) {
				max = arr[i];
				idx = i + 1;
			}
		}
		
		System.out.println("���� ū ���� " + idx + "��° ������ " + max);
		sc.close();
	}

}
