#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100

typedef struct {
    char description[100];
    int done;
} Task;

Task tasks[MAX_TASKS];
int task_count = 0;

void add_task(char description[]){
    strncpy(tasks[task_count].description, description, 100);
    tasks[task_count].done = 0;
    task_count++;
}


int main(int argc, char *argv[]){
    printf("Task Tracker\n");
    add_task("Buy groceries");
    add_task("Finish project");
    printf("Total tasks: %d\n", task_count);
    return 0;
}