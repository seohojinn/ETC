
class Student{
	
	String name;
	int grade;
	
	Student(String name, int grade){
		this.name = name;
		this.grade = grade;
	}
	
	void floor() {
		if(this.grade == 3) {
			System.out.println("grade���� " + this.grade + "�̸� 3�г��� 4���Դϴ�.");
		}
		else if(this.grade == 2) {
			System.out.println("grade���� " + this.grade + "�̸� 2�г��� 5���Դϴ�.");
		}
		else if(this.grade == 1) {
			System.out.println("grade���� " + this.grade + "�̸� 1�г��� 6���Դϴ�.");
		}
	}
	
}

public class ClassExam {
	public static void main(String [] args) {
		Student kim = new Student("������",3);
		Student lee = new Student("�̹ο�",2);
		
		System.out.println("�л��� �̸��� " + kim.name + " �̰�, " + kim.grade + " �г��Դϴ�.");
		System.out.println("�л��� �̸��� " + lee.name + " �̰�, " + lee.grade + " �г��Դϴ�.");
		
		lee.floor();
		kim.floor();
	}
}
