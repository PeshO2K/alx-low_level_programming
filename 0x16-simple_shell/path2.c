#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char *data;
    struct node *next;
} Node;

Node *build_path_list() {
    Node *head = NULL;
    Node *tail = NULL;
    char *path = getenv("PATH");
    if (path == NULL) {
        return NULL;
    }
    char *token = strtok(path, ":");
    while (token != NULL) {
        Node *new_node = malloc(sizeof(Node));
        new_node->data = token;
        new_node->next = NULL;
        if (head == NULL) {
            head = new_node;
            tail = new_node;
        } else {
            tail->next = new_node;
            tail = new_node;
        }
        token = strtok(NULL, ":");
    }
    return head;
}

void print_list(Node *head) {
    Node *current = head;
    while (current != NULL) {
        printf("%s\n", current->data);
        current = current->next;
    }
}

int main() {
    Node *path_list = build_path_list();
    print_list(path_list);
    return 0;
}

