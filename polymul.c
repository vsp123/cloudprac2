#include<stdio.h>
struct Node
{
    int coeff;
    int pow;
    struct Node *next;
};
             
void create_node(int x, int y, struct Node **temp)
{
    struct Node *r, *z;
    z = *temp;
    if(z == NULL)
    {
        r =(struct Node*)malloc(sizeof(struct Node));
        r->coeff = x;
        r->pow = y;
        *temp = r;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
    else
    {
        r->coeff = x;
        r->pow = y;
        r->next = (struct Node*)malloc(sizeof(struct Node));
        r = r->next;
        r->next = NULL;
    }
}
 void polymul(struct node *poly1,struct node *poly2,struct node *poly)
 {
 	while(poly1->next!=NULL)
 	{
 		while(poly2->next!=null)
 		{
 			poly->coeff=poly1->coeff*poly2->coeff;
 			poly->pow=poly1->pow+poly->pow;
 			
		 }
	 }
 }
 
