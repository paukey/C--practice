#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>




void main()
{
	int x, y;
	int x1, y1;
	scanf("%d%d", &x, &y);
	//int x1, y1;    //http://blog.csdn.net/yelbosh/article/details/8459777 �ܾ���ǰc���Եı�׼�涨����Ҫ�ں�����ʼ��ʱ����
	//�����������ڽ���һ�£��Ұ��������Լ��ʹ���һ������Ԫ�صı�����Ϊ�������ѿ������ɶ��Ԫ�صı�����Ϊ���顣ʵ������Щ�˰�����
	//��Ϊ������������������ѧ�еĸ������ѧ�У�����������Ϊ�ڼ�ά��������������ά��˵�����������ǻ�����
	//��˵һ����ۣ���C�������ð����еı��������ŵ�����֮ǰ����������ʹ�ã������Ͳ�������������ˡ�
	//���߸�Ϊ .cpp
	if (x>=0)	//�������0
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
	if(!1)	//!1=0   ������ &&  ||  ����
	{
		system("tasklist");  //���ʽֵΪ��0 ִ��
	}
	else
	{
		system("ipconfig");  //���ʽֵΪ0���ߣ�!2��etc. ִ��
	}
	system("pause");

}
