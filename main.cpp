#include"student.h"
int main()
{
	/*menu();*/
	student* l;
	student p_student[10] = {
		{"10081","熊元恺","男" ,"江西省赣州市",96,92,93},
		{"10082","康勋","男" ,"湖南省长沙市",79,74,68},
		{"10083","方浦泽","男"  ,"上海市",88,79,81},
		{"10084","郝景焕","男","江苏省无锡市",72,82,54},
		{"10085","戴瑗","女","湖北省武汉市",54,64,45},
		{"10086","刘芝兰","女" ,"重庆市",92,88,90},
		{"10087","朱蓓","女" ,"北京市",71,74,67},
		{"10088","石英睿","男"  ,"上海市",88,72,81},
		{"10089","文娅庭","女","江苏省南京市",71,82,62},
		{"10090","杨承基","男","四川省成都市",55,64,45}
	};
	create_student_link_list(l, p_student, 10);


	bool flag = true;  //标志符,当flag=true时运行系统,当flag=false时退出系统
	while (flag)  /*若flag=1表明系统正在使用，flag=0退出系统*/
	{
		cout << endl;
		ui();
		char num;
		cin >> num;
		cout << endl;
		switch (num)
		{
		case '0':   //退出系统
		{
			flag = false;
			cout << endl;
			cout << "\t\t\t\t*******************您已退出系统**********************" << endl;
			break;
		}

		case '1':  //打印班级信息
		{
			system("cls");
			cout << "\t\t\t\t********************班级信息如下*********************" << endl;
			cout << endl;
			dis_class_info(l);
			cout << "\t\t\t\t********************学生信息如下*********************" << endl;
			cout << endl;
			dis_all_student(l);
			system("pause");
			system("cls");
			break;
		}

		case '2':  //删除学生信息
		{
			char num_case_2;
			cout << "\t\t\t\t******************按数字1按姓名删除******************" << endl;
			cout << "\t\t\t\t******************按数字2按学号删除******************" << endl;
			cout << "\t\t\t\t******************请输入你的数字  ";
			cin >> num_case_2;
			cout << endl;
			if (num_case_2 == '1')
			{
				string student_name;
				cout << "\t\t\t\t**********请输入学生姓名:  ";
				cin >> student_name;
				cout << endl;
				cout << "\t\t\t\t********************学生信息如下*********************" << endl;
				cout << endl;
				search_student_name(l, student_name);
				delete_student_name(l, student_name);
				system("cls");
			}
			else if (num_case_2 == '2')
			{
				string student_no;
				cout << "\t\t\t\t**********请输入学生学号:  ";
				cin >> student_no;
				cout << endl;
				cout << "\t\t\t\t********************学生信息如下*********************" << endl;
				cout << endl;
				search_student_no(l, student_no);
				delete_student_no(l, student_no);
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t****************您下达的指令无法识别*****************" << endl;
				system("pause");
				system("cls");
			}

			break;

		}
		case '3': //添加学生信息
		{
			student insert_student_info;
			string insert_name;
			string insert_no;
			string insert_address;
			int insert_chinese_score;
			int insert_math_score;
			int insert_english_score;
			string insert_sex;

			cout << "\t\t\t\t*********请输入你的学号:  ";  //输入学号
			cin >> insert_no;
			insert_student_info.no = insert_no;
			cout << endl;
			cout << "\t\t\t\t*********请输入你的名字:  ";  //输入姓名
			cin >> insert_name;
			insert_student_info.name = insert_name;
			cout << endl;

			cout << "\t\t\t\t*********请输入你的性别:  "; //输入性别
			cin >> insert_sex;
			while (insert_sex != "男" && insert_sex != "女")
			{
				cout << "\t\t\t\t*********你输入的性别无效，请重新输入:  ";
				cin >> insert_sex;
			}
			insert_student_info.sex = insert_sex;
			cout << endl;

			cout << "\t\t\t\t*********请输入你的地址:  "; //输入地址
			cin >> insert_address;
			insert_student_info.address = insert_address;
			cout << endl;

			cout << "\t\t\t\t*********请输入你的数学成绩:  ";  //输入数学成绩 注意:数学成绩在0到100之间
			cin >> insert_math_score;
			while (insert_math_score > 100 || insert_math_score < 0)
			{
				cout << "\t\t\t\t*********你输入的数学成绩无效，请重新输入:  ";
				cin >> insert_math_score;
			}
			insert_student_info.math_score = insert_math_score;
			cout << endl;

			cout << "\t\t\t\t*********请输入你的语文成绩:  ";  //输入语文成绩 注意:语文成绩在0到100之间
			cin >> insert_chinese_score;
			while (insert_chinese_score > 100 || insert_chinese_score < 0)
			{
				cout << "\t\t\t\t*********你输入的语文成绩无效，请重新输入:  ";
				cin >> insert_chinese_score;
			}
			insert_student_info.chinese_score = insert_chinese_score;
			cout << endl;

			cout << "\t\t\t\t*********请输入你的英语成绩:  ";  //输入英语成绩 注意:英语成绩在0到100之间
			cin >> insert_english_score;
			while (insert_english_score > 100 || insert_english_score < 0)
			{
				cout << "\t\t\t\t*********你输入的英语成绩无效，请重新输入:  ";
				cin >> insert_english_score;
			}
			insert_student_info.english_score = insert_english_score;
			insert_student(l, insert_student_info);
			cout << endl;
			system("cls");
			break;
		}
		case '4':  //查询学生信息
		{
			char num_case_4;
			cout << "\t\t\t\t****************按数字1按姓名查询********************" << endl;
			cout << "\t\t\t\t****************按数字2按学号查询********************" << endl;
			cout << "\t\t\t\t****************请输入您的选项:  ";
			cin >> num_case_4;
			cout << endl;
			if (num_case_4 == '1')
			{
				string student_name;
				cout << "\t\t\t\t****************请输入你的名字:  ";
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
				cout << "\t\t\t\t****************请输入你的学号:  ";
				cin >> student_no;
				search_student_no(l, student_no);
				cout << endl;
				system("pause");
				system("cls");
			}
			else
			{
				cout << "\t\t\t\t***************您下达的指令无法识别******************" << endl;
				system("pause");
				system("cls");
			}

			break;
		}

		case '5':  //查看学生成绩及排名
		{
			char num_case_5;
			cout << "\t\t\t\t***************按数字1查看数学排名*******************" << endl;
			cout << "\t\t\t\t***************按数字2查看语文排名*******************" << endl;
			cout << "\t\t\t\t***************按数字3查看英语排名*******************" << endl;
			cout << "\t\t\t\t***************请输入您的选项:  ";
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
				cout << "\t\t\t\t****************您下达的指令无法识别*****************" << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case '6': //修改学生的信息
		{
			cout << "\t\t\t\t***************按数字1按名字修改学生信息*************" << endl;
			cout << "\t\t\t\t***************按数字2按学号修改学生信息*************" << endl;
			cout << "\t\t\t\t***************请输入您的选项:  ";
			char i;
			cin >> i;
			if (i == '1')
			{
				modify_student_info_with_name(l);  //按名字修改学生信息
			}
			else if (i == '2')
			{
				modify_student_info_with_no(l);    //按学号修改学生信息
			}
			else
			{
				cout << "\t\t\t\t****************您下达的指令无法识别*****************" << endl;
				system("pause");
				system("cls");
			}
			/*system("pause");*/
			break;

		}
		case'7':  //清理屏幕
		{
			system("cls");
			break;
		}
		default:
		{
			cout << "\t\t\t\t****************您下达的指令无法识别*****************" << endl;
			system("pause");
			system("cls");
		}

		}
	}

	return 0;
}