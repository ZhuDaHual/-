#include "student.h"

void modify_no_with_name(student* l, string student_name)  //以查找姓名的方式更新学号
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的学号: ";
			string new_no;
			cin >> new_no;
			p->no = new_no;
			cout << endl;
			cout << "\t\t\t\t**************已更新学号***************" << endl;

		}

	}

}

string modify_name_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return {};

		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的姓名: ";
			string new_name;
			cin >> new_name;
			p->name = new_name;
			cout << endl;
			cout << "\t\t\t\t**************已更新姓名***************" << endl;
			return p->name;
		}

	}

	return {};
}

void modify_sex_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的性别: ";
			string new_sex;
			cin >> new_sex;
			while (new_sex != "男" && new_sex != "女")
			{
				cout << "\t\t\t\t你输入的性别信息无效,请重新输入:  ";
				cin >> new_sex;
			}
			p->sex = new_sex;
			cout << endl;
			cout << "\t\t\t\t**************已更新性别***************" << endl;

		}

	}

}
void modify_address_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的地址: ";
			string new_address;
			cin >> new_address;
			p->address = new_address;
			cout << endl;
			cout << "\t\t\t\t**************已更新地址***************" << endl;

		}

	}

}

void modify_chinese_score_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的语文成绩: ";
			int new_chinese_score;
			cin >> new_chinese_score;
			while (new_chinese_score > 100 || new_chinese_score < 0)
			{
				cout << "\t\t\t\t你输入的语文成绩无效,请重新输入:  ";
				cin >> new_chinese_score;
			}
			p->chinese_score = new_chinese_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新语文成绩***********" << endl;

		}

	}

}

void modify_math_score_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的数学成绩: ";
			int new_math_score;
			cin >> new_math_score;
			while (new_math_score > 100 || new_math_score < 0)
			{
				cout << "\t\t\t\t你输入的数学成绩无效,请重新输入:  ";
				cin >> new_math_score;
			}
			p->math_score = new_math_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新数学成绩***********" << endl;

		}

	}

}

void modify_english_score_with_name(student* l, string student_name)//以查找姓名的方式更新姓名
{
	student* p = l->next;
	while (p->name != student_name && p != nullptr)
	{
		p = p->next;
		if (p == nullptr)
		{
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->name == student_name)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的英语成绩: ";
			int new_english_score;
			cin >> new_english_score;
			while (new_english_score > 100 || new_english_score < 0)
			{
				cout << "\t\t\t\t你输入的英语成绩无效,请重新输入:  ";
				cin >> new_english_score;
			}
			p->english_score = new_english_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新英语成绩***********" << endl;

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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的姓名: ";
			string new_name;
			cin >> new_name;
			p->name = new_name;
			cout << endl;
			cout << "\t\t\t\t**************已更新姓名***************" << endl;
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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return{};
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的学号: ";
			string new_no;
			cin >> new_no;
			p->no = new_no;
			cout << endl;
			cout << "\t\t\t\t**************已更新学号***************" << endl;
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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的地址: ";
			string new_address;
			cin >> new_address;
			p->address = new_address;
			cout << endl;
			cout << "\t\t\t\t**************已更新地址***************" << endl;

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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的性别: ";
			string new_sex;
			cin >> new_sex;
			while (new_sex != "男" && new_sex != "女")
			{
				cout << "\t\t\t\t你输入的性别信息无效,请重新输入:  ";
				cin >> new_sex;
			}
			p->sex = new_sex;
			cout << endl;
			cout << "\t\t\t\t**************已更新性别***************" << endl;

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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的语文成绩: ";
			int new_chinese_score;
			cin >> new_chinese_score;
			while (new_chinese_score > 100 || new_chinese_score < 0)
			{
				cout << "\t\t\t\t你输入的语文成绩无效,请重新输入:  ";
				cin >> new_chinese_score;
			}
			p->chinese_score = new_chinese_score;
			p->chinese_score = new_chinese_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新语文成绩***********" << endl;

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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的数学成绩: ";
			int new_math_score;
			cin >> new_math_score;
			while (new_math_score > 100 || new_math_score < 0)
			{
				cout << "\t\t\t\t你输入的数学成绩无效,请重新输入:  ";
				cin >> new_math_score;
			}
			p->math_score = new_math_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新数学成绩***********" << endl;

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
			cout << "\t\t\t\t**************该学生不存在******************" << endl;
			cout << endl;
			return;
		}
	}
	if (p->no == student_no)
	{
		if (p != nullptr)
		{
			cout << "\t\t\t\t**********请输入新的英语成绩: ";
			int new_english_score;
			cin >> new_english_score;
			while (new_english_score > 100 || new_english_score < 0)
			{
				cout << "\t\t\t\t你输入的英语成绩无效,请重新输入:  ";
				cin >> new_english_score;
			}
			p->english_score = new_english_score;
			cout << endl;
			cout << "\t\t\t\t**************已更新英语成绩***********" << endl;
		}

	}
}
