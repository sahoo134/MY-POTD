#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
};
void insertLL(struct node** s, int data) // insert new node at last
{
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    ptr -> data = data;
    ptr -> next = NULL;
    if(*s == NULL)
        *s = ptr;
    else
    {
        struct node* temp = *s;
        while(temp -> next)
        {
            temp = temp -> next;
        }
        temp -> next = ptr;
    }

}
void showLL(struct node* temp) // show all node
{
    while(temp)
    {
        printf("%d -> ",temp -> data);
        temp = temp -> next;
    }
}
int sizeLL(struct node* temp) // count of size of linklist
{
    int count = 0;
    while(temp)
    {
        count++;
        temp = temp -> next;
    }
    return count;
}


void convertCycleLL(struct node** temp) // convert the cyclelinklist
{
    int size = sizeLL(*temp);
    int n = 1 + rand() % size-1;
   printf("\n%d\n",n);
    struct node* ptr = *temp;
    while(n--)
        ptr = ptr -> next;
    struct node* ptr1 = ptr;

    while(ptr1->next)
        ptr1 = ptr1 -> next;
    ptr1->next = ptr;
}
int lengthCycle(struct node* slow) // calculate length of cycle linklist
{
    struct node* fast = slow;
    slow = slow -> next;
    fast = fast -> next -> next;
    while(fast != slow)
    {
        slow = slow -> next ;
        fast = fast -> next -> next;
    }
    int count=1;
    slow = slow -> next;
    while(fast != slow)
    {

        slow = slow -> next;
        count++;
    }
    return count;
}
void solvell(struct node* slow,int n) // solve the cycle problem
{
    struct node* fast = slow;
    while(n--)
    {
        fast = fast -> next;

    }
    while(slow != fast)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    slow -> next = NULL;
}
int main()
{
    struct node* s = NULL;
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        int a;
        scanf("%d",&a);
        insertLL(&s,a);
    }
    showLL(s);
    printf("\n");
    convertCycleLL(&s);

    int ll= lengthCycle(s);
    printf("%d\n",ll);
    solvell(s,ll);
    showLL(s);


}
