#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node* pre;
   struct node* next;

};
void insertDLL(struct node** hold, int data)
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> pre = NULL;
    ptr -> next  = NULL;
    if(*hold == NULL)
    {
        *hold = ptr;
    }
    else
    {
        struct node* temp = *hold;
        while(temp -> next)
        {
            temp = temp -> next;
        }
        temp -> next = ptr;
        ptr -> pre = temp;

    }
}
void showDLL(struct node* temp)
{
    while(temp)
    {
        printf("%d-> ",temp -> data);
        temp = temp -> next;
    }
}
struct node* add(struct node* num1, struct node* num2)
{
    struct node* new=NULL;
    while(num1->next)
        num1 = num1 -> next;
    while(num2->next)
        num2 = num2 -> next;
        int rem =0;
    while(num1 && num2)
    {
        int num = num1-> data + num2-> data + rem;
        insertDLL(&new,num%10);
        rem = num/10;
        num1 =num1 -> pre;
        num2 = num2 -> pre;
    }
    return new;

};
int main()
{
    struct node* start = NULL;
    int num ;
    scanf("%d",&num);

    while(num)
    {
        insertDLL(&start, num%10);
        num/=10;
    }
    showDLL(start);
      int num1 ;
    scanf("%d",&num1);

    while(num1)
    {
        insertDLL(&start, num1%10);
        num1/=10;
    }
    printf("\n");

    showDLL(num1);
    printf("\n");
    struct node* ptr = add(num,num1);
    showDLL(ptr);

}
