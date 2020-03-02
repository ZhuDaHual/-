#pragma once
#ifndef __STUDENT__H__
#define __STUDENT__H__
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;
/**************************************************************************************///
/*学生信息表结构*/
typedef struct Student																    //
{																					    //
	string no;              //学号													    //
	string name;            //名字													    //
	string sex;             //性别													    //
	string address;         //地址													    //
	int math_score;      //数学成绩 													    //
	int english_score;   //英语成绩														//
	int chinese_score;   //语文成绩														//
	struct Student* next;   //指向下一个student的节点									    //
																						//
}student;																			    //
/**************************************************************************************///


/**************************************************************************************///
/*link_list.cpp文件的函数*/																//
void create_student_link_list(student*& l, student stu[], int n);//建立学生表			    //
void init_student_link_list(student*& l); //初始化学生表								    //
void insert_student(student*& l, student stu); //插入学生信息							    //
void delete_student_name(student*& l, string student_name);//按姓名删除学生信息			//
bool delete_student_no(student*& l, string student_no);//按学号删除学生信息				//
void modify_student_info_with_name(student* l);  //按名字修改学生信息					    //
void modify_student_info_with_no(student* l);    //按学号修改学生信息					    //
/**************************************************************************************///



/**************************************************************************************///
/*sort.cpp文件的函数*/																	//
void student_chinese_score_sort(student* l); //对学生的语文成绩进行排序					    //
void student_math_score_sort(student* l);   //对学生的数学成绩进行排序					    //
void student_english_score_sort(student* l); //对学生的英语成绩进行排序                    //
/**************************************************************************************///


/**************************************************************************************///
/*ui.cpp文件的函数*/																		//
void show_chinese();																	//
void show_math();																		//
void show_english();																	//
int get_student_num(student* l);  //获取学生人数										    //
void dis_student_chinese_score(student* l); //按语文成绩的高低展示学生学号，姓名，成绩		//
void dis_student_math_score(student* l);   //按数学成绩的高低展示学生学号，姓名，成绩		    //
void dis_student_english_score(student* l); //按英语成绩的高低展示学生学号，姓名，成绩		//
void dis_class_info(student* l); //展示班级信息，学院，专业，个人信息					    //
void ui();   //界面菜单																	//
void modify_ui(); //修改学生信息的菜单													    //
void show_1();																			//
void show_2(student* l);																//
void dis_all_student(student* l);//展示所有学生的信息，由show_1()和show(student*l)构成	    //
										//																						//																					//
/**************************************************************************************///


/**************************************************************************************///																				  
/*search.cpp文件的函数*/																   //
bool search_student_name(student* l, string student_name);  //按学生的姓名查找学生信息	   //
bool search_student_no(student* l, string student_no);      //按学生的学号查找学生信息	   //
/**************************************************************************************///


/**************************************************************************************///
/*score.cpp文件*/																	   //
int get_class_sum_score(student* l); //求取班级总分									   //
int get_class_math_sum_score(student* l);//求取数学总分								   //
int get_class_chinese_sum_score(student* l);//求取语文总分							   //
int get_class_english_sum_score(student* l);//求取英语总分							   //
int average_score(student* l); //求取班级总平均分										   //
int average_chinese_score(student* l);//求取语文平均分								   //
int average_math_score(student* l);//求取数学平均分									   //
int average_english_score(student* l);//求取英语平均分								   //
/**************************************************************************************///



/**************************************************************************************///
/*modify.cpp文件*/																	   //
//按姓名查找并修改学生信息																   //
string modify_name_with_name(student* l, string student_name);//修改学生姓名			   //
void modify_no_with_name(student* l, string student_name);//修改学生学号				   //
void modify_address_with_name(student* l, string student_name);//修改学生地址			   //
void modify_sex_with_name(student* l, string student_name);//修改学生性别				   //
void modify_chinese_score_with_name(student* l, string student_name);//修改学生语文成绩  //
void modify_math_score_with_name(student* l, string student_name);//修改学生数学成绩	   //
void modify_english_score_with_name(student* l, string student_name);//修改学生英语成绩  //
//按学号查找并修改学生信息																   //
void modify_name_with_no(student* l, string student_no);//修改学生姓名				   //
string modify_no_with_no(student* l, string student_no);//修改学生学号				   //
void modify_address_with_no(student* l, string student_no);//修改学生地址				   //
void modify_sex_with_no(student* l, string student_no);//修改学生性别					   //
void modify_chinese_score_with_no(student* l, string student_no);//修改学生语文成绩	   //
void modify_math_score_with_no(student* l, string student_no);//修改学生数学成绩		   //
void modify_english_score_with_no(student* l, string student_no);//修改学生英语成绩	   //
/**************************************************************************************///
#endif