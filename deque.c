#define size 5
#include <stdio.h>  
    int deque[size];  
    int f=-1, r=-1;  
    void enqueue_front(int x)  
    {  
    if((f==0 && r==size-1) || (f==r+1))  
        {  
            printf("deque is full");  
        }  
    else if((f==-1) && (r==-1))  
        {  
            f=r=0;  
            deque[f]=x;  
        }  
    else if(f==0)  
        {  
            f=size-1;  
            deque[f]=x;  
        }  
    else  
        {  
            f=f-1;  
            deque[f]=x;  
        }  
    }  
    void enqueue_rear(int x)  
    {  
    if((f==0 && r==size-1) || (f==r+1))  
        {  
            printf("deque is full");  
        }  
    else if((f==-1) && (r==-1))  
        {  
            r=0;  
            deque[r]=x;  
        }  
    else if(r==size-1)  
        {  
            r=0;  
            deque[r]=x;  
        }  
    else  
        {  
            r++;  
            deque[r]=x;  
        }  
     
    }
    void display()  
    {  
        int i=f;  
        printf("\n Elements in a deque : ");  
         
    while(i!=r)  
        {  
            printf("%d ",deque[i]);  
            i=(i+1)%size;  
        }  
         printf("%d",deque[r]);  
    }  
    void getfront()  
    {  
    if((f==-1) && (r==-1))  
        {  
            printf("Deque is empty");  
        }  
    else  
        {  
            printf("\nThe value of the front is: %d", deque[f]);  
        }  
         
    }  
    void getrear()  
    {  
    if((f==-1) && (r==-1))  
        {  
            printf("Deque is empty");  
        }  
    else  
        {  
            printf("\nThe value of the rear is: %d", deque[r]);  
        }  
         
    }  
    void dequeue_front()  
    {  
    if((f==-1) && (r==-1))  
        {  
            printf("Deque is empty");  
        }  
    else if(f==r)  
        {  
            printf("\nThe deleted element is %d", deque[f]);  
            f=-1;  
            r=-1;  
             
        }  
     else if(f==(size-1))  
         {  
             printf("\nThe deleted element is %d", deque[f]);  
             f=0;  
         }  
     else  
         {  
              printf("\nThe deleted element is %d", deque[f]);  
              f=f+1;  
         }  
    }  
    void dequeue_rear()  
    {  
    if((f==-1) && (r==-1))  
        {  
            printf("Deque is empty");  
        }  
   else if(f==r)  
       {  
            printf("\nThe deleted element is %d", deque[r]);  
            f=-1;  
            r=-1;  
             
        }  
   else if(r==0)  
         {  
             printf("\nThe deleted element is %d", deque[r]);  
             r=size-1;  
         }  
   else  
         {  
              printf("\nThe deleted element is %d", deque[r]);  
              r=r-1;  
         }  
    }  
     
    int main()  
    {  
     
        enqueue_front(2);  
     
        enqueue_front(1);  
     
        enqueue_rear(3);  
     
        enqueue_rear(5);  
     
        enqueue_rear(8);  
     
        display();  
   
        getfront();  
   
        getrear();  
   
    dequeue_front();  
   
    dequeue_rear();  
     
     display();  
        return 0;  
    }