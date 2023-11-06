#include<stdio.h>
#include<stdbool.h>
#define MAX_SIZE 100
int dequeue[MAX_SIZE];
int front=-1;
int rear=-1;
bool is_empty(){
    return front== -1;
}
bool is_full(){
    return (front==0 && rear==MAX_SIZE-1)||(front==rear+1);
}
void insert_front(int value){
    if(is_full()){
        printf("Queue is full. Cannot insert %d at the front.\n",value);
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if(front==0){
        front=MAX_SIZE-1;
    }
    else{
        front--;
    }
    dequeue[front]=value;
    printf("%d inserted at the front\n",value);
}
void insert_rear(int value){
    if(is_full()){
        printf("Queue is full. Cannot insert %d at the front.\n",value);
        return;
    }
    if(front==-1){
        front=rear=0;
    }
    else if(rear==MAX_SIZE-1){
        rear=0;;
    }
    else{
        rear++;
    }
    dequeue[rear]=value;
    printf("%d inserted at the rear\n",value);
}
int delete_front(){
    if(is_empty()){
        printf("Queue is empty. Cannot delete from the front.\n");
        return -1;
    }
    int value=dequeue[front];
    if(front==rear){
        front=rear=-1;
    }
    else if(front==MAX_SIZE-1){
        front=0;
    }
    else{
        front++;
    }
    return value;
}
int delete_rear(){
    if(is_empty()){
        printf("Queue is empty. Cannot delete from the front.\n");
        return -1;
    }
    int value=dequeue[rear];
    if(front==rear){
        front=rear=-1;
    }
    else if(rear==0){
        rear=MAX_SIZE-1;
    }
    else{
        rear--;
    }
    return value;
}
void display() {
    if (is_empty()) {
        printf("Queue is empty.\n");
        return;
    }

    int i;
    if (front <= rear) {
        for (i = front; i <= rear; i++) {
            printf("%d ", dequeue[i]);
        }
    } else {
        for (i = front; i < MAX_SIZE; i++) {
            printf("%d ", dequeue[i]);
        }
        for (i = 0; i <= rear; i++) {
            printf("%d ", dequeue[i]);
        }
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n1. Insert at front\n2. Insert at rear\n3. Delete from front\n4. Delete from rear\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert at the front: ");
                scanf("%d", &value);
                insert_front(value);
                break;
            case 2:
                printf("Enter the value to insert at the rear: ");
                scanf("%d", &value);
                insert_rear(value);
                break;
            case 3:
                value = delete_front();
                if (value != -1) {
                    printf("%d deleted from the front.\n", value);
                }
                break;
            case 4:
                value = delete_rear();
                if (value != -1) {
                    printf("%d deleted from the rear.\n", value);
                }
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
