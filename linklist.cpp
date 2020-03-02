#include"student.h"
void create_student_link_list(student*& l, student stu[], int n)  //����ѧ����
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
void init_student_link_list(student*& l)  //��ʼ��ѧ����
{
	l = new student;
	l->next = nullptr;
}
void insert_student(student*& l, student stu) //����ѧ����Ϣ
{
	student* s;
	s = new student;
	if (l->next == nullptr)  //lΪͷ�ڵ㣬�ж�l�Ƿ�Ϊ���������Ϊ�գ�s��Ϊl->next;
	{

		s->no = stu.no;
		s->name = stu.name;
		s->math_score = stu.math_score;
		s->english_score = stu.english_score;
		s->chinese_score = stu.chinese_score;
		l->next = s;
		cout << endl;
		cout << "\t\t\t\t*********************����ѧ����Ϣ�ɹ�*****************" << endl;
		system("pause");

	}
	else  //l��Ϊ����������ͷ�巨����s����l����һ���ڵ�
	{
		s->no = stu.no;
		s->name = stu.name;
		s->math_score = stu.math_score;
		s->english_score = stu.english_score;
		s->chinese_score = stu.chinese_score;
		s->next = l->next;
		l->next = s;
		cout << endl;
		cout << "\t\t\t\t********************����ѧ����Ϣ�ɹ�*****************" << endl;
		system("pause");
	}
}

void delete_student_name(student*& l, string student_name)
{
	student* s = l, * p = nullptr;
	if (l == nullptr)
	{
		cout << "\t\t\t\t\t\t*********************ѧ��������Ϣ******************" << endl;
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
			cout << "\t\t\t\t\t\t********************�ɹ�ɾ��ѧ����Ϣ*****************" << endl;
			/*system("pause");*/
		}

		else
		{
			p->next = s->next;
			cout << "\t\t\t\t\t\t********************�ɹ�ɾ��ѧ����Ϣ*****************" << endl;
			/*system("pause");*/
		}

	}
	else
	{
		/*cout << "\t\t\t\t\t\t****************ѧ����Ϣ������***************" << endl;*/
		/*system("pause");*/
	}

}
bool delete_student_no(student*& l, string student_no)
{
	student* s = l, * p = nullptr;
	if (l == nullptr)
	{
		cout << "\t\t\t\t\t\t***************ѧ����������******************" << endl;
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
			cout << "\t\t\t\t\t\t********************�ɹ�ɾ��ѧ����Ϣ*****************" << endl;
			/*system("pause");*/
		}

		else
		{
			p->next = s->next;
			cout << "\t\t\t\t\t\t********************�ɹ�ɾ��ѧ����Ϣ*****************" << endl;
			/*system("pause");*/
		}

	}
	else
	{
		/*cout << "\t\t\t\t\t\t***************ѧ����Ϣ������****************" << endl;*/
		/*system("pause");*/
	}

	return true;
}


void modify_student_info_with_name(student* l)  //�������޸�ѧ����Ϣ
{
	string student_name;
	cout << "\t\t\t\t***************������ѧ������:  ";
	cin >> student_name;
	cout << endl;
	cout << endl;
	system("cls");
	cout << endl;
	cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
	cout << endl;
	bool boolean = search_student_name(l, student_name);
	/*booleanΪ�棬˵��ѧ�����ڣ���������˵�
	 * booleanΪ�٣�ѧ�������ڣ��������˵�
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
			cout << "\t\t\t\t**********�������������:  ";
			cin >> i;
			switch (i)
			{
			case '0':
			{
				flag = false;
				system("cls");
				cout << "\t\t\t\t\t*************���ѷ������˵�*************" << endl;
				system("pause");
				break;
			}
			case '1':
			{
				modify_no_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);

				break;
			}
			case '2':
			{
				student_name = modify_name_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case '3':
			{
				modify_sex_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'4':
			{
				modify_address_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case '5':
			{
				modify_math_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'6':
			{
				modify_english_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			case'7':
			{
				modify_chinese_score_with_name(l, student_name);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_name(l, student_name);
				break;
			}
			default:
			{
				cout << "\t\t\t\t************���´��ָ���޷�ʶ��*************" << endl;
				system("pause");
			}
			}
		}
	}




}

void modify_student_info_with_no(student* l)  //��ѧ���޸�ѧ����Ϣ
{
	string student_no;
	cout << "\t\t\t\t***************������ѧ��ѧ��:  ";
	cin >> student_no;
	cout << endl;
	cout << endl;
	system("cls");
	cout << endl;
	cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
	bool boolean = search_student_no(l, student_no);
	/*booleanΪ�棬˵��ѧ�����ڣ���������˵�
	 * booleanΪ�٣�ѧ�������ڣ��������˵�
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
			cout << "\t\t\t\t***************�������������:  ";
			cin >> i;
			switch (i)
			{
			case '0':
			{
				flag = false;
				system("cls");
				cout << "\t\t\t\t*************���ѷ������˵�*************" << endl;
				system("pause");
				break;
			}
			case '1':
			{
				student_no = modify_no_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '2':
			{
				modify_name_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '3':
			{
				modify_sex_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'4':
			{
				modify_address_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case '5':
			{
				modify_math_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'6':
			{
				modify_english_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			case'7':
			{
				modify_chinese_score_with_no(l, student_no);
				system("pause");
				system("cls");
				cout << "\t��ѧ����ǰ��ϢΪ: \n  ";
				search_student_no(l, student_no);
				break;
			}
			default:
			{
				cout << "\t\t\t\t************���´��ָ���޷�ʶ��*************" << endl;
				system("pause");
			}
			}
		}
	}


}
