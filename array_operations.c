#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void print(int *array,int size);
void sort(int *array,int size);
void del(int num,int *array,int *size);
void insert(int num,int index,int *array,int *size);
void search(int num,int *array,int size);
int main(){
int *array;int size;int opt,num,index;char c=1;
printf("enter the size of array: ");
scanf("%d",&size);
array=(int*)calloc(size,sizeof(int));
printf("\nenter array elements: ");
for(int i=0;i<size;i++)
scanf("%d",&array[i]);
while(c==1){

printf("select the operation to be carrayied out:\n\t\t1.insertion\n\t\t2.deletion\n\t\t3.search\n\t\t4.sort\n");
scanf("%d",&opt);
switch(opt){
case 1:{
system("cls");
printf("array before insertion:\n\n");
print(array,size);
printf("\n\n");
printf("enter the num to be insert and index num:  ");
scanf("%d%d",&num,&index);
insert(num,index,array,&size);
printf("\narray after insertion:\n");
break;
}
case 2:{
system("cls");
printf("array before deletion:\n\n");
print(array,size);
printf("\n\n");
printf("enter the num to be deleted:  ");
scanf("%d",&num);
del(num,array,&size);
printf("\narray after deletion:\n");
break;
}
case 3:{
   system("cls");
printf("array values are :\n\n");
print(array,size);
printf("\n\n");
printf("enter the num to be searched:   ");
scanf("%d",&num);
search(num,array,size);
return 0;
break;
}
case 4:{
system("cls");
printf("array before sorting:\n\n");
print(array,size);
printf("\n\n");
sort(array,size);
printf("\nthe sorted array :\n\n ");
break;
}
}

for(int i=0;i<size;i++)
printf("\n%d",array[i]);

printf("\n\npress 1 to continue?  :");
scanf("%d",&c);
}

return 0;
}
void insert(int num,int index,int *array,int *size){
array=(int*)realloc(array,(*size+1)*sizeof(int));
for(int i=*size+1;i>=index;i--)
array[i]=array[i-1];
array[index]=num;
*size+=1;
}
void del(int num,int *array,int *size){
int flag=0;
for(int i=0;i<*size;i++){
if(array[i]==num){
flag =1;
array[i]=array[i+1];
}
if(flag==1)
array[i]=array[i+1];
}
array=(int*)realloc(array,(*size-1)*sizeof(int));
*size-=1;
}
void search(int num,int *array,int size){
for(int i=0;i<size;i++){
if(array[i]==num)
 printf("%d is present in %d index",num,i);
}
}
void sort(int *array,int size){
int temp;
for(int i=0;i<size;i++){
for(int j=i+1;j<size;j++){
if(array[i]>array[j]){
temp=array[i];
array[i]=array[j];
array[j]=temp;

}
}
}
}

void print(int *array,int size){
for(int i=0;i<size;i++)
printf("\n%d",array[i]);
}
