#include <iostream>
using namespace std;

//int main()  // ���á��������
//{
//	int a = 10;
//
//	int& b = a;  // ���ã�������a���˸�����Ϊb
//
//	int* p = &b;  // ȡ��ַ����b�ĵ�ַȡ����
//
//	return 0;
//}

//int main()  // ͨ�����Դ��ڿ�a��b��ֵ�͵�ַ��������õ�����
//{
//	int a = 10;
//	int& b = a;
//
//	a = 20;
//	b = 30;
//
//	return 0;
//}

//int main()  // �����ڶ���ʱ�����ʼ��
//{
//	int a = 10;
//	int& b;  // err
//
//	return 0;
//}

//int main()  // һ�����������ж������
//{
//	int a = 10;
//	int& b = a;
//	int& c = a;
//	int& d = b;
//
//	return 0;
//}

//int main()  // ����һ������һ��ʵ�壬�ٲ�����������ʵ��
//{
//	int a = 10;
//	int& b = a;  // b��a�ı���
//	int c = 20;
//
//	// 1����������b���c�ı����أ� ��
//	// 2�����ǰ�c��ֵ��b�� ��
//	b = c;
//
//	int* p1 = &a;  // ���ò��ܸ���ʵ�壬����ָ����Ը���ָ��
//	p1 = &c;
//
//	return 0;
//}

// ����ʹ�ó�������������
//void swap(int a, int b)  // ��ֵ
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//int main()
//{
//	int x = 0, y = 1;
//	swap(x, y);
//
//	return 0;
//}

//void swap(int* p1, int* p2)  // ����ַ
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//int main()
//{
//	int x = 0, y = 1;
//	swap(&x, &y);
//
//	return 0;
//}

//void swap(int& r1, int& r2)  // ������
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//int main()
//{
//	int x = 0, y = 1;
//	swap(x, y);
//
//	return 0;
//}

//void swap(int a, int b)  // _Z4swapii
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//void swap(int* p1, int* p2)  // _Z4swappipi
//{
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//void swap(int& r1, int& r2)  // _Z4swapriri
//{
//	int tmp = r1;
//	r1 = r2;
//	r2 = tmp;
//}
//// �����������ɺ������أ�����swap(x, y);����ʱ�������壬����֪�����ô�ֵ���Ǵ�����
//// ������ǰ�����������д��룬���ǹ������أ����Ǵ�������
//// void f();
//// void f(int x = 0);
//int main()
//{
//	int x = 0, y = 1;
//	swap(&x, &y);
//	swap(x, y);
//
//	return 0;
//}

//#include "slist.h"
//
//int main()  // �������������ӣ�����ָ���һ��ָ�������
//{
//	SLTNode* plist = NULL;
//	SListPushBack(plist, 1);  // һ��ָ�������
//	SListPushBack(plist, 2);  // һ��ָ�������
//	SListPushBack(&plist, 3);  // ����ָ��
//	SListPushBack(&plist, 4);  // ����ָ��
//
//	SListPrint(plist);
//
//	return 0;
//}

// ����ʹ�ó�������������
//int Add(int a, int b)  // ��ֵ����ֵ
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int ret = Add(1, 2);
//	cout << ret << endl;
//	return 0;
//}

//int& Add(int a, int b)  // �����÷��أ������÷������ض��󻹸�ϵͳ��
//{
//	int c = a + b;
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << ret << endl;
//	Add(10, 20);
//	cout << ret << endl;
//	return 0;
//}

//int& Add(int a, int b)  // �����÷��أ���ȷ�÷������ض���δ����ϵͳ��
//{
//	static int c = a + b;  // ��̬������ȫ�ֱ����Ȳ��ỹ��ϵͳ
//	return c;
//}
//int main()
//{
//	int& ret = Add(1, 2);
//	cout << ret << endl;
//	Add(10, 20);
//	cout << ret << endl;
//	return 0;
//}

//#include <time.h>  // ֵ�����õ���Ϊ�������͵����ܱȽ�
//struct A { int a[10000]; };
//void TestFunc1(A a) {}
//void TestFunc2(A& a) {}
//int main()
//{
//	A a;
//
//	// ��ֵ��Ϊ��������
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 10000; ++i)  // ����10000��TestFunc1()
//		TestFunc1(a);
//	size_t end1 = clock();
//
//	// ��������Ϊ��������
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 10000; ++i)  // ����10000��TestFunc2()
//		TestFunc2(a);
//	size_t end2 = clock();
//
//	// �ֱ���������������н������ʱ��
//	cout << "TestFunc1(A)-time:" << end1 - begin1 << endl;
//	cout << "TestFunc2(A&)-time:" << end2 - begin2 << endl;
//
//	return 0;
//}

//#include <time.h>  // ֵ�����õ���Ϊ����ֵ���͵����ܱȽ�
//struct A { int a[10000]; };
//A a;
//A TestFunc1() { return a; }  // ��ֵ���ء���ÿ�ο���40000byte
//A& TestFunc2() { return a; }  // �����÷��ء���û�п���
//int main()
//{
//	// ��ֵ��Ϊ�����ķ���ֵ����
//	size_t begin1 = clock();
//	for (size_t i = 0; i < 100000; ++i)  // ����10000��TestFunc1()
//		TestFunc1();
//	size_t end1 = clock();
//
//	// ��������Ϊ�����ķ���ֵ����
//	size_t begin2 = clock();
//	for (size_t i = 0; i < 100000; ++i)  // ����10000��TestFunc2()
//		TestFunc2();
//	size_t end2 = clock();
//
//	// �������������������֮���ʱ��
//	cout << "TestFunc1 time:" << end1 - begin1 << endl;
//	cout << "TestFunc2 time:" << end2 - begin2 << endl;
//
//	return 0;
//}

// �ܽ�һ�£����õ�������Ҫ�����ڴ��κʹ�����ֵ���������㣬��������ѧϰ��
// 1�����ô��κʹ�����ֵ����Щ�������棬����������ܡ��������+�������
// 2�����ô��κʹ�����ֵ������Ͳ���������ͷ���ֵ��ͨ�׵�˵����Щ�������棬�βεĸı���Ըı�ʵ�Σ����÷��ؿ��Ըı䷵�ض���

//int main()  // ������
//{
//	int a1 = 10;  // ����
//	int& b1 = a1;
//
//	const int a2 = 10;  // Ȩ�޷Ŵ󣬲�����
//	int& b2 = a2;  // a2�����޸ģ�b2��Ϊ�����ø������޸�
//
//	const int a3 = 10;  // Ȩ�޲��䣬����
//	const int& b3 = a3;
//
//	int a4 = 10;  // Ȩ�޵���С������
//	const int& b4 = a4;  // a2���޸ģ�b2��Ϊ�����ò����޸�Ҳ����
//
//	return 0;
//}

// ����x��һ����������������Ķ��󣨺���ѧϰ������ô���������ô��Σ����ٿ�����
// ���f�����в��ı�x�����龡����cosnt���ô��Ρ�
void f1(int& x)  // int���Դ��Σ�const int�����Դ���
{
	cout << x << endl;
}

void f2(const int& x)  // int��const int�����Դ���
{
	cout << x << endl;
}

int main()
{
	int a = 10;
	const int b = 10;


	f1(a);  // int���Դ���
	f1(b);  // const int�����Դ���
	f1(10);  // ���������Դ���

	f2(a);  // int���Դ���
	f2(b);  // const int���Դ���
	f2(10);  // �������Դ���

	return 0;
}