#include<stdio.h>   //�����������
#include<stdlib.h>  //Ϊ��ʹ��system���

//��ѭ��
void main5()
{
	while (1); //ȥ��;Ϊ��ѭ������Ȼִ�е�;
	{
		printf("asdasdasdasda");
	}
}



void main4()
{
	//if (1)  //if�������п���䣬���÷�Χ���ǿ����
	//{
	//	system("notepad");
	//	system("calc");
	//}
	if (0)	  //���û�п�������÷�Χ���������һ���ֺ�ǰ������
		;	  //�����ڵ�һ�еĿ����
		system("notepad");
		system("calc");
	system("pause");
}


//��С�������a,b,c��ֵ
void main3()
{
	double a, b, c;
	printf("�ֱ�����a,b,c\n");
	scanf("%lf%lf%lf", &a, &b, &c);

	printf("\n����֮ǰa=%f, b=%f, c=%f", a, b, c);
	//ʵ�ִ�С����
	//a<b
	//a<c
	//b<c
	//ʵ��a,b������һ�ַ�ʽ
	//a=10,b=100
	//a=a+b    a=110,b=100
	//b=a-b    b=10,a=110
	//a=a-b    b=10,a=100
	if (a>b) //��a��b����С������a
	{
		double	t=a; //ʵ��a,b�Ļ���
		a=b;
		b=t;
	}
	if (a>c)//��a,c֮����Сֵ����a
	{
		double	t=a; //ʵ��a,c�Ļ���
		a=c;
		c=t;
	}
	if (b>c)
	{
		double	t=c; //ʵ��b,c�Ļ���
		c=b;
		b=t;
	}
	printf("\n����֮��a=%f, b=%f, c=%f", a, b, c);

	system("pause");
}




void main2()
{
	int x, y;
	scanf("%d%d", &x, &y);
	if (x>y)
	{
		printf("min=%d", y);
	}
	if (x<=y)
	{
		printf("min=%d", x);
	}
	system("pause");
}


void main1()
{
	if (1) //0��ִ�п���䣬����ִ�п����
	{
		system("tasklist");
	}
	system("pause");
}


