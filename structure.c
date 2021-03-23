#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//结构体类型的声明
//结构是一些值的集合，这些值被称为成员变量。结构的每个成员可以是不同类型的变量
//结构的声明

//struct tag
//{
//	member - list;//成员列表
//}variable-list;


/*
//描述一个学生-一些数据
//名字；年龄；电话；性别

//struct 结构体关键字  Stu - 结构体标签   struct Stu - 结构体类型
struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}s1,s2,s3; //s1，s2,s3是三个全局的结构体变量

int main()
{
	struct Stu s; //创建结构体变量 （局部变量）
	return 0;
}
*/

/*
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; //类型


int main()
{
	struct Stu s1; //创建结构体变量 （局部变量）
	Stu s2;
	return 0;
}
*/

/*
typedef struct Stu
{
	//成员变量
	char name[20];
	short age;
	char tele[12];
	char sex[5];
}Stu; //类型


int main()
{
	Stu s1 = {"张三",20, "15249287076", "男"}; //创建结构体变量 （局部变量）
	struct Stu s2 = {"旺财", 30, "15596668862", "保密"};
	return 0;
}
*/


//结构的成员可以是标量、数组、指针、甚至是其他结构体

/*
struct Point
{
	int x;
	int y;
}p1;               //声明类型的同时定义变量p1
struct Point p2;  //定义结构体变量p2

//初始化：定义变量的同时赋初值。
struct Point p3 = {x, y};

struct Stu    //类型说明
{
	char name[15];  //
	int age;  //

};
struct Stu s = {"zhangsan",20};  //初始化

struct Node
{
	int data;
	struct Point p;
	struct Node* next;
}n1 = { 10,{4,5},NULL };    //结构体嵌套初始化
*/


/*
struct S
{
	int a;
	char c;
	char arr[20];
	double d;
};

struct T
{
	char ch[10];
	struct S s;
	char* pc;
};

int main()
{
	char arr[] = "hello bit\n";
	struct T t = { "hehe",{100,'w',"hello world",3.14}, arr };
	printf("%s\n", t.ch);     //hehe
	printf("%s\n", t.s.arr);  // hello world
	printf("%lf\n", t.s.d);  //3.14
	printf("%s\n", t.pc);    //hello bit 
	return 0;
}
*/

//结构体变量访问成员，结构变量的成员是通过点操作符（.）访问的。 点操作符接受两个操作数。

/*
typedef struct Stu
{
	char name[20];
	int age;
	char tele[12];
	char sex[5];
}Stu;

void Print1(Stu tmp)
{
	printf("name: %s\n", tmp.name);
	printf("age:  %d\n", tmp.age);
	printf("tele: %s\n", tmp.tele);
	printf("sex:  %s\n", tmp.sex);

}

void Print2(Stu* ps)
{
	printf("name: %s\n", ps->name);
	printf("age: %s\n", ps->age);
	printf("tele: %s\n", ps->tele);
	printf("sex: %s\n", ps->sex);
}

int main()
{
	Stu s = { "李四", 40, "1559886688", "男" };
	//打印结构体数据
	//Print1 和 Print2 哪个更好
	//首选Print2函数，原因：
	//函数传参的时候，参数是需要压栈的，如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
	//结论：结构体传参的时候，要传结构体的地址

	Print1(s);
	Print2(&s);
	return 0;
}
*/



//栈区: 局部变量；函数的形式参数； 函数调用也开辟空间
//堆区： 动态内存分配； malloc/free;  realloc;  calloc
//静态区：全局变量； 静态变量
//栈：先进后出，后进的先出
//插入一个元素：压栈
//删除一个元素：出栈
//

