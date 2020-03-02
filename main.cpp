#include"student.h"
int main()
{
	/*menu();*/
	student* l;
	student p_student[10] = {
		{"10081","��Ԫ��","��" ,"����ʡ������",96,92,93},
		{"10082","��ѫ","��" ,"����ʡ��ɳ��",79,74,68},
		{"10083","������","��"  ,"�Ϻ���",88,79,81},
		{"10084","�¾���","��","����ʡ������",72,82,54},
		{"10085","���","Ů","����ʡ�人��",54,64,45},
		{"10086","��֥��","Ů" ,"������",92,88,90},
		{"10087","����","Ů" ,"������",71,74,67},
		{"10088","ʯӢ�","��"  ,"�Ϻ���",88,72,81},
		{"10089","���ͥ","Ů","����ʡ�Ͼ���",71,82,62},
		{"10090","��л�","��","�Ĵ�ʡ�ɶ���",55,64,45}
	};
	create_student_link_list(l, p_student, 10);


	bool flag = true;  //��־��,��flag=trueʱ����ϵͳ,��flag=falseʱ�˳�ϵͳ
	while (flag)  /*��flag=1����ϵͳ����ʹ�ã�flag=0�˳�ϵͳ*/
	{
		cout << endl;
		ui();
		char num;
		cin >> num;
		cout << endl;
		switch (num)
		{
		case '0':   //�˳�ϵͳ
		{
			flag = false;
			cout << endl;
			cout << "\t\t\t\t*******************�����˳�ϵͳ**********************" << endl;
			break;
		}

		case '1':  //��ӡ�༶��Ϣ
		{
			system("cls");
			cout << "\t\t\t\t********************�༶��Ϣ����*********************" << endl;
			cout << endl;
			dis_class_info(l);
			cout << "\t\t\t\t********************ѧ����Ϣ����*********************" << endl;
			cout << endl;
			dis_all_student(l);
			system("pause");
			system("cls");
			break;
		}

		case '2':  //ɾ��ѧ����Ϣ
		{
			char num_case_2;
			cout << "\t\t\t\t******************������1������ɾ��******************" << endl;
			cout << "\t\t\t\t******************������2��ѧ��ɾ��******************" << endl;
			cout << "\t\t\t\t******************�������������  ";
			cin >> num_case_2;
			cout << endl;
			if (num_case_2 == '1')
			{
				string student_name;
				cout << "\t\t\t\t**********������ѧ������:  ";
				cin >> student_name;
				cout << endl;
				cout << "\t\t\t\t********************ѧ����Ϣ����*********************" << endl;
				cout << endl;
				search_student_name(l, student_name);
				delete_student_name(l, student_name);
				system("cls");
			}
			else if (num_case_2 == '2')
			{
				string student_no;
				cout << "\t\t\t\t**********������ѧ��ѧ��:  ";
				cin >> student_no;
				cout << endl;
				cout << "\t\t\t\t********************ѧ����Ϣ����*********************" << endl;
				cout << endl;
				search_student_no(l, student_no);
				delete_student_no(l, student_no);
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t****************���´��ָ���޷�ʶ��*****************" << endl;
				system("pause");
				system("cls");
			}

			break;

		}
		case '3': //���ѧ����Ϣ
		{
			student insert_student_info;
			string insert_name;
			string insert_no;
			string insert_address;
			int insert_chinese_score;
			int insert_math_score;
			int insert_english_score;
			string insert_sex;

			cout << "\t\t\t\t*********���������ѧ��:  ";  //����ѧ��
			cin >> insert_no;
			insert_student_info.no = insert_no;
			cout << endl;
			cout << "\t\t\t\t*********�������������:  ";  //��������
			cin >> insert_name;
			insert_student_info.name = insert_name;
			cout << endl;

			cout << "\t\t\t\t*********����������Ա�:  "; //�����Ա�
			cin >> insert_sex;
			while (insert_sex != "��" && insert_sex != "Ů")
			{
				cout << "\t\t\t\t*********��������Ա���Ч������������:  ";
				cin >> insert_sex;
			}
			insert_student_info.sex = insert_sex;
			cout << endl;

			cout << "\t\t\t\t*********��������ĵ�ַ:  "; //�����ַ
			cin >> insert_address;
			insert_student_info.address = insert_address;
			cout << endl;

			cout << "\t\t\t\t*********�����������ѧ�ɼ�:  ";  //������ѧ�ɼ� ע��:��ѧ�ɼ���0��100֮��
			cin >> insert_math_score;
			while (insert_math_score > 100 || insert_math_score < 0)
			{
				cout << "\t\t\t\t*********���������ѧ�ɼ���Ч������������:  ";
				cin >> insert_math_score;
			}
			insert_student_info.math_score = insert_math_score;
			cout << endl;

			cout << "\t\t\t\t*********������������ĳɼ�:  ";  //�������ĳɼ� ע��:���ĳɼ���0��100֮��
			cin >> insert_chinese_score;
			while (insert_chinese_score > 100 || insert_chinese_score < 0)
			{
				cout << "\t\t\t\t*********����������ĳɼ���Ч������������:  ";
				cin >> insert_chinese_score;
			}
			insert_student_info.chinese_score = insert_chinese_score;
			cout << endl;

			cout << "\t\t\t\t*********���������Ӣ��ɼ�:  ";  //����Ӣ��ɼ� ע��:Ӣ��ɼ���0��100֮��
			cin >> insert_english_score;
			while (insert_english_score > 100 || insert_english_score < 0)
			{
				cout << "\t\t\t\t*********�������Ӣ��ɼ���Ч������������:  ";
				cin >> insert_english_score;
			}
			insert_student_info.english_score = insert_english_score;
			insert_student(l, insert_student_info);
			cout << endl;
			system("cls");
			break;
		}
		case '4':  //��ѯѧ����Ϣ
		{
			char num_case_4;
			cout << "\t\t\t\t****************������1��������ѯ********************" << endl;
			cout << "\t\t\t\t****************������2��ѧ�Ų�ѯ********************" << endl;
			cout << "\t\t\t\t****************����������ѡ��:  ";
			cin >> num_case_4;
			cout << endl;
			if (num_case_4 == '1')
			{
				string student_name;
				cout << "\t\t\t\t****************�������������:  ";
				cin >> student_name;
				cout << endl;
				search_student_name(l, student_name);
				cout << endl;
				system("pause");
				system("cls");

			}
			else if (num_case_4 == '2')
			{
				string student_no;
				cout << "\t\t\t\t****************���������ѧ��:  ";
				cin >> student_no;
				search_student_no(l, student_no);
				cout << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t***************���´��ָ���޷�ʶ��******************" << endl;
				system("pause");
				system("cls");
			}

			break;
		}

		case '5':  //�鿴ѧ���ɼ�������
		{
			char num_case_5;
			cout << "\t\t\t\t***************������1�鿴��ѧ����*******************" << endl;
			cout << "\t\t\t\t***************������2�鿴��������*******************" << endl;
			cout << "\t\t\t\t***************������3�鿴Ӣ������*******************" << endl;
			cout << "\t\t\t\t***************����������ѡ��:  ";
			cin >> num_case_5;
			cout << endl;

			if (num_case_5 == '1')
			{
				dis_student_math_score(l);
				system("pause");
				system("cls");
			}
			else if (num_case_5 == '2')
			{
				dis_student_chinese_score(l);
				system("pause");
				system("cls");
			}
			else if (num_case_5 == '3')
			{
				dis_student_english_score(l);
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t****************���´��ָ���޷�ʶ��*****************" << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case '6': //�޸�ѧ������Ϣ
		{
			cout << "\t\t\t\t***************������1�������޸�ѧ����Ϣ*************" << endl;
			cout << "\t\t\t\t***************������2��ѧ���޸�ѧ����Ϣ*************" << endl;
			cout << "\t\t\t\t***************����������ѡ��:  ";
			char i;
			cin >> i;
			if (i == '1')
			{
				modify_student_info_with_name(l);  //�������޸�ѧ����Ϣ
			}
			else if (i == '2')
			{
				modify_student_info_with_no(l);    //��ѧ���޸�ѧ����Ϣ
			}
			else
			{
				cout << "\t\t\t\t****************���´��ָ���޷�ʶ��*****************" << endl;
				system("pause");
				system("cls");
			}
			/*system("pause");*/
			break;

		}
		case'7':  //������Ļ
		{
			system("cls");
			break;
		}
		default:
		{
			cout << "\t\t\t\t****************���´��ָ���޷�ʶ��*****************" << endl;
			system("pause");
			system("cls");
		}

		}
	}

	return 0;
}