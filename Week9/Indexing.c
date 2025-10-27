#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

typedef struct SinglyLinkedList {
    unsigned int count;
    DataNode* head;
} SinglyLinkedList;

DataNode* createDataNode(char* data);
SinglyLinkedList* createSinglyLinkedList();
void traverse(SinglyLinkedList* list, int index);
void insert_last(SinglyLinkedList* list, char* data);

int main() {
    SinglyLinkedList* mylist = createSinglyLinkedList();
    char food[21];
    char data[101];
    int index;
    
    scanf(" %[^\n]", food);
    while (strcmp(food, "Last") != 0) {
        insert_last(mylist, data);
        scanf(" %[^\n]", food);
    }
    
    scanf("%d", &index);
    traverse(mylist, index);

    // Remember to free allocated memory for each node's data
    DataNode *current = mylist->head;
    while (current != NULL) {
        free(current->data);
        DataNode* temp = current;
        current = current->next;
        free(temp);
    }
    free(mylist);
    return 0;
}

DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));

    newNode->data = (char*)malloc(strlen(data)+1);
    strcpy(newNode->data, data);

    newNode->next = NULL;

    return newNode;
}

SinglyLinkedList* createSinglyLinkedList() {
    SinglyLinkedList* new_list = (SinglyLinkedList*)malloc(sizeof(SinglyLinkedList));
    new_list->count = 0;
    new_list->head = NULL;
    return new_list;
}

void traverse(SinglyLinkedList* list, int index) {
    int ct = 0;
    if (list->count == 0) {
        printf("This is an empty list.\n");
        return;
    }
    DataNode* ptr = list->head;
    while (ptr->next != NULL){
        if (ct == index) {
            printf("%s", ptr->data);
            break;
        }
        ptr = ptr->next;
        ct++;
    }
}

void insert_last(SinglyLinkedList* list, char* data) {
    DataNode* pNew = createDataNode(data);
    if (list->count == 0){
        list->head = pNew;
    } else {
        DataNode* ptr = list->head;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = pNew;
    }
    list->count++;
}
