#include<stdio.h>
int arr[5];
static int top=-1;
int isFull(){
	if(top==4)
	return 1;
	return 0;
}
int isEmpty(){
	if(top==-1)
	return 1;
	return 0;
}
void print(){
	printf(" the stack values are :");
	if(top==-1){
		printf(" there is no elements in stack.");
	}
	else{
	for(int i=0;i<=top;i++)
	 printf("  %d",arr[i]);
}
}
void return_top(){
printf("the top pointer value is %d",top);
}
void push(int num){
	if(isFull()){
		printf("the stack is already full so pushing num is not possible");
	}
	else{
	top+=1;
	arr[top]=num;
	printf("\nafter push");
   	print();
}
}
void pop(){
	if(isEmpty()){
		printf("the stak is empty so no popping of num is possible");
	}
	else{
		printf("\nbefor pop");
		print();
		printf("\nnumber %d is popped out ",arr[top]);
		top-=1;
		printf("\n after pop");
		print();
	}
}
int main(){
   int n,choice,itr=1;
do{
   printf("the stack operations are :\n\t\t1.push\n\t\t2.pop\n\t\t3.Display\n\t\t4.Return Top\n\t\tyour choice :  ");
   scanf("%d",&choice);
   switch(choice){
   	case 1:{
   		printf("\n\nenter number to be pushed :");
   		scanf("%d",&n);
   		push(n);
		break;
	   }
	case 2:{
		pop();
		break;
	}
	case 3:{
		print();
		break;
	}
case 4:{
             return_top();
           break;
}

	default:
		printf("enter correct choice :");
   }
   printf("\n\ndo you want to continue press 1 ? : ");
   scanf("%d",&itr);
}while(itr==1);
	
	return 0;
}
