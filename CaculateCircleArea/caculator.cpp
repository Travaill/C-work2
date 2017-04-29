/************************************************************
FileName: caculate.cpp    
Author:   lin
Version : 1.0         
Date:     2017.4.27
Description:计算圆的面积     // 模块描述         
Version:         // 版本信息    
Function List:   // 主要函数及其功能     
1.double caculateCircle(int r)  计算圆的面积

History: none        // 历史修改记录    

<author>  <time>   <version >   <desc>       
Lin     2017/4/27     1.0     build this moudle   
***********************************************************/

#include"caculator.h"

/*************************************************   
Description: 计算圆的面积     // 函数功能、性能等的描述    
Input:  输入的参数r为圆的半径 // 输入参数说明，包括每个参数的作用、取值说明及参数间关系。   
Output: 输入为圆的面积        // 对输出参数的说明。   
Return: 返回圆的面积          // 函数返回值的说明   
Others: PI为常量3.14          // 其它说明  
*************************************************/
double CCaculator::CaculateCircle(int r)
{
	double s = 0;
	s = PI*r*r;
	return s;
}