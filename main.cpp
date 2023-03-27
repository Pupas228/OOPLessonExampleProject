#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	string name;
	string surname;
	int age;
	float avg_mark;

	Student() {
		name = "no name";
		surname = "no surname";
		age = 0;
		avg_mark = 0;
	}

	void init(string n, string sname, int a, float mark) {
		name = "no name";
		surname = "no surname";
		age = 16;
		avg_mark = 4;
	}

	string convert_to_string() {
		return name + " " + surname + " (age = " + to_string(age)
			+ ", average mark = " + to_string(avg_mark) +")";
	}
};

void clean_student(Student st) {
	st.name = "no name";
	st.surname = "no surname";
	st.age = 0;
	st.avg_mark = 0;
}

Student get_best_student(Student st1, Student st2, Student st3) {
	return st1.avg_mark > st2.avg_mark && st1.avg_mark > st3.avg_mark ? st1 
		: (st2.avg_mark > st3.avg_mark ? st2 : st3);
}

int main() {
	Student st1, st2, st3;
	
	cout << st1.convert_to_string() << endl;
	cout << st2.convert_to_string() << endl;
	cout << st3.convert_to_string() << endl;
	//st1.init("Ivan", "Ivanov", 14, 10);
	//st2.init("Genrih", "Gurshtinovich", 14, 9);
	//st3.init("Tigran", "Sarkesya", 14, 4);

	////cout << st1.convert_to_string() << endl;
	////cout << st2.convert_to_string() << endl;
	////cout << st3.convert_to_string() << endl;

	//Student st = get_best_student(st1, st2, st3);
	//cout << "Best student: " << st.convert_to_string() << endl;


	///*Student st2 = st1;

	//st1.avg_mark = 9;*/

	////cout << "BEFORE fucntion calling:" << endl;

	////cout << st1.name << " " << st1.surname << " (age = " 
	////	<< st1.age << ", average mark = " << st1.avg_mark << ")" << endl;

	////clean_student(st1);

	////cout << "AFTER fucntion calling:" << endl;

	////cout << st1.name << " " << st1.surname << " (age = "
	////	<< st1.age << ", average mark = " << st1.avg_mark << ")" << endl;

	///*cout << st2.name << " " << st2.surname << " (age = "
	//	<< st2.age << ", average mark = " << st2.avg_mark << ")" << endl;*/

	return 0;
}