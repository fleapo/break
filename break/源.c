#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<string.h>
void main1() 
{
	int a = 1;
	int const *p;
	p = &a;
	//*p = 3;
	const int *p1;
	p1 = &a;
	//*p1 = 3;
	int const b = 2;
	int *p3;// = &b;
	//p3 = &b;C中可以实现，C++不行
	//*p3 = 5;
	printf("%d", b);


	 
}
void main2()
{
	char str[5] = { 'c','a','l','c' };
	char str1[4] 
		= { 'c','a','l','c' };
	printf("str %s\nstr1 %s\n&str %s\n&str1 %s", str, str1, &str, &str1);
	system(str);



}
void main3()
{
	time_t t;
	srand((unsigned int)time(&t));
	int i = 0, s, a[100000], b[10] = {0};
	while (i<10000)
	{
		s = rand();
		printf("%d\n", s);
		a[i] = s%10;
		switch (a[i])
		{
		case 0: b[a[i]]++; break;
		case 1:b[a[i]]++; break;
		case 2:b[a[i]]++; break;
		case 3:b[a[i]]++; break;
		case 4:b[a[i]]++; break;
		case 5:b[a[i]]++; break;
		case 6:b[a[i]]++; break;
		case 7:b[a[i]]++; break;
		case 8:b[a[i]]++; break;
		case 9:b[a[i]]++; break;
		default:
			break;
		}
		//Sleep(1);
		i++;
	}
	printf("-----------------\n");
	for (i = 0; i < 10; i++) {
		printf("%d\n", b[i]);
	
	
		}
	printf("-----------------\n一共%d", b[1] + b[2] + b[3] + b[4] + b[5] + b[6] + b[7] + b[8] + b[9] +b[0] );



}
void main333()
{
	char *st;
	struct person {
		char a[10];
		double b;
	};
	printf("%d", sizeof(struct person));//C中，person前 必须有struct
	//char pp[4] = "calc";//在C中可以，C++中不行，
	//system(pp);
	struct person p01;
	//结构体中的字符数组不可直接赋值，需要用strcpy,sprintf,scanf//p01.a = "calc";
	scanf("%s",&p01.a);
	printf("a= %s", p01.a);
	//p01 = { "abcd",4.5 };//C++中可以
}
void main4()
{
	char a[10] = "hello";
	char *p = a;
	p[0] = 'a';
	printf("%s", p);



}
void main()
{
	unsigned char a = 131;
	unsigned char b = ~a;
	printf("a= %d\nb= %d\n ~a= %c\n",a,b,~a);
	printf("%d",Get1Num1(15));
}
int Get1Num1(unsigned int num)
{
	if (num == 0) return 0;
	return (num & 0x01) + Get1Num1(num >> 1);
}