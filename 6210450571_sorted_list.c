//6210450571 Nichanan Chatuparisutisin
#include <stdio.h> 
#include <stdlib.h> 

typedef struct node { 
   int data; 
   struct node *next; 
} Node; 
Node *head = NULL;
void insert_node(int x)
{
    Node *nw = malloc(sizeof(Node));
    Node *go;
    go = head;
    nw -> data = x;
    nw -> next = NULL;

    //first
    if (head==NULL)
    {
        head = nw;
        return;
    }
    //add front
    if (x <= head->data)
    {
        nw->next = head;
        head = nw;
        return;
    }
    else
    {   Node *future;
        future = head->next;
        //add back
        for (; go->next != NULL; go = go ->next)
        {   
            if ( x <= future->data)
            {
                nw->next = go->next;
                go->next = nw;
                return ;
            }
            future = future->next;
        }
        go->next = nw;
    }
}

void print_list()
{
    for (; head; head = head->next)
    printf("%d\n", head->data);
}

int main()
{
    int x;
    while (1)
    {
        scanf("%d",&x);
        if (x == -1){break;}
        insert_node(x);
    }
    print_list();
}