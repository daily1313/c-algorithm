//노드 구조체, 단순 연결 리스트 
#include <stdio.h>
#include <stdlib.h>
struct NODE{
	struct NODE *next; // 다음 노드의 주소를 저장할 포인터  
	int data; // 데이터를 저장할 멤버 
};
// 머리노드(head node) : 단일 연결 리스트의 기준점. 헤드라고 부름. 첫번째 노드를 가리키는 용도이며 데이터 저장 x
// 노드(node): 단일 연결 리스트에서 데이터가 저장되는 실제 노드
// 두 종류의 노드는 역할이 다르다.
int main()
{
	struct NODE *head = malloc(sizeof(struct NODE));
	
	struct NODE *node1 = malloc(sizeof(struct NODE));	
	head->next = node1;
	node1->data=10;
	struct NODE *node2 = malloc(sizeof(struct NODE));	
	node1->next = node2;
	node2->data=20;
	node2->next = NULL;
	
	struct NODE *curr = head->next; 
	while(curr!= NULL){
		printf("%d\n",curr->data);
		curr = curr->next;
	}
	free(node2);
	free(node1);
	free(head);
	return 0;
}
//단순연결리스트 생성 순서 
//1.노드에 메모리 할당
//2.next 멤버에 다음 노드의 메모리 주소 저장
//3.data 멤버에 데이터 저장
//4.마지막 노드라면 next 멤버에 NULL저장. 

