struct Node {
int data;
struct Node *prev, *next;
};


void insertEnd(struct Node** head, int data) {
struct Node* newNode = malloc(sizeof(struct Node));
newNode->data = data;
newNode->next = NULL;


if(*head == NULL) {
newNode->prev = NULL;
*head = newNode;
return;
}
struct Node* temp = *head;
while(temp->next != NULL)
temp = temp->next;
temp->next = newNode;
newNode->prev = temp;
}
//Delete All Nodes (Recursive)
void deleteAll(struct Node* node) {
if(node == NULL) return;
deleteAll(node->next);
free(node);
}
