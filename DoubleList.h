#ifndef __DOUBLELIST_H
#define __DOUBLELIST_H


/* Includes ------------------------------------------------------------------*/

#ifdef __cplusplus
	 extern "C" {
#endif /* __cplusplus */

#include "stm32f10x.h"

typedef struct DoubleNodeDef    DoubleNode, *DoubleNodeHandle_t;
typedef struct DoubleListDef    DoubleList, *DoubleListHandle_t;

// 链表数据结构
struct DoubleNodeDef
{
  DoubleNodeHandle_t	pxPrev;
  DoubleNodeHandle_t	pxNext;
};
// 链表节点结构
struct DoubleListDef 
{
	DoubleNodeHandle_t	pxHead;
	DoubleNodeHandle_t 	pxTail;
};

// 用于链表扩展的宏
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

