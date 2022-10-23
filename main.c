#include <stdio.h>
#include <stdlib.h>
#define max 5
int dequeue[max],fron=-1,rear=-1,a,b;
void addfront(int a);
void addrear(int b);
void deletefront();
void deleterear();
void display();
void main(){
int ch,t,u;
printf("Menu program for performing dequeue operations");
printf("\n1.ADDFRONT  2.ADDREAR  3.DELETEFRONT  4.DELETEREAR  5.DISPLAY  6.EXIT");
while(1){
    printf("Enter your desired option");
    scanf("%d",&ch);
    switch(ch){
    case 1:printf("Enter the element to be added to the front");
           scanf("%d",&t);
           addfront(t);
           break;
    case 2:printf("Enter the element to be added to the rear");
           scanf("%d",&u);
           addrear(u);
           break;
    case 3:deletefront();
           break;
    case 4:deleterear();
           break;
    case 5:display();
           break;
    case 6:exit(0);
    default:printf("please reconsider your option");
    }
}
}
void create(){
    fron=-1;
    rear=-1;
}
void addfront(int a){
if((fron==0 && rear==max-1) || (fron==rear+1)){
    printf("Queue is already full");
}
else if(fron==-1 && rear==-1){

    rear++;
    fron++;
    dequeue[fron]=a;
}
else if(fron==0){
    fron=max-1;
    dequeue[fron]=a;
}
else{
    fron=fron-1;
    dequeue[fron]=a;
}
}
void addrear(int b){
if((fron==0 && rear==max-1) || (fron==rear+1)){
    printf("Queue is already full");
}
else if(fron==-1){
    fron++;
    rear++;
    dequeue[rear]=b;
}
else if(rear==max-1){
    rear=0;
    dequeue[rear]=b;
}
else{
    rear=rear+1;
    dequeue[rear]=b;
}
};
void deletefront(){
if((fron==-1) && (rear==-1)){
        printf("Queue is underflowing");
}
else if(fron==rear){
        fron=-1;
        rear=-1;
}
else if(fron==max-1){
   fron=0;
}
else
    fron=fron+1;
};
void deleterear(){
if(fron==-1 && rear==-1){
    printf("Dequeue is empty");

}
else if(fron==rear){
        fron=-1;
        rear=-1;
}
else if(rear==0){
    rear=max-1;
}
else
    rear=rear-1;
};
void display(){
 int i=fron;
 printf("\Elements in a dequeue are");
 while(i!=rear){
        printf("%d",dequeue[i]);
        i=(i+1)%max;
 }
 printf("%d",dequeue[rear]);
 }





