
class Student{
	
	String name;
	int grade;
	
	Student(String name, int grade){
		this.name = name;
		this.grade = grade;
	}
	
	void floor() {
		if(this.grade == 3) {
			System.out.println("grade값이 " + this.grade + "이면 3학년은 4층입니다.");
		}
		else if(this.grade == 2) {
			System.out.println("grade값이 " + this.grade + "이면 2학년은 5층입니다.");
		}
		else if(this.grade == 1) {
			System.out.println("grade값이 " + this.grade + "이면 1학년은 6층입니다.");
		}
	}
	
}

public class ClassExam {
	public static void main(String [] args) {
		Student kim = new Student("김현우",3);
		Student lee = new Student("이민우",2);
		
		System.out.println("학생의 이름은 " + kim.name + " 이고, " + kim.grade + " 학년입니다.");
		System.out.println("학생의 이름은 " + lee.name + " 이고, " + lee.grade + " 학년입니다.");
		
		lee.floor();
		kim.floor();
	}
}
