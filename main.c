#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Node.h"

#include "Queue.h"

int main(int argc , char **argv) {
  NodePtr headPtr=NULL;
  NodePtr tailPtr=NULL;
  
  /*int y;
  enqueue(&headPtr,&tailPtr,5);
  y=dequeue(&headPtr,&tailPtr);
  printf("%d\n",y);

  enqueue(&headPtr,&tailPtr,9);
  y=dequeue(&headPtr,&tailPtr);
  printf("%d\n",y);

  enqueue(&headPtr,&tailPtr,7);
  y=dequeue(&headPtr,&tailPtr);
  printf("%d\n",y);

  enqueue(&headPtr,&tailPtr,8);

  enqueue(&headPtr,&tailPtr,2);
  y=dequeue(&headPtr,&tailPtr);
  printf("%d\n",y);
*/
//5 x 9 x 7 x 8 2 x


//For struct Queue
  Queue  q;
   q. headPtr=NULL;
   q.tailPtr=NULL;
   q.size=0;

  //enqueue_struct(&q,5);
  //printf("%d\n",dequeue_struct(&q)); 

int i,x,a=0; 

for(i=1;i<argc;i++){
        if(strcmp(argv[i],"x")==0){
          if(q.size!=0){
            a++;
            printf("Customer number : %d\n",a);
            x=dequeue_struct(&q);
            //printf("dequeing %d\n",x);
          }
          else {
            dequeue_struct(&q);
            
          }
        }
        else 
        {
          enqueue_struct(&q, atoi(argv[i]),atoi(argv[i+1]));
           
          printf("My order is : %d\n",atoi(argv[i]));
          
          i++;
        }
        
 }
 
  return 0;
}
