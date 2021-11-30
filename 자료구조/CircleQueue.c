#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5
typedef int element;
typedef struct{
	element data[MAX_QUEUE_SIZE];
	int front, rear;
}QueueType;
void error(char *message) // ������� �����Լ� 
{
	fprintf(stderr,"%s\n",message);
	exit(1);
 } 
 void init_queue(QueueType *q) //����ť�� front, rear �ʱⰪ 0 
 {
 	q->front = q->rear = 0;
 }
 int is_empty(QueueType *q){   // ������� �����Լ� 
 	return (q->rear == q->front);
 }
 int is_full(QueueType *q){   //��ȭ���� �����Լ� 
 	return ((q->rear +1) % MAX_QUEUE_SIZE == q->front);
 }
 void queue_print(QueueType *q) // ����ť ����Լ� 
 {
 	printf("QUEUE(front=%d rear=%d) = ",q->front, q->rear);
 	if(!is_empty(q)){
 		int i= q->front;
 		do{
 			i = (i+1) % (MAX_QUEUE_SIZE);
 			printf("%d | ",q->data[i]);
 			if(i== q->rear) break;
		 }while(i != q->front);
	 }
	 printf("\n");
 }
 void enqueue(QueueType *q, element item) //���� �Լ� 
  {
 	if(is_full(q)){
 		error("ť�� ��ȭ�����Դϴ�.");
	 }
	 q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
	 q->data[q->rear] = item;
 }
 element dequeue(QueueType *q)          //���� �Լ� (front�� 1����) 
 {
 	if(is_empty(q)){
 		error("ť�� ��������Դϴ�.");
	 }
	 q->front = (q->front + 1) % MAX_QUEUE_SIZE;
	 return q->data[q->front];
 }
 element peek(QueueType *q)             //���� �Լ� (front�� ��ȭ x) 
 {
 	if(is_empty(q)){
 		error("ť�� ��������Դϴ�.");
	 }
	 return q->data[(q->front+1)%MAX_QUEUE_SIZE];
 }
 int main(void)
 {
 	QueueType queue;
 	int element;
 	init_queue(&queue);
 	printf("--������ �߰� �ܰ�--\n");
 	while(!is_full(&queue))
	 {
 		printf("������ �Է��Ͻÿ�: ");
 		scanf("%d",&element);
 		enqueue(&queue,element);
 		queue_print(&queue);
	 }
	 printf("ť�� ��ȭ�����Դϴ�.\n\n");
	 
	 printf("-- ������ ���� �ܰ�--\n");
	 while(!is_empty(&queue))
	 {
	 	element = dequeue(&queue);
	 	printf("������ ����: %d \n",element);
	 	queue_print(&queue);
	 }
	 printf("ť�� ��������Դϴ�.\n");
	 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
