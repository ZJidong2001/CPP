#include "stack.h"
#include <stdlib.h>

void StackInit(struct Stack* ps, int capacity)  // ȱʡ���������ں��������Ͷ�����ͬʱ����
{
	ps->a = (int*)malloc(sizeof(int) * capacity);
	ps->top = 0;
	ps->capacity = capacity;
}