#ifndef __DOUBLELIST_H
#define __DOUBLELIST_H


/* Includes ------------------------------------------------------------------*/

#ifdef __cplusplus
	 extern "C" {
#endif /* __cplusplus */

#include "stm32f10x.h"

typedef struct DoubleNodeDef    DoubleNode, *DoubleNodeHandle_t;
typedef struct DoubleListDef    DoubleList, *DoubleListHandle_t;

// �������ݽṹ
struct DoubleNodeDef
{
  DoubleNodeHandle_t	pxPrev;
  DoubleNodeHandle_t	pxNext;
};
// ����ڵ�ṹ
struct DoubleListDef 
{
	DoubleNodeHandle_t	pxHead;
	DoubleNodeHandle_t 	pxTail;
};

// ����������չ�ĺ�
#define NODE_INITIALIZER    ((DoubleNode){ .pxPrev = NULL, .pxNext = NULL, })
#define LIST_INITIALIZER    ((DoubleList){ .pxHead = NULL, .pxTail = NULL, })
#define DECLARELISTNODE			DoubleNode __dbNode;
#define INIT_LISTNODE()			__dbNode = NODE_INITIALIZER

//#define	DOUBLELIST_TEST

#if defined	DOUBLELIST_TEST
void vDoubleListSelfTest(void);
#endif

#ifdef __cplusplus
 extern "C" }
#endif /* __cplusplus */

#endif

