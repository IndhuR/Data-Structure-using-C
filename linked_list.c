#include<stdio.h>
#include<stdlib.h>
struct node{
	int element;
	struct node *next;
};
static struct node *current;
static struct node *head;
void add(int n){
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->next=NULL;
	if(current!=NULL){
	current->next=temp;
	current=temp;
	current->element=n;
}
else{
head=temp;
current=head;
current->element=n;
}	
}
void itr(){
	struct node *iter=head;
	struct node* temp;
	while(iter!=NULL){
		printf("%d\n",iter->element);
		iter = iter->next;
	}
}
void insert(int num,int position){
	struct node *temp;
	struct node *bu;
	struct node *iter=head;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->element=num;
	for(int i=0;i<position;i++){
		bu=iter;
		iter=iter->next;
	}
		bu->next=temp;
		temp->next=iter;
	if(temp->next==NULL)
	current=temp;
}
void del(int num){
	struct node *iter=head,*bf;
	while(iter!=NULL){
		bf=iter;
		iter=iter->next;
		if(iter->element==num||bf->element==num){
			if(bf->element==num)
			head=iter;
			bf->next=iter->next;
			break;
		}
	}
}
int main(){
    int num,pos;
    do{
    printf("operations available:\n\t\t1.add\n\t\t2.insertion\n\t\t3.deletion\n\t\t4.traversal\nyour choice : ");
    scanf("%d",&num);
    switch(num){
    	case 1:{
    		printf("\n\nenter the number to be added to list : ");
    		scanf("%d",&num);
    		add(num);
			break;
		}
		case 2:{
			printf("\n\nenter the element an position of insertion : ");
			scanf("%d%d",&num,&pos);
			insert(num,pos);
			break;
		}
		case 3:{
			printf("\n\nenter the number to be deleted : ");
			scanf("%d",&num);
			del(num);
			break;
		}
		case 4:{
			printf("\n\nthe list values are:\n");
			itr();
			break;
		}
	}
	printf("enter 1 to continue ......");
	scanf("%d",&pos);
}while(pos==1);
	return 0;
    
}
