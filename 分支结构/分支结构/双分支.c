#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>




void main()
{
	int x, y;
	int x1, y1;
	scanf("%d%d", &x, &y);
	//int x1, y1;    //http://blog.csdn.net/yelbosh/article/details/8459777 很久以前c语言的标准规定标量要在函数开始的时候定义
	//或者声明。在解释一下，我把语言中自己就代表一个变量元素的变量成为标量，把可以容纳多个元素的变量成为数组。实际上有些人把数组
	//称为向量，但是向量是数学中的概念，在数学中，向量分量称为第几维分量，分量数用维度说明，这样总是混淆。
	//再说一遍结论：在C语言里，最好把所有的变量声明放到计算之前，先声明再使用，这样就不会有这类错误了。
	//或者改为 .cpp
	if (x>=0)	//如果大于0
	{
		x1 = x;
	}
	else		
	{
		x1 = -1 * x;
	}

	if (y >= 0)
	{
		y1 = y;
	}
	else
	{
		y1 = -1 * y;
	}
	if (x1 > y1)
	{
		printf("max=%d", x1);
	}
	else
	{
		printf("max=%d", y1);
	}
	system("pause");
}


void main21()
{
	if(!1)	//!1=0   ··· &&  ||  与或非
	{
		system("tasklist");  //表达式值为非0 执行
	}
	else
	{
		system("ipconfig");  //表达式值为0或者（!2）etc. 执行
	}
	system("pause");

}
