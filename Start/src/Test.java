import java.util.Scanner;

public class Test {
	
	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);
		
		int TChildNum = 0, TAdultNum = 0, sum = 0, price = 0;
		System.out.printf("아동 수 : ");
		TChildNum = sc.nextInt();
		System.out.printf("성인 수 : ");
		TAdultNum = sc.nextInt();
		
		sum = TChildNum + TAdultNum;
		price = (sum * 8000) - (TChildNum * 2000);
		System.out.println("총수량 :" + sum);
		System.out.println("금액 : " + price);
		
		sc.close();
		
	}
	
}
