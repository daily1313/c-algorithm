//���߿��Ḯ��Ʈ  
#include <stdio.h>
#include <stdlib.h>
typedef int item;
typedef struct DListNode{
	item data;
	struct DListNode *prev; // ���� ���
	struct DListNode *next; // ���� ��� 
}DListNode;
//��� ��� : �����͸� ������ �ʰ� ����, ���� �ڵ带 �����ϰ� �� �������� ������� ���� ��� �����Ϳ� �����ȴ�.
//���Ḯ��Ʈ�� ����ִ� ��� ��� ��常 �����ϰ� ��
//prev link, next link�� �ڱ� �ڽ��� �����Ѵ�.
void init(DListNode *phead)
{
	phead->prev = phead;
	phead->next = phead;
}
//new_node�� before ����� ������ ��ġ�ϵ��� �����Ѵ�. 
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
	printf("������ ���: (");
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
	printf("������ ���: (");
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
		printf("p[%d] ��带 ���߿��Ḯ��Ʈ�� ������ ���\n",i);
		inverse_display(&head_node);
		reverse_display(&head_node);	
	}
	printf("\n4���� ��带 ���߿��Ḯ��Ʈ�� ������ ���\n");
}
//���߿��Ḯ��Ʈ�� �ʱ�ȭ, ������� prev, next�� �ڱ� �ڽ��� ������.
//���ο� ��� ��ü ����
//�� ����� next�� ���� ����� next ��带 ����
//���� ����� next�� prev�� ���ο� ��带 �� 
