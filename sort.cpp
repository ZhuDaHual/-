#include "student.h"
void student_chinese_score_sort(student* l) //对学生的数学成绩进行排序
{
	int temp_chinese_score;
	string temp_name;
	string temp_no;
	string temp_adress;
	string temp_sex;
	int temp_english_socre;
	int temp_math_score;

	student* p = l, * q = nullptr;
	for (p = l->next; p != nullptr; p = p->next)
		for (q = p->next; q != nullptr; q = q->next)
		{
			if (p->chinese_score < q->chinese_score)
			{
				temp_chinese_score = p->chinese_score;
				p->chinese_score = q->chinese_score;
				q->chinese_score = temp_chinese_score;
				temp_name = p->name;
				p->name = q->name;
				q->name = temp_name;
				temp_no = p->no;
				p->no = q->no;
				q->no = temp_no;
				temp_adress = p->address;
				p->address = q->address;
				q->address = temp_adress;
				temp_english_socre = p->english_score;
				p->english_score = q->english_score;
				q->english_score = temp_english_socre;
				temp_math_score = p->math_score;
				p->math_score = q->math_score;
				q->math_score = temp_math_score;
				temp_sex = p->sex;
				p->sex = q->sex;
				q->sex = temp_sex;

			}
		}
}

void student_math_score_sort(student* l) //对学生的数学成绩进行排序
{
	int temp_chinese_score;
	string temp_name;
	string temp_no;
	string temp_adress;
	string temp_sex;
	int temp_english_socre;
	int temp_math_score;

	student* p = l, * q = nullptr;
	for (p = l->next; p != nullptr; p = p->next)
		for (q = p->next; q != nullptr; q = q->next)
		{
			if (p->math_score < q->math_score)
			{
				temp_chinese_score = p->chinese_score;
				p->chinese_score = q->chinese_score;
				q->chinese_score = temp_chinese_score;
				temp_name = p->name;
				p->name = q->name;
				q->name = temp_name;
				temp_no = p->no;
				p->no = q->no;
				q->no = temp_no;
				temp_adress = p->address;
				p->address = q->address;
				q->address = temp_adress;
				temp_english_socre = p->english_score;
				p->english_score = q->english_score;
				q->english_score = temp_english_socre;
				temp_math_score = p->math_score;
				p->math_score = q->math_score;
				q->math_score = temp_math_score;
				temp_sex = p->sex;
				p->sex = q->sex;
				q->sex = temp_sex;

			}
		}
}
void student_english_score_sort(student* l) //对学生的数学成绩进行排序
{
	int temp_chinese_score;
	string temp_name;
	string temp_no;
	string temp_adress;
	string temp_sex;
	int temp_english_socre;
	int temp_math_score;

	student* p = l, * q = nullptr;
	for (p = l->next; p != nullptr; p = p->next)
		for (q = p->next; q != nullptr; q = q->next)
		{
			if (p->english_score < q->english_score)
			{
				temp_chinese_score = p->chinese_score;
				p->chinese_score = q->chinese_score;
				q->chinese_score = temp_chinese_score;
				temp_name = p->name;
				p->name = q->name;
				q->name = temp_name;
				temp_no = p->no;
				p->no = q->no;
				q->no = temp_no;
				temp_adress = p->address;
				p->address = q->address;
				q->address = temp_adress;
				temp_english_socre = p->english_score;
				p->english_score = q->english_score;
				q->english_score = temp_english_socre;
				temp_math_score = p->math_score;
				p->math_score = q->math_score;
				q->math_score = temp_math_score;
				temp_sex = p->sex;
				p->sex = q->sex;
				q->sex = temp_sex;

			}

		}
}

