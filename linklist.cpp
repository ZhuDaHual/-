#include"student.h"
void create_student_link_list(student*& l, student stu[], int n)  //创建学生表
{
	student* s;
	l = new student;
	l->next = nullptr;
	for (int i = 0; i < n; i++)
	{
		s = new student;
		s->no = stu[i].no;
		s->name = stu[i].name;
		s->sex = stu[i].sex;
		s->address = stu[i].address;
		s->chinese_score = stu[i].chinese_score;
		s->english_score = stu[i].english_score;
		s->math_score = stu[i].math_score;
		s->next = l->next;
		l->next = s;
	}
}
void init_student_link_list(student*& l)  //初始化学生表
{
	l = new student;
	l->next = nullptr;
}
void insert_student(student*& l, student stu) //插入学生信息
{
	student* s;
	s = new student;
	if (l->next == nullptr)  //l为头节点，判断l是否为空链表，如果为空，s则为l->next;
	{

		s->no = stu.no;
		s->name = stu.name;
		s->math_score = stu.math_score;
		s->english_score = stu.english_score;
		s->chinese_score = stu.chinese_score;
		l->next = s;
		cout << endl;
		cout << "\t\t\t\t*********************插入学生信息成功*****************" << endl;
		system("pause");

	}
	else  //l不为空链表，利用头插法，将s插在l的下一个节点
	{
		s->no = stu.no;
		s->name = stu.name;
		s->math_score = stu.math_score;
		s->english_score = stu.english_score;
		s->chinese_score = stu.chinese_score;
		s->next = l->next;
		l->next = s;
		cout << endl;
		cout << "\t\t\t\t********************插入学生信息成功*****************" << endl;
		system("pause");
	}
}

void delete_student_name(student*& l, string student_name)
{
	student* s = l, * p = nullptr;
	if (l == nullptr)
	{
		cout << "\t\t\t\t\t\t*********************学生表无信息******************" << endl;
		/*system("pause");*/
		return;
	}
	while (s->name != student_name && s->next != nullptr)
	{
		p = s;
		s = s->next;
	}
	if (s->name == student_name)
	{
		if (s == l)
		{
			l = s->next;
			cout << "\t\t\t\t\t\t********************成功删除学生信息*****************" << endl;
			/*system("pause");*/
		}

		else
		{
			p->next = s->next;
			cout << "\t\t\t\t\t\t********************成功删除学生信息*****************" << endl;
			/*system("pause");*/
		}

	}
	else
	{
		/*cout << "\t\t\t\t\t\t****************学生信息不存在***************" << endl;*/
		/*system("pause");*/
	}

}
bool delete_student_no(student*& l, string student_no)
{
	student* s = l, * p = nullptr;
	if (l == nullptr)
	{
		cout << "\t\t\t\t\t\t***************学生表无内容******************" << endl;
		/*system("pause");*/
		return false;
	}
	while (s->no != student_no && s->next != nullptr)
	{
		p = s;
		s = s->next;
	}
	if (s->no == student_no)
	{
		if (s == l)
		{
			l = s->next;
			cout << "\t\t\t\t\t\t********************成功删除学生信息*****************" << endl;
			/*system("pause");*/
		}

		else
		{
			p->next = s->next;
			cout << "\t\t\t\t\t\t********************成功删除学生信息*****************" << endl;
			/*system("pause");*/
		}

	}
	else
	{
		/*cout << "\t\t\t\t\t\t***************学生信息不存在****************" << endl;*/
		/*system("pause");*/
	}

	return true;
}


void modify_student_info_with_name(student* l)  //按名字修改学生信息
{
	string student_name;
	cout << "\t\t\t\t***************请输入学生姓名:  ";
	cin >> student_name;
	cout << endl;
	cout << endl;
	system("cls");
	cout << endl;
	cout << "\t该学生当前信息为: \n  ";
	cout << endl;
	bool boolean = search_student_name(l, student_name);
	/*boolean为真，说明学生存在，进入二级菜单
	 * boolean为假，学生不存在，返回主菜单
	 */
	cout << endl;
	if (boolean == true)
	{
		bool flag = true;
		while (flag)
		{
			cout << endl;
			modify_ui();
			char i;
			cout << "\t\t\t\t**********请输入你的数字:  ";
			cin >> i;
			switch (i)
			{
			case '0':
			{
				flag = false;
				system("cls");
				cout << "\t\t\t\t\t*************您已返回主菜单*************" << endl;
				system("pause");
				break;
			}
			case '1':
			{
				modify_no_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);

				break;
			}
			case '2':
			{
				student_name = modify_name_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case '3':
			{
				modify_sex_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'4':
			{
				modify_address_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case '5':
			{
				modify_math_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'6':
			{
				modify_english_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'7':
			{
				modify_chinese_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_name(l, student_name);
				break;
			}
			default:
			{
				cout << "\t\t\t\t************您下达的指令无法识别*************" << endl;
				system("pause");
			}
			}
		}
	}




}

void modify_student_info_with_no(student* l)  //按学号修改学生信息
{
	string student_no;
	cout << "\t\t\t\t***************请输入学生学号:  ";
	cin >> student_no;
	cout << endl;
	cout << endl;
	system("cls");
	cout << endl;
	cout << "\t该学生当前信息为: \n  ";
	bool boolean = search_student_no(l, student_no);
	/*boolean为真，说明学生存在，进入二级菜单
	 * boolean为假，学生不存在，返回主菜单
	 */
	cout << endl;
	if (boolean == true)
	{
		bool flag = true;
		while (flag)
		{
			cout << endl;
			modify_ui();
			char i;
			cout << "\t\t\t\t***************请输入你的数字:  ";
			cin >> i;
			switch (i)
			{
			case '0':
			{
				flag = false;
				system("cls");
				cout << "\t\t\t\t*************您已返回主菜单*************" << endl;
				system("pause");
				break;
			}
			case '1':
			{
				student_no = modify_no_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '2':
			{
				modify_name_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '3':
			{
				modify_sex_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'4':
			{
				modify_address_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '5':
			{
				modify_math_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'6':
			{
				modify_english_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'7':
			{
				modify_chinese_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t该学生当前信息为: \n  ";
				search_student_no(l, student_no);
				break;
			}
			default:
			{
				cout << "\t\t\t\t************您下达的指令无法识别*************" << endl;
				system("pause");
			}
			}
		}
	}


}
