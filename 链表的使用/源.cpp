#include<iostream>
using namespace std;
#define OK 1
#define ERROR 0
#define OVERFLOW -2
typedef int ElemType;
typedef int Status;
typedef struct LNode
{
	ElemType data;
	struct LNode* next;
} Lnode,*LinkList;
Status INitList(LinkList& L)
{
	L = new LNode;
	L->next = NULL;
	return OK;
}
