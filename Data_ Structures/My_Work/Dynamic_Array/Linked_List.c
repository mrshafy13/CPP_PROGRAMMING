#include <stdio.h>


Node *create_node(int item, node *next)
{
    Node *new_node = (node *) malloc(sizeof(node));
    if(new_node == NULL)
    {
        printf("Failed to Create New Node\n");
        exit(1);
    }
    new_node -> data = item;
    new_node -> next = next;
}

int main()
{
    Node *n;
    n = create_node(10, NULL);
    printf<< ("data= %d \n",n->data);

    return 0;
}