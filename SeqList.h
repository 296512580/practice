#include"Sysutil.h"
//˳���

#define ElemType int
#define SEQLIST_DEFAULT_SIZE 8
//����˳�������ݽṹ
typedef struct SeqList
{
	ElemType* base;
	size_t capacity;
	size_t size;
}SeqList;

void SeqListInit(SeqList *pst);

void SeqListInit(SeqList *pst)
{
	pst->base = (ElemType*)malloc(sizeof(ElemType)* SEQLIST_DEFAULT_SIZE);
	assert(pst->base != NULL);
	pst->capacity = SEQLIST_DEFAULT_SIZE;
	pst->size = 0;

}
