#include <iostream>
using namespace std;

//int main()
//{
//	const char* str = "hello bit";
//	cout << str << endl;  // �Զ�ʶ���������
//
//	int i = 1;
//	double d = 1.11;
//	cout << i << d << endl;  // �Զ�ʶ���������
//	                         // С�����ж���λ��cout���������λ
//	cin >> i >> d;  // ����Ҫ��C����һ��ʹ��ȡ��ַ������&
//	cout << i << d << endl;
//
//	return 0;
//}

//struct Student
//{
//	char name[20];
//	int age;
//	//...
//};
//
//int main()  // cin��cout��printf()��scanf()�����������ĸ��������ĸ�
//{
//	struct Student s = { "����",18 };
//	// CPP
//	cout << "����:" << s.name << endl;
//	cout << "����:" << s.age << endl << endl; // CPP��cout�����㣬һ��һ��д���鷳
//	// C
//	printf("����:%s\n����:%d\n\n", s.name, s.age);  //д�ṹ��ʱ��C���Ե�printf�����㣬��һ�д���㶨
//
//	return 0;
//}

//void Func(int a = 0)  // ȱʡ����
//{
//	cout << a << endl;
//}
//
//int main()
//{
//	Func(1);  // ����ʱ��ʹ��ָ����ʵ��
//	Func();  // û�д���ʱ��ʹ�ò�����Ĭ��ֵ
//
//	return 0;
//}

//void Func(int a = 10, int b = 20, int c = 30)  // ȫȱʡ
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	// ֻ���������ִ��η�ʽ
//	Func();
//	Func(1);  // �������Ҵ�
//	Func(1, 2);
//	Func(1, 2, 3);
//
//	// func(, 2, );  // error�������ڵ��õ�ʱ��ָ������˭
//
//	return 0;
//}

//void func(int a, int b, int c = 30)  // ��ȱʡ���������������ȱʡ���ұ�������ȱʡ
//{
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//	cout << "c = " << c << endl << endl;
//}
//
//int main()
//{
//	// ֻ���������ִ��η�ʽ
//	func(1, 2);
//	func(1, 2, 3);
//
//	return 0;
//}

//#include "stack.h"
//
//int main()  // ȱʡ������Ӧ��
//{
//	struct Stack st;
//	StackInit(&st); // ��֪��ջ������ٸ����ݣ�����ȱʡֵ��ʼ��
//	StackInit(&st, 100); // ֪��ջ����100�����ݣ���ʽ��ֵ���������Լ������ݴ��������Ч��
//
//	return 0;
//}

// �������ء���һ�ʶ��壬�β��б��������������ͻ�˳�򣩱��벻ͬ

// 1���������Ͳ�ͬ
//int Add(int left, int right)
//{
//	cout << "int Add(int left, int right)" << endl;
//
//	return left + right;
//}
//
//double Add(double left, double right)
//{
//	cout << "double Add(double left, double right)" << endl;
//
//	return left + right;
//}
//
//int main()
//{
//	Add(1, 2);
//	Add(1.1, 2.2);
//	return 0;
//}

// 2������������ͬ
//void f()
//{
//	cout << "f()" << endl;
//}
//
//void f(int a)
//{
//	cout << "f(int a)" << endl;
//}
//
//int main()
//{
//	f();
//	f(1);
//	return 0;
//}

// 3������˳��ͬ
//void f(int a, char b)
//{
//	cout << "f(int a,char b)" << endl;
//}
//
//void f(char b, int a)
//{
//	cout << "f(char b, int a)" << endl;
//}
//
//int main()
//{
//	f(10, 'A');
//	f('A', 10);
//	return 0;
//}

// ע�⣺�����б���ͬ��������ֵ��ͬ�����ܹ������ء������õ�ʱ��������
//int f(double d)
//{
//
//}
//
//void f(double d)
//{
//
//}
//
//int main()
//{
//	f(1.1);  // �޷�ȷ�������ĸ�����
//	return 0;
//}

// ע�⣺�����б��ȱʡֵ��ͬ�����ܹ������أ�ֻ�������б�ĸ��������ͻ�˳������һ��������
//void f(int a)
//{
//	cout << "f()" << endl;
//}
//
//void f(int a = 0)
//{
//	cout << "f(int a)" << endl;
//}
//
//int main()
//{
//	f();
//	f(1);
//	return 0;
//}

// ע�⣺�����б�ͬ���������أ�����ȱʡ����ʹ��ʱ��������
void f()
{
	cout << "f()" << endl;
}

void f(int a = 0)
{
	cout << "f(int a)" << endl;
}

int main()
{
	f();  // ���ô�������
	f(1);
	return 0;
}