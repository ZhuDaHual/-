#include "student.h"
int get_class_sum_score(student* l)
{
	int chinese_score = get_class_chinese_sum_score(l);
	int math_score = get_class_math_sum_score(l);
	int english_score = get_class_english_sum_score(l);
	int sum = chinese_score + english_score + math_score;
	return sum;
}
int get_class_math_sum_score(student* l)
{
	student* p = l->next;
	int sum = 0;
	int i = 0;
	while (p != nullptr)
	{
		i = p->math_score;
		sum = sum + i;
		p = p->next;
	}
	return sum;
}
int get_class_chinese_sum_score(student* l)
{
	student* p = l->next;
	int sum = 0;
	int i = 0;
	while (p != nullptr)
	{
		i = p->chinese_score;
		sum = sum + i;
		p = p->next;
	}
	return sum;
}

int get_class_english_sum_score(student* l)
{
	student* p = l->next;
	int sum = 0;
	int i = 0;
	while (p != nullptr)
	{
		i = p->english_score;
		sum = sum + i;
		p = p->next;
	}
	return sum;
}

int average_score(student* l)
{
	int total_student = get_student_num(l);
	int total_score = get_class_sum_score(l);
	int average_score = total_score / total_student;
	return average_score;
}

int average_chinese_score(student* l)
{
	int total_student = get_student_num(l);
	int total_chinese_score = get_class_chinese_sum_score(l);
	int average_score = total_chinese_score / total_student;
	return average_score;
}

int average_math_score(student* l)
{
	int total_student = get_student_num(l);
	int total_math_score = get_class_math_sum_score(l);
	int average_score = total_math_score / total_student;

	return average_score;
}

int average_english_score(student* l)
{
	int total_student = get_student_num(l);
	int total_english_score = get_class_english_sum_score(l);
	int average_score = total_english_score / total_student;
	return average_score;
}

