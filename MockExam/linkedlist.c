#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct DataNode {
    char* data;
    struct DataNode* next;
} DataNode;

DataNode* createDataNode(char* data);

DataNode* createDataNode(char* data) {
    DataNode* newNode = (DataNode*)malloc(sizeof(DataNode));

    newNode->data = (char*)malloc(strlen(data)+1);
    strcpy(newNode->data, data);

    newNode->next = NULL;
    return newNode;
}

int main() {
    
    return 0;
}