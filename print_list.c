#include <stdlib.h>
#include <stdio.h>

struct ll_node
{
	struct ll_node *next;
	int counter;
    
};

#define NUM_NODES	8

int insert_node(struct ll_node** head_ptr, int counter)
{
	struct ll_node *temp_ptr = *head_ptr;
	struct ll_node* new_node = (struct ll_node*) malloc(sizeof(struct ll_node));

	new_node->counter = counter;
	new_node->next = NULL;

	if (*head_ptr == NULL) {
		*head_ptr = new_node; 
		return 0;
	}

	while (temp_ptr->next != NULL)
		temp_ptr = temp_ptr->next;

	temp_ptr->next = new_node;
	return 0;
}

int create_ll(struct ll_node** head_ptr)
{
	int i = 0;
	for (i = 0; i < NUM_NODES; i++) {
		insert_node(head_ptr, i*4);
	}
}

void print_ll(struct ll_node* node)
{
	printf("Linked list: \n");
    struct ll_node  *temp = node;
    while(temp!= NULL)
    {
        if(temp->next == NULL)
        {
            printf("%d" ,temp->counter);
        }
        else{
            printf("%d",temp->counter);
        }
        temp = temp->next;
    }
}

int count_ll_nodes(struct ll_node* head_ptr)
{
 struct ll_node *temp=head_ptr;
 int count=0;
 while(temp!=NULL)
 {
     temp=temp->next;
     count++;
 }
 printf("\n Total no. of nodes is : %d",count);
}

int main()
{
	struct ll_node* head = NULL;

	create_ll(&head);
	print_ll(head);
	int count = count_ll_nodes(head);

	return 0;
}