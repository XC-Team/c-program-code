/*
	ʱ�䣺 2017.10.03 9:43 
	Ŀ�ģ� ѧϰ����ͨ�������е�ָ��ʵ���������Ļ��� 	 
*/
#include<stdio.h>

//�������ɹ� 
void hu_2(int *p,int *q)
{
	int *t;
	t = p;
	p = q;
	q = t;
}
//�����ɹ� 
void hu_3(int *p,int *q)
{
	int t;
	t = *p;
	*p = *q;
	*q = t;
}

int main(void)
{
	int i = 5;
	int j = 9;
	printf("i = %d,j = %d\n",i, j);
	hu_2(&i, &j);
	printf("i = %d,j = %d\n",i, j);
	hu_3(&i, &j);
	printf("i = %d,j = %d\n",i, j);
	
	return 0;
}

/*
��Dev�еĽ���ǣ�
--------------------------------------------------------------------
i = 5,j = 9
i = 5,j = 9
i = 9,j = 5

--------------------------------
Process exited after 0.04488 seconds with return value 0
Press any key to continue . . .
--------------------------------------------------------------------
�ܽ᣺
	������ʵ���������Ļ���Ӧͨ������*p��*q��ֵ������ָ����� p��q��ֵ��
	
	������ʵ���������Ļ����ĸı��������
	1.���ñ�������ʱ��ʵ��Ϊ�����ĵ�ַ������&a
	2.�β�Ϊָ�����
	3. ����*p��*q��ֵ
*/ 
 
