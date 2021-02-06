#include"Sysutil.h"
//顺序表

#define ElemType int
#define SEQLIST_DEFAULT_SIZE 8
//定义顺序表的数据结构
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
