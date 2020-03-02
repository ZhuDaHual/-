#pragma once
#ifndef __STUDENT__H__
#define __STUDENT__H__
#include <iostream>
#include <string>
#include <iomanip>
#include <Windows.h>
using namespace std;
/**************************************************************************************///
/*ѧ����Ϣ��ṹ*/
typedef struct Student																    //
{																					    //
	string no;              //ѧ��													    //
	string name;            //����													    //
	string sex;             //�Ա�													    //
	string address;         //��ַ													    //
	int math_score;      //��ѧ�ɼ� 													    //
	int english_score;   //Ӣ��ɼ�														//
	int chinese_score;   //���ĳɼ�														//
	struct Student* next;   //ָ����һ��student�Ľڵ�									    //
																						//
}student;																			    //
/**************************************************************************************///


/**************************************************************************************///
/*link_list.cpp�ļ��ĺ���*/																//
void create_student_link_list(student*& l, student stu[], int n);//����ѧ����			    //
void init_student_link_list(student*& l); //��ʼ��ѧ����								    //
void insert_student(student*& l, student stu); //����ѧ����Ϣ							    //
void delete_student_name(student*& l, string student_name);//������ɾ��ѧ����Ϣ			//
bool delete_student_no(student*& l, string student_no);//��ѧ��ɾ��ѧ����Ϣ				//
void modify_student_info_with_name(student* l);  //�������޸�ѧ����Ϣ					    //
void modify_student_info_with_no(student* l);    //��ѧ���޸�ѧ����Ϣ					    //
/**************************************************************************************///



/**************************************************************************************///
/*sort.cpp�ļ��ĺ���*/																	//
void student_chinese_score_sort(student* l); //��ѧ�������ĳɼ���������					    //
void student_math_score_sort(student* l);   //��ѧ������ѧ�ɼ���������					    //
void student_english_score_sort(student* l); //��ѧ����Ӣ��ɼ���������                    //
/**************************************************************************************///


/**************************************************************************************///
/*ui.cpp�ļ��ĺ���*/																		//
void show_chinese();																	//
void show_math();																		//
void show_english();																	//
int get_student_num(student* l);  //��ȡѧ������										    //
void dis_student_chinese_score(student* l); //�����ĳɼ��ĸߵ�չʾѧ��ѧ�ţ��������ɼ�		//
void dis_student_math_score(student* l);   //����ѧ�ɼ��ĸߵ�չʾѧ��ѧ�ţ��������ɼ�		    //
void dis_student_english_score(student* l); //��Ӣ��ɼ��ĸߵ�չʾѧ��ѧ�ţ��������ɼ�		//
void dis_class_info(student* l); //չʾ�༶��Ϣ��ѧԺ��רҵ��������Ϣ					    //
void ui();   //����˵�																	//
void modify_ui(); //�޸�ѧ����Ϣ�Ĳ˵�													    //
void show_1();																			//
void show_2(student* l);																//
void dis_all_student(student* l);//չʾ����ѧ������Ϣ����show_1()��show(student*l)����	    //
										//																						//																					//
/**************************************************************************************///


/**************************************************************************************///																				  
/*search.cpp�ļ��ĺ���*/																   //
bool search_student_name(student* l, string student_name);  //��ѧ������������ѧ����Ϣ	   //
bool search_student_no(student* l, string student_no);      //��ѧ����ѧ�Ų���ѧ����Ϣ	   //
/**************************************************************************************///


/**************************************************************************************///
/*score.cpp�ļ�*/																	   //
int get_class_sum_score(student* l); //��ȡ�༶�ܷ�									   //
int get_class_math_sum_score(student* l);//��ȡ��ѧ�ܷ�								   //
int get_class_chinese_sum_score(student* l);//��ȡ�����ܷ�							   //
int get_class_english_sum_score(student* l);//��ȡӢ���ܷ�							   //
int average_score(student* l); //��ȡ�༶��ƽ����										   //
int average_chinese_score(student* l);//��ȡ����ƽ����								   //
int average_math_score(student* l);//��ȡ��ѧƽ����									   //
int average_english_score(student* l);//��ȡӢ��ƽ����								   //
/**************************************************************************************///



/**************************************************************************************///
/*modify.cpp�ļ�*/																	   //
//���������Ҳ��޸�ѧ����Ϣ																   //
string modify_name_with_name(student* l, string student_name);//�޸�ѧ������			   //
void modify_no_with_name(student* l, string student_name);//�޸�ѧ��ѧ��				   //
void modify_address_with_name(student* l, string student_name);//�޸�ѧ����ַ			   //
void modify_sex_with_name(student* l, string student_name);//�޸�ѧ���Ա�				   //
void modify_chinese_score_with_name(student* l, string student_name);//�޸�ѧ�����ĳɼ�  //
void modify_math_score_with_name(student* l, string student_name);//�޸�ѧ����ѧ�ɼ�	   //
void modify_english_score_with_name(student* l, string student_name);//�޸�ѧ��Ӣ��ɼ�  //
//��ѧ�Ų��Ҳ��޸�ѧ����Ϣ																   //
void modify_name_with_no(student* l, string student_no);//�޸�ѧ������				   //
string modify_no_with_no(student* l, string student_no);//�޸�ѧ��ѧ��				   //
void modify_address_with_no(student* l, string student_no);//�޸�ѧ����ַ				   //
void modify_sex_with_no(student* l, string student_no);//�޸�ѧ���Ա�					   //
void modify_chinese_score_with_no(student* l, string student_no);//�޸�ѧ�����ĳɼ�	   //
void modify_math_score_with_no(student* l, string student_no);//�޸�ѧ����ѧ�ɼ�		   //
void modify_english_score_with_no(student* l, string student_no);//�޸�ѧ��Ӣ��ɼ�	   //
/**************************************************************************************///
#endif