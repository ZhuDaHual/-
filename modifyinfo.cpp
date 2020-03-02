#include "student.h"

void modify_no_with_name(student* l, string student_name)  //�Բ��������ķ�ʽ����ѧ��
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�ѧ��: ";
			string new_no;
			cin >> new_no;
			p->no = new_no;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ���ѧ��***************" << endl;

		}

	}

}

string modify_name_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return {};

		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�����: ";
			string new_name;
			cin >> new_name;
			p->name = new_name;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ�������***************" << endl;
			return p->name;
		}

	}

	return {};
}

void modify_sex_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ��Ա�: ";
			string new_sex;
			cin >> new_sex;
			while (new_sex != "��" && new_sex != "Ů")
			{
				cout << "\t\t\t\t��������Ա���Ϣ��Ч,����������:  ";
				cin >> new_sex;
			}
			p->sex = new_sex;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ����Ա�***************" << endl;

		}

	}

}
void modify_address_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µĵ�ַ: ";
			string new_address;
			cin >> new_address;
			p->address = new_address;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ��µ�ַ***************" << endl;

		}

	}

}

void modify_chinese_score_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ����ĳɼ�: ";
			int new_chinese_score;
			cin >> new_chinese_score;
			while (new_chinese_score > 100 || new_chinese_score < 0)
			{
				cout << "\t\t\t\t����������ĳɼ���Ч,����������:  ";
				cin >> new_chinese_score;
			}
			p->chinese_score = new_chinese_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ������ĳɼ�***********" << endl;

		}

	}

}

void modify_math_score_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ���ѧ�ɼ�: ";
			int new_math_score;
			cin >> new_math_score;
			while (new_math_score > 100 || new_math_score < 0)
			{
				cout << "\t\t\t\t���������ѧ�ɼ���Ч,����������:  ";
				cin >> new_math_score;
			}
			p->math_score = new_math_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ�����ѧ�ɼ�***********" << endl;

		}

	}

}

void modify_english_score_with_name(student* l, string student_name)//�Բ��������ķ�ʽ��������
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�Ӣ��ɼ�: ";
			int new_english_score;
			cin >> new_english_score;
			while (new_english_score > 100 || new_english_score < 0)
			{
				cout << "\t\t\t\t�������Ӣ��ɼ���Ч,����������:  ";
				cin >> new_english_score;
			}
			p->english_score = new_english_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ���Ӣ��ɼ�***********" << endl;

		}

	}

}

void modify_name_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�����: ";
			string new_name;
			cin >> new_name;
			p->name = new_name;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ�������***************" << endl;
		}

	}
}

string modify_no_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return{};
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�ѧ��: ";
			string new_no;
			cin >> new_no;
			p->no = new_no;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ���ѧ��***************" << endl;
			return p->no;
		}

	}
	return {};
}

void modify_address_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µĵ�ַ: ";
			string new_address;
			cin >> new_address;
			p->address = new_address;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ��µ�ַ***************" << endl;

		}

	}
}

void modify_sex_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ��Ա�: ";
			string new_sex;
			cin >> new_sex;
			while (new_sex != "��" && new_sex != "Ů")
			{
				cout << "\t\t\t\t��������Ա���Ϣ��Ч,����������:  ";
				cin >> new_sex;
			}
			p->sex = new_sex;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ����Ա�***************" << endl;

		}

	}
}

void modify_chinese_score_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ����ĳɼ�: ";
			int new_chinese_score;
			cin >> new_chinese_score;
			while (new_chinese_score > 100 || new_chinese_score < 0)
			{
				cout << "\t\t\t\t����������ĳɼ���Ч,����������:  ";
				cin >> new_chinese_score;
			}
			p->chinese_score = new_chinese_score;
			p->chinese_score = new_chinese_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ������ĳɼ�***********" << endl;

		}

	}
}

void modify_math_score_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ���ѧ�ɼ�: ";
			int new_math_score;
			cin >> new_math_score;
			while (new_math_score > 100 || new_math_score < 0)
			{
				cout << "\t\t\t\t���������ѧ�ɼ���Ч,����������:  ";
				cin >> new_math_score;
			}
			p->math_score = new_math_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ�����ѧ�ɼ�***********" << endl;

		}

	}
}

void modify_english_score_with_no(student* l, string student_no)
{
	student* p = l->next;
	while (p->no != student_no && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************��ѧ��������******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********�������µ�Ӣ��ɼ�: ";
			int new_english_score;
			cin >> new_english_score;
			while (new_english_score > 100 || new_english_score < 0)
			{
				cout << "\t\t\t\t�������Ӣ��ɼ���Ч,����������:  ";
				cin >> new_english_score;
			}
			p->english_score = new_english_score;
			cout << endl;
			cout << "\t\t\t\t**************�Ѹ���Ӣ��ɼ�***********" << endl;
		}

	}
}
