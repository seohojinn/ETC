import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int TChildNum = 0, TAdultNum = 0, sum = 0, price = 0;
		System.out.printf("�Ƶ� �� : ");
		TChildNum = sc.nextInt();
		System.out.printf("���� �� : ");
		TAdultNum = sc.nextInt();
		
		sum = TChildNum + TAdultNum;
		price = (sum * 8000) - (TChildNum * 2000);
		System.out.println("�Ѽ��� :" + sum);
		System.out.println("�ݾ� : " + price);
		
		sc.close();
		
	}
	
}
