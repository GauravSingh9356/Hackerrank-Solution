#include<stdio.h>
struct node{
    int info;
    struct node *next;
}
struct node *front=NULL;
struct node *rear=NULL;
int insert(int item);
int delete();
int display()
int main()
{   
    int val;
    int item;
    int key=1;
    printf("1.Insert\n2.Delete\n3.Exit\n");
    int choice;
    scanf("%d",&choice);
    while(key)
    {
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
    if(front==rear==NULL)
    {
        temp=malloc(sizeof(struct node));
        temp->info=item;
        temp->next=NULL;
        start=temp;
        rear=temp;
    }
    else 
    {
        temp=malloc(sizeof(struct node));
        temp->info=item;
         rear->next=temp;
        temp->next=NULL;
       
    }
    return 0;

}
int delete()
{
    int x;
    if(front==rear==NULL)
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