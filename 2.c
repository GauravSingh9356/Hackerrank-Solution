#include<stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;
int insert(int item);
int delete();
int display();
int main()
{   
    int val;
    int item;
    int key=1;
  
    int choice;
    
    while(key)
    {
          printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
          scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            printf("Enter the value\n");
            scanf("%d",&item);
            insert(item);
            break;
            case 2:
            val=delete();
            printf("%d is deleted\n",val);
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Thanks for Using our Queue System!!\nSee you soon!!");
            key=0;
            break;

        }
    }
    
    return 0;
}
int insert(int item)
{
    struct node *temp;
    if(front==NULL && rear==NULL)
    {
        temp=malloc(sizeof(struct node));
        temp->info=item;
        temp->next=NULL;
        front=temp;
        rear=temp;
    }
    else 
    {
        temp=malloc(sizeof(struct node));
        temp->info=item;
         rear->next=temp;
         rear=temp;
        temp->next=NULL;
       
    }
    return 0;

}
int delete()
{
    int x;
    if(front==NULL)
    {
        printf("Underflow!!");
        exit(0);
    }
    else if(front->next==NULL)
    {
        
        x=front->info;
        front=NULL;
        rear=NULL;
        return x;

    }
    else{
         x=front->info;
        front=front->next;
        return x;

    }
}
int display()
{
struct node *temp;
temp=front;
while(temp!=NULL)
{
    printf("%d\t",temp->info);
    temp=temp->next;
}
return 0;
}