//이중연결리스트  
#include <stdio.h>
#include <stdlib.h>
typedef int item;
typedef struct DListNode{
	item data;
	struct DListNode *prev; // 선행 노드
	struct DListNode *next; // 후행 노드 
}DListNode;
//헤드 노드 : 데이터를 가지지 않고 삽입, 삭제 코드를 간단하게 할 목적으로 만들어진 노드로 헤드 포인터와 구별된다.
//연결리스트가 비어있는 경우 헤드 노드만 존재하게 됨
//prev link, next link는 자기 자신을 참조한다.
void init(DListNode *phead)
{
	phead->prev = phead;
	phead->next = phead;
}
//new_node를 before 노드의 다음에 위치하도록 삽입한다. 
void insert_node(DListNode *before, DListNode *new_node)
{
	new_node->prev = before;
	new_node->next = before->next;
	before->next->prev = new_node;
	before->next =new_node;  
}
DListNode *create_node(int n)
{
	DListNode *new_node = (DListNode *)malloc(sizeof(DListNode));
	new_node->data = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return new_node;
}
void reverse_display(DListNode *phead)
{
	DListNode *current = phead->prev;
	printf("역방향 출력: (");
	while(current != phead){
		printf(" %d",current->data);
		current = current->prev;
		if(current!=phead) printf(",");
	}
	printf(" )\n");
}
void inverse_display(DListNode *phead)
{
	DListNode *current = phead->next;
	printf("순방향 출력: (");
	while(current!=phead){
		printf(" %d",current->data);
		current = current->next;
		if(current!=phead) printf(",");
	}
	printf(" )\n");
}
int main(void)
{
	DListNode head_node;
	DListNode *p[10];
	int i;
	init(&head_node);
	for(i=0;i<4;i++){
		p[i] = create_node(i);
		insert_node(&head_node,p[i]);
		printf("p[%d] 노드를 이중연결리스트에 삽입한 결과\n",i);
		inverse_display(&head_node);
		reverse_display(&head_node);	
	}
	printf("\n4개의 노드를 이중연결리스트에 삽입한 결과\n");
}
//이중연결리스트의 초기화, 헤드노드의 prev, next가 자기 자신을 참조함.
//새로운 노드 객체 생성
//새 노드의 next가 이전 노드의 next 노드를 참조
//이전 노드의 next의 prev의 새로운 노드를 참 
