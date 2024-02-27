

typedef struct {
	 NodePtr headPtr,tailPtr;
	int size;
}Queue;


void enqueue_struct(Queue* q, int x ,int y){
  Node *new_node=(Node*) malloc(sizeof(Node));
if(new_node){ 
  new_node->order_number=x;
  new_node->data=y;
  if(q->size==0)
    q->headPtr=new_node;
  else q->tailPtr->nextPtr=new_node;
  q->tailPtr=new_node;
  q->size++;
 }
}


int dequeue_struct(Queue *q){
  NodePtr t=q->headPtr;
  int cash,price;
  if(t){
  int value= t->order_number;
  switch(value){
    case 1: 
      printf("Ramen\n");
      price = 100*(t->data);
      printf("You have to pay %d\n",price);
      while(1){
        printf("cash : ");
        scanf("%d",&cash);
        if(price==cash) {
          printf("Thank you\n");
          break;
        }
        if(price<cash)
        {
          printf("Thank you\n");
          printf("Change is %d\n",cash-price);
          break;
        }
      }
      break;
    case 2: 
      printf("Somtum\n");
      price = 20*(t->data);
      printf("You have to pay %d\n",price);
      while(1){
        printf("cash : ");
        scanf("%d",&cash);
        if(price==cash) {
          printf("Thank you\n");
          break;
        }
        if(price<cash)
        {
          printf("Thank you\n");
          printf("Change is %d\n",cash-price);
          break;
        }
      }
      break;
    case 3: 
      printf("Fried Chicken\n");
      price = 50*(t->data);
      printf("You have to pay %d\n",price);
      while(1){
        printf("cash : ");
        scanf("%d",&cash);
        if(price==cash) {
          printf("Thank you\n");
          break;
        }
        if(price<cash)
        {
          printf("Thank you\n");
          printf("Change is %d\n",cash-price);
          break;
        }
      }
      break;
  }
  q->headPtr=t->nextPtr;
  if(q->size==1) 
    q->tailPtr=NULL;
  q->size--;
  free(t);
  return value;

  }
  printf("Empty queue\n");
  return 0;
}

