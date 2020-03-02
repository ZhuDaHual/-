#include "student.h"

void show_chinese()
{
	cout << "\t\t\t\t学号";
	cout << "\t\t姓名";
	cout << "\t\t语文成绩";
	cout << "\t\t排名" << endl;

}

void show_math()
{
	cout << "\t\t\t\t学号";
	cout << "\t\t姓名";
	cout << "\t\t数学成绩";
	cout << "\t\t排名" << endl;
}

void show_english()
{
	cout << "\t\t\t\t学号";
	cout << "\t\t姓名";
	cout << "\t\t英语成绩";
	cout << "\t\t排名" << endl;
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
	cout << "  所属院系:\t";
	cout << "  专业名称:\t";
	cout << "  班级人数:";
	cout << "\t 英语平均分:";
	cout << "\t 数学平均分:";
	cout << "\t 语文平均分:";
	cout << "\t 总分平均分:" << endl;
	cout << endl;
	cout << "";
	cout << "物联网工程学院  ";
	cout << "计算机科学与技术  ";
	cout << "   " << get_student_num(l);
	cout << "\t\t     " << average_english_score(l) << "\t";
	cout << "\t     " << average_math_score(l);
	cout << "\t\t     " << average_chinese_score(l);
	cout << "\t\t     " << average_score(l) << endl;
	cout << endl;

}
int get_student_num(student* l)  //获取学生人数
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
	cout << "\t\t\t\t************************主菜单***********************" << endl;
	cout << endl;
	cout << "\t\t\t\t***************欢迎使用学生成绩管理系统**************" << endl;
	cout << "\t\t\t\t*****\t         按数字0退出管理系统            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字1打印班级信息            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字2删除学生信息            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字3添加学生信息            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字4查询学生信息            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字5查看学生排名            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字6修改学生信息            *****" << endl;
	cout << "\t\t\t\t*****\t         按数字7清理屏幕信息            *****" << endl;
	cout << "\t\t\t\t*****************************************************" << endl;
	cout << endl;
	cout << "\t\t\t\t**********请输入你的数字  ";

}

void modify_ui()
{
	cout << "\t\t\t\t***************************************" << endl;
	cout << "\t\t\t\t***\t  按数字0返回主菜单         ***" << endl;
	cout << "\t\t\t\t***\t  按数字1修改学生学号       ***" << endl;
	cout << "\t\t\t\t***\t  按数字2修改学生姓名       ***" << endl;
	cout << "\t\t\t\t***\t  按数字3修改学生性别       ***" << endl;
	cout << "\t\t\t\t***\t  按数字4修改学生地址       ***" << endl;
	cout << "\t\t\t\t***\t  按数字5修改数学成绩       ***" << endl;
	cout << "\t\t\t\t***\t  按数字6修改英语成绩       ***" << endl;
	cout << "\t\t\t\t***\t  按数字7修改语文成绩       ***" << endl;
	cout << "\t\t\t\t***************************************" << endl;
	cout << endl;

}

void show_1()
{
	cout << "\t姓名: ";
	cout << "\t 学号:";
	cout << "\t 性别:";
	cout << "\t  地址:";
	cout << "\t  \t 英语成绩:";
	cout << "\t数学成绩:";
	cout << "\t 语文成绩:";
	cout << "\t 总成绩:";
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
