#include "student.h"

bool search_student_name(student* l, string student_name)
{
	student* p = l->next;
	if (l == nullptr)
	{
		cout << "\t\t\t\t********************学生表为空*********************" << endl;
		/*cout << "\t\t\t\t\t\t*************学生表无信息*******************" << endl;*/
		system("pause");
		return false;
	}
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t********************该学生不存在*********************" << endl;
			/*cout << "\t\t\t\t\t\t**************该学生不存在******************" << endl;*/
			system("pause");
			cout << endl;
			return false;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			show_1();
			cout << "\t";
			cout << setiosflags(ios_base::left) << setw(9) << p->name
				<< setw(9) << p->no; cout.fill();
			cout << setw(6) << p->sex;
			cout << setw(20) << p->address;
			cout << setw(15) << p->english_score; cout.fill();
			cout << setw(17) << p->math_score; cout.fill();
			cout << setw(15) << p->chinese_score; cout.fill();
			cout << p->chinese_score + p->english_score + p->math_score;
			return true;
		}

	}
	return false;
}

bool search_student_no(student* l, string student_no)
{
	student* p = l->next;
	if (l == nullptr)
	{
		cout << "\t\t\t\t********************学生表为空*********************" << endl;
		/*cout << "\t\t\t\t\t\t*************学生表无信息*******************" << endl;*/
		system("pause");
		return false;
	}
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t********************该学生不存在*********************" << endl;
			/*cout << "\t\t\t\t\t\t**************该学生不存在******************" << endl;*/
			cout << endl;
			system("pause");
			return false;
		}

	}
	if (p->no == student_no)
	{
		show_1();
		cout << "\t";
		cout << setiosflags(ios_base::left) << setw(9) << p->name
			<< setw(9) << p->no; cout.fill();
		cout << setw(6) << p->sex;
		cout << setw(20) << p->address;
		cout << setw(15) << p->english_score; cout.fill();
		cout << setw(17) << p->math_score; cout.fill();
		cout << setw(15) << p->chinese_score; cout.fill();
		cout << p->chinese_score + p->english_score + p->math_score;
		return true;
	}
	return false;
}