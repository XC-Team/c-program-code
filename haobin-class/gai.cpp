/*
	时间： 2017.10.03 9:35 
	目的： 学习怎样通过调用被调函数实现主调函数里值的改变 	 
*/
#include<stdio.h>

int main(void)
{
	void hu(int *p,int *q);
	int i = 5;
	int j = 9;
	printf("i = %d,j = %d\n",i, j);
	hu(&i, &j);
	printf("i = %d,j = %d\n",i, j);
	
	return 0;
}

void hu(int *p,int *q)
{
	*p = 4;
	*q = 6;
}
/*
在Dev中的结果是：
--------------------------------------------------------------------
/*
在Dev中的结果是：
--------------------------------------------------------------------
i = 5,j = 9
i = 4,j = 6 

--------------------------------
Process exited after 0.04488 seconds with return value 0
Press any key to continue . . .
--------------------------------------------------------------------
总结：
	调用被调函数实现主调函数里值的改变分三步：
	1.调用被调函数时，实参为变量的地址，即如&a
	2.形参为指针变量
	3.通过*变量名 = ...改变主调函数里值 
*/ 

