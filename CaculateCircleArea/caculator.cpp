/************************************************************
FileName: caculate.cpp    
Author:   lin
Version : 1.0         
Date:     2017.4.27
Description:����Բ�����     // ģ������         
Version:         // �汾��Ϣ    
Function List:   // ��Ҫ�������书��     
1.double caculateCircle(int r)  ����Բ�����

History: none        // ��ʷ�޸ļ�¼    

<author>  <time>   <version >   <desc>       
Lin     2017/4/27     1.0     build this moudle   
***********************************************************/

#include"caculator.h"

/*************************************************   
Description: ����Բ�����     // �������ܡ����ܵȵ�����    
Input:  ����Ĳ���rΪԲ�İ뾶 // �������˵��������ÿ�����������á�ȡֵ˵�����������ϵ��   
Output: ����ΪԲ�����        // �����������˵����   
Return: ����Բ�����          // ��������ֵ��˵��   
Others: PIΪ����3.14          // ����˵��  
*************************************************/
double CCaculator::CaculateCircle(int r)
{
	double s = 0;
	s = PI*r*r;
	return s;
}