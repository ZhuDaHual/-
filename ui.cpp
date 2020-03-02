#include "student.h"

void show_chinese()
{
	cout << "\t\t\t\tѧ��";
	cout << "\t\t����";
	cout << "\t\t���ĳɼ�";
	cout << "\t\t����" << endl;

}

void show_math()
{
	cout << "\t\t\t\tѧ��";
	cout << "\t\t����";
	cout << "\t\t��ѧ�ɼ�";
	cout << "\t\t����" << endl;
}

void show_english()
{
	cout << "\t\t\t\tѧ��";
	cout << "\t\t����";
	cout << "\t\tӢ��ɼ�";
	cout << "\t\t����" << endl;
}

void dis_student_chinese_score(student* l)
{
	student* p = l->next;
	show_chinese();
	student_chinese_score_sort(l);
	int i = 0;

	while (p != nullptr)
	{
		i++;
		cout << setiosflags(ios_base::left);
		cout << "\t\t\t\t" << p->no;
		cout << "\t\t" << p->name;
		cout << "\t\t   " << p->chinese_score;
		cout << "\t\t\t " << i << endl;
		p = p->next;
	}

}

void dis_student_math_score(student* l)
{
	student* p = l->next;
	show_math();
	student_math_score_sort(l);
	int i = 0;

	while (p != nullptr)
	{
		i++;
		cout << setiosflags(ios_base::left);
		cout << "\t\t\t\t" << p->no;
		cout << "\t\t" << p->name;
		cout << "\t\t   " << p->math_score;
		cout << "\t\t\t " << i << endl;
		p = p->next;
	}
}

void dis_student_english_score(student* l)
{
	student* p = l->next;
	show_english();
	student_english_score_sort(l);
	int i = 0;

	while (p != nullptr)
	{
		i++;
		cout << setiosflags(ios_base::left);
		cout << "\t\t\t\t" << p->no;
		cout << "\t\t" << p->name;
		cout << "\t\t   " << p->english_score;
		cout << "\t\t\t " << i << endl;
		p = p->next;
	}
}

void dis_class_info(student* l)
{
	cout << "  ����Ժϵ:\t";
	cout << "  רҵ����:\t";
	cout << "  �༶����:";
	cout << "\t Ӣ��ƽ����:";
	cout << "\t ��ѧƽ����:";
	cout << "\t ����ƽ����:";
	cout << "\t �ܷ�ƽ����:" << endl;
	cout << endl;
	cout << "";
	cout << "����������ѧԺ  ";
	cout << "�������ѧ�뼼��  ";
	cout << "   " << get_student_num(l);
	cout << "\t\t     " << average_english_score(l) << "\t";
	cout << "\t     " << average_math_score(l);
	cout << "\t\t     " << average_chinese_score(l);
	cout << "\t\t     " << average_score(l) << endl;
	cout << endl;

}
int get_student_num(student* l)  //��ȡѧ������
{
	int i = 0;
	while (l->next != nullptr)
	{

		l = l->next;
		i++;
	}
	return i;
}

void ui()
{
	cout << "\t\t\t\t************************���˵�***********************" << endl;
	cout << endl;
	cout << "\t\t\t\t***************��ӭʹ��ѧ���ɼ�����ϵͳ**************" << endl;
	cout << "\t\t\t\t*****\t         ������0�˳�����ϵͳ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������1��ӡ�༶��Ϣ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������2ɾ��ѧ����Ϣ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������3���ѧ����Ϣ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������4��ѯѧ����Ϣ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������5�鿴ѧ������            *****" << endl;
	cout << "\t\t\t\t*****\t         ������6�޸�ѧ����Ϣ            *****" << endl;
	cout << "\t\t\t\t*****\t         ������7������Ļ��Ϣ            *****" << endl;
	cout << "\t\t\t\t*****************************************************" << endl;
	cout << endl;
	cout << "\t\t\t\t**********�������������  ";

}

void modify_ui()
{
	cout << "\t\t\t\t***************************************" << endl;
	cout << "\t\t\t\t***\t  ������0�������˵�         ***" << endl;
	cout << "\t\t\t\t***\t  ������1�޸�ѧ��ѧ��       ***" << endl;
	cout << "\t\t\t\t***\t  ������2�޸�ѧ������       ***" << endl;
	cout << "\t\t\t\t***\t  ������3�޸�ѧ���Ա�       ***" << endl;
	cout << "\t\t\t\t***\t  ������4�޸�ѧ����ַ       ***" << endl;
	cout << "\t\t\t\t***\t  ������5�޸���ѧ�ɼ�       ***" << endl;
	cout << "\t\t\t\t***\t  ������6�޸�Ӣ��ɼ�       ***" << endl;
	cout << "\t\t\t\t***\t  ������7�޸����ĳɼ�       ***" << endl;
	cout << "\t\t\t\t***************************************" << endl;
	cout << endl;

}

void show_1()
{
	cout << "\t����: ";
	cout << "\t ѧ��:";
	cout << "\t �Ա�:";
	cout << "\t  ��ַ:";
	cout << "\t  \t Ӣ��ɼ�:";
	cout << "\t��ѧ�ɼ�:";
	cout << "\t ���ĳɼ�:";
	cout << "\t �ܳɼ�:";
	cout << endl;
}

void show_2(student* l)
{
	student* p = l->next;
	while (p != nullptr)
	{
		cout << "\t";
		cout << setiosflags(ios_base::left) << setw(9) << p->name
			<< setw(9) << p->no; cout.fill();
		cout << setw(6) << p->sex;
		cout << setw(20) << p->address;
		cout << setw(15) << p->english_score; cout.fill();
		cout << setw(17) << p->math_score; cout.fill();
		cout << setw(15) << p->chinese_score; cout.fill();
		cout << p->chinese_score + p->english_score + p->math_score;
		p = p->next;
		cout << endl;
	}

}
void dis_all_student(student* l)
{
	show_1();
	show_2(l);
}
