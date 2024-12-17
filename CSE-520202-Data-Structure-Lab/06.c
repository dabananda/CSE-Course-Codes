#include <stdio.h>
#define SIZE 3

typedef struct {
  int head, tail;
  int data[SIZE + 1];
} Queue;

void EnQueue(Queue *q, int n) {
  if ((q->tail + 1) % (SIZE + 1) == q->head) {
    printf("Queue overflow!\n");
    return;
  }
  q->data[q->tail] = n;
  q->tail = (q->tail + 1) % (SIZE + 1);
}

void DeQueue(Queue *q) {
  if (q->head == q->tail) {
    printf("Queue underflow!\n");
    return;
  }
  printf("Dequeue successfull: %d\n", q->data[q->head]);
  q->head = (q->head + 1) % (SIZE + 1);
}

int main() {
  Queue q;
  q.head = 0;
  q.tail = 0;
  while (1) {
    printf("1. Enqueue\n2. Dequeue\n3. Exit\n");
    printf("Chose an option (1/2/3): ");
    int option, x;
    scanf("%d", &option);
    switch (option) {
      case 1:
        printf("Enter an item: ");
        scanf("%d", &x);
        EnQueue(&q, x);
        break;

      case 2:
        DeQueue(&q);
        break;

      default:
        printf("Program has been terminated successfully!\n");
        exit(0);
    }
  }
  return 0;
}