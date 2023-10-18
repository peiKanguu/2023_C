#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

// Node structure for student
typedef struct student {
    char name[20];
    long int id;
    struct student* next;
} student;

// Function to create a new node
student* createNode(char name[], long int id) {
    student* newNode = (student*)malloc(sizeof(student));
    strcpy(newNode->name, name);
    newNode->id = id;
    newNode->next = NULL;
    return newNode;
}

// Function to check if the queue is empty
bool isEmpty(Queue* queue) {
    return queue->front == NULL;
}

// Function to add a new student to the queue
void addStudent(student* tail, char name[], long int id) {
    student* newNode = createNode(name, id);
   
    newNode->next = tail;
    tail->next->next = temp;
    tail->next = temp;
    
}

// Function to remove a student from the queue
student* removeStudent(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return NULL;
    }
    else {
        student* removedStudent = queue->front;
        queue->front = queue->front->next;
        if (queue->front == NULL) {
            queue->rear = NULL;
        }
        return removedStudent;
    }
}

int main() {
    student* head = NULL;
    student* tail = NULL;

    head->next = tail;
    tail->next = head;

    // Add initial students to the queue
    addStudent(&queue, "Richardson", 797129);
    addStudent(&queue, "Ahmad", 761287);
    addStudent(&queue, "Jiqin", 824877);
    addStudent(&queue, "Hartono", 452888);

    // Two more students join the queue
    addStudent(&queue, "Samantha", 322654);
    addStudent(&queue, "Zimmerman", 255433);

    // Remove students from the queue and print their IDs
    while (!isEmpty(&queue)) {
        student* removedStudent = removeStudent(&queue);
        printf("Removed Student ID: %ld\n", removedStudent->id);
        free(removedStudent);
    }

    return 0;
}












//struct LLNode
//{
//	char name[20];
//	long int id;
//	struct LLNode* next;
//};
//
//struct LLNode* createNode(char val)
//{
//	struct LLNode* temp;
//	temp = (struct LLNode*)malloc(sizeof(struct LLNode));
//	temp->next = NULL;
//	temp->key = val;
//	return (temp);
//}
//
//void push(char val, struct LLNode* head)
//{
//	struct LLNode* temp;
//	temp = createNode(val);
//	temp->next = head->next;
//	head->next = temp;
//}
//
//char pop(struct LLNode* head)
//{
//	struct LLNode* temp;
//	char val;
//	val = head->next->key;
//	temp = head->next;
//	head->next = head->next->next;
//	free(temp);
//	return(val);
//}
//
//char nothing(struct LLNode* head, struct LLNode* tail)
//{
//	if (head->next == tail) // returns 1 if empty
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	char value;
//	struct LLNode* head = NULL;
//	struct LLNode* tail = NULL;
//	head = createNode('\0');
//	tail = createNode('\0');
//	head->next = tail;
//	printf("head->key = %c\n", head->key);
//	push('A', head);
//	printf("head->next->key = %c\n", head->next->key);
//	push('B', head);
//	printf("head->next->key = %c\n", head->next->key);
//	value = pop(head);
//	printf("The value pop = %c\n", value);
//	printf("head->next->key= %c\n", head->next->key);
//	value = pop(head);
//	printf("The value pop = %c\n", value);
//	printf("head->next->key= %c\n", head->next->key);
//	if (nothing(head, tail))
//		printf("The stack is empty");
//	return 0;
//}







//#include <stdio.h>
//#include <stdlib.h>
//
//// Node structure for doubly linked list
//struct Node {
//    char data;
//    struct Node* prev;
//    struct Node* next;
//};
//
//// Function to create a new node
//struct Node* createNode(char value) {
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    newNode->data = value;
//    newNode->prev = NULL;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// Function to add a new node towards the left of the given node
//void addNodeLeft(struct Node** current, char value) {
//    struct Node* newNode = createNode(value);
//
//    newNode->next = *current;
//    newNode->prev = (*current)->prev;
//    (*current)->prev = newNode;
//
//    if (newNode->prev != NULL)
//        newNode->prev->next = newNode;
//}
//
//// Function to add a new node towards the right of the given node
//void addNodeRight(struct Node** current, char value) {
//    struct Node* newNode = createNode(value);
//
//    newNode->prev = *current;
//    newNode->next = (*current)->next;
//    (*current)->next = newNode;
//
//    if (newNode->next != NULL)
//        newNode->next->prev = newNode;
//}
//
//// Function to display the doubly linked list from left to right
//void displayList(struct Node* head) {
//    struct Node* current = head;
//
//    printf("Node's value from left to right is: ");
//    while (current != NULL) {
//        printf("%c ", current->data);
//        current = current->next;
//    }
//    printf("\n");
//}
//
//int main() {
//    struct Node* head = NULL;   // Head pointer for the doubly linked list
//    struct Node* middle = NULL; // Middle node pointer
//
//    char initial;
//
//    printf("Enter initial value: ");
//    scanf(" %c", &initial);
//
//    // Create the middle node
//    middle = createNode(initial);
//    head = middle;
//
//    int choice;
//    char value;
//
//    while (1) {
//        printf("Add node towards [1] Left; [2] Right: ");
//        scanf("%d", &choice);
//
//        if (choice != 1 && choice != 2)
//            break;
//
//        printf("Enter value towards the %s: ", (choice == 1) ? "left" : "right");
//        scanf(" %c", &value);
//
//        if (choice == 1)
//            addNodeLeft(&middle, value);
//        else
//            addNodeRight(&middle, value);
//    }
//
//    displayList(head);
//
//    return 0;
//}


















//#include <stdio.h>
//#include <stdlib.h>
//
//struct Node {
//    char val;
//    struct Node* left;
//    struct Node* right;
//};
//
//struct Node* createNode(char value)
//{
//    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//    newNode->val = value;
//    newNode->left = NULL;
//    newNode->right = NULL;
//
//    return newNode;
//}
//
//void addNodeLeft(struct Node** current, char value)
//{
//    struct Node* newNode = createNode(value);
//
//    newNode->right = *current;
//    newNode->left = (*current)->left;
//    (*current)->left = newNode;
//
//    if (newNode->left != NULL)
//        newNode->left->right = newNode;
//}
//
//void addNodeRight(struct Node** current, char value)
//{
//    struct Node* newNode = createNode(value);
//
//    newNode->left = *current;
//    newNode->right = (*current)->right;
//    (*current)->right = newNode;
//
//    if (newNode->right != NULL)
//        newNode->right->left = newNode;
//}
//
//void displayList(struct Node* head) {
//    struct Node* current = head;
//
//    printf("Node's value from left to right is: ");
//    while (current != NULL) {
//        printf("%c ", current->val);
//        current = current->right;
//    }
//    printf("\n");
//}
//
//int main()
//{
//    struct Node* middle = NULL;
//    struct Node* head = NULL;
//
//    char init;
//    printf("Enter initial value:");
//    scanf(" %c", &init);
//
//    middle = createNode(init);
//    head = middle;
//
//    char value;
//    int choice;
//    while (1)
//    {
//        printf("Add node towards[1]Left;[2]Right:");
//        scanf("%d", &choice);
//
//        if (choice != 1 && choice != 2)
//            break;
//
//        if (choice == 1)
//        {
//            printf("Enter value towards the left: ");
//            scanf(" %c", &value);
//            addNodeLeft(&middle, value);
//        }
//        else
//        {
//            printf("Enter value towards the right: ");
//            scanf(" %c", &value);
//            addNodeRight(&middle, value);
//        }
//    }
//
//    displayList(head);
//
//
//    return 0;
//}


















//#include <stdio.h>
//#include <stdlib.h>
//
//// Define the structure for a node
//typedef struct Node {
//    char data;
//    struct Node* next;
//} Node;
//
//// Function to create a new node
//Node* createNode(char data) {
//    Node* newNode = (Node*)malloc(sizeof(Node));
//    newNode->data = data;
//    newNode->next = NULL;
//    return newNode;
//}
//
//// Function to initialize a circular linked list
//Node* initializeCircularLinkedList() {
//    // Create nodes A, B, C
//    Node* nodeA = createNode('A');
//    Node* nodeB = createNode('B');
//    Node* nodeC = createNode('C');
//
//    // Connect the nodes to form a circular linked list
//    nodeA->next = nodeB;
//    nodeB->next = nodeC;
//    nodeC->next = nodeA;
//
//    // Return the starting node (node A)
//    return nodeA;
//}
//
//// Function to display the circular linked list
//void displayCircularLinkedList(Node* start) {
//    if (start == NULL) {
//        printf("Circular linked list is empty.\n");
//        return;
//    }
//
//    Node* current = start;
//
//    do {
//        printf("%c ", current->data);
//        current = current->next;
//    } while (current != start);
//
//    printf("\n");
//}
//
//int main() {
//    Node* start = initializeCircularLinkedList();
//    displayCircularLinkedList(start);
//
//    return 0;
//}





