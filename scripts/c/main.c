/* linked list in C */

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start,*rear,*newptr,*ptr,*save,*aftnode;
struct node* newnode(int n)
{
    ptr=(struct node *)malloc(sizeof(struct node));
    ptr->data=n;
    ptr->next=NULL;
    return ptr;
}
void insertnode(struct node *np)
{
    if(start==NULL)
        start=rear=np;
    else
    {
        rear->next=np;
        rear=np;
    }
}
void printlist(struct node *np)
{
    if(np==NULL)
        printf("empty list");
    else
    {
        while(np!=NULL)
        {
            printf("%d->\n",np->data);
            np=np->next;
        }
    }
}
void delnode(struct node *np,int b)
{
    if(np==NULL)
        printf("empty list");
    else
    {
    int i=1;
    while(np->next!=NULL)
    {
        if(i==b-1)
        {
            save=np;
            np=np->next;
            i++;
        }
        else if(i==b)
        {
            ptr=np;
            save->next=np->next;
            free(ptr);
            i++;
        }
        else
        {
            np=np->next;
            i++;
        }
    }
    }
}
void nodelocinsert(struct node *nnd,int l)
{
    struct node *np=start;
    int i=1;
    while(np->next!=NULL)
    {
        if(i==l-1)
        {
            save=np;
            np=np->next;
            i++;
        }
        else if(i==l+1)
        {
            aftnode=np;
            np=np->next;
            i++;
        }
        else
        {
            np=np->next;
            i++;
        }
    }
    save->next=nnd;
    nnd->next=aftnode;
}
int main()
{
    start=NULL;
    int x,info,i,loc,k=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&info);
        struct node *newptr=newnode(info);
        insertnode(newptr);
    }
    printlist(start);
    while(k==0)
    {
    printf("press 1 to input node\n");
    printf("press 2 to delete node\n");
    printf("press 3 to exit\n");
    int z;
    scanf("%d",&z);
    switch(z)
    {
        case 1 : printf("Enter value\n");
                 scanf("%d",&info);
                 printf("enter location\n");
                 scanf("%d",&loc);
                 struct node *newptr=newnode(info);
                 nodelocinsert(newptr,loc);
                 printlist(start);
                 break;
        case 2 : printf("Enter node to delete\n");
                 int y;
                 scanf("%d",&y);
                 delnode(start,y);
                 printlist(start);
                 break;
        case 3 : k=1;
                 break;
        default :printf("wrong choice\n");
    }
    }
    return 0;
}
