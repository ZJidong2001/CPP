#pragma once

struct Stack
{
	int* a;
	int top;
	int capacity;
};

void StackInit(struct Stack* ps, int capacity = 4);  // ȱʡ���������ں��������Ͷ�����ͬʱ����

// �Ƽ���ȱʡ����д������λ�ã���Ϊ�鿴�������ʹ��ʱ�����ȿ�����