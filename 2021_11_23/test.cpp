#include <stdio.h>

//int main()  // C++����C��C���Ե��﷨������C++�����ɿ���ʹ��
//{
//	printf("Hello World!\n");
//	return 0;
//}

//#include <stdlib.h>  // ��������ͷ�ļ���������������У�������ͷ�ļ������rand������ͻ���⣨��֪rand��ȫ�ֱ������Ǻ�����
//
//int rand = 0;
//
//int main()  // C�����޷����������֮һ��������ͻ����
//{
//	// 1�������Լ�����ı������������ܸ�������ı�������������������ͻ
//	// 2�����빫˾��Ŀ���Ժ�������Ŀͨ���Ƚϴ󣬶���Э��д���룬�������������ͻ
//	// C����û�а취�ܺõؽ��������⣬C++���һ�����﷨���������ռ�
//	printf("%d\n", rand);
//	return 0;
//}

//#include <stdlib.h>
//
//namespace bit  // ������һ����bit�������ռ䡪����
//{
//	int rand = 0;
//}
//
//int main()  // �����ռ���и�������
//{
//	// rand�ȵ��ֲ���Χ���ң���û���ٵ�ȫ�ַ�Χ���ң�����û�������ᱨ�����ᵽ�����������ȥ��
//	printf("%d\n", rand);  // rand���ʵ���ȫ�ֱ�����rand()����
//
//	// bit::randָ���������bit������ȥ��
//	printf("%d\n", bit::rand);  // ::�������޶���
//
//	return 0;
//}

//int a = 10;
//
//int main()  // ::�������޶���
//{
//	int a = 20;
//
//	printf("%d\n", a);  // �ֲ���������
//	printf("%d\n", ::a);  // ::���Ϊ�հף�ʹ��ȫ�ֱ���a
//
//	return 0;
//}

//namespace bit  // �����ռ��п��Զ������������������
//{
//	int rand = 10;
//
//	int Add(int left, int right)
//	{
//		return left + right + 10;
//	}
//
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//}
//
//int main()
//{
//	bit::rand = 10;
//
//	struct bit::Node node;
//
//	bit::Add(1, 2);
//
//	return 0;
//}

//namespace N1  // �����ռ����Ƕ��
//{
//	int a;
//	int b;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//
//	namespace N2
//	{
//		int c;
//		int d;
//		int Sub(int left, int right)
//		{
//			return left - right;
//		}
//	}
//}
//
//int main()
//{
//	N1::Add(1, 2);
//	N1::N2::Sub(3, 4);
//
//	return 0;
//}

//#include "test.h"
//
//namespace bit  // ͬһ��������������ڶ����ͬ���Ƶ������ռ䣬����������ϳ�ͬһ�������ռ���
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)  // ʵ��
//	{
//		return left + right;
//	}
//}
//
//int main()
//{
//	bit::a = 30;
//	bit::Add(4, 6);
//
//	return 0;
//}

//namespace N  // �����ռ�ʹ�÷�ʽ1���������ռ����Ƽ��������޶������÷�ʽ�ܹ�������õ��������룬����ʹ�ò����㣬ÿ�ζ���Ҫָ����
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//}
//
//int main()
//{
//	printf("%d\n", N::a);
//	return 0;
//}

//namespace N  // �����ռ�ʹ�÷�ʽ2��ʹ��using namespace �����ռ��������루�÷�ʽ��������Ȼ���䷽�㣬���Ǹ��볹��ʧЧ�ˣ����ã�
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//}
//
//using namespace N;
//
//int main()
//{
//	printf("%d\n", a);
//	printf("%d\n", b);
//	Add(10, 20);
//	return 0;
//}

//namespace N  // �����ռ�ʹ�÷�ʽ3��ʹ��using�������ռ��г�Ա���루�÷�ʽ��������չ�����õĳ�Ա��Ҳ�нϺõĸ���Ч����
//{
//	int a = 10;
//	int b = 20;
//	int Add(int left, int right)
//	{
//		return left + right;
//	}
//	int Sub(int left, int right)
//	{
//		return left - right;
//	}
//}
//
//using N::b;
//
//int main()
//{
//	printf("%d\n", N::a);
//	printf("%d\n", b);
//	return 0;
//}

//#include <iostream>  // C++�����ͷ�ļ�������C���Ե�stdio.h
//using namespace std;  // C++���ʵ�ֶ�����һ����std�������ռ��У�stdȫ��չ��
//
//int main()
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

//#include <iostream>
//// ��չ��std�����ռ�
//
//int main()
//{
//	std::cout << "Hello world!" << std::endl;
//	return 0;
//}

//#include <iostream>
//using std::cout;
//using std::endl;  // չ��std�г��õ�
//
//int main()
//{
//	cout << "Hello world!" << endl;
//	return 0;
//}

#include <iostream>
using namespace std;

int main()  // <<�������������>>����ȡ�������endl���з�
{
	cout << "hello world" << endl;
	cout << "hello world\n";
	printf("hello world\n");

	int i = 10;
	double d = 1.11;

	cout << i << " " << d << endl;  // �Զ�ʶ������
	cin >> i >> d;
	cout << i << " " << d << endl;

	return 0;
}