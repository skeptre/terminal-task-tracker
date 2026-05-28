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
    if (task_count >= MAX_TASKS) {
        printf("Task limit reached!\n");
        return;
    }
    strncpy(tasks[task_count].description, description, 99);
    tasks[task_count].description[99] = '\0';
    tasks[task_count].done = 0;
    task_count++;
}
void list_tasks(){
    for (int i = 0; i < task_count; i++) {
        printf("Task %d: %s\n", i + 1, tasks[i].description);
    }
}


int main(int argc, char *argv[]){
    printf("Task Tracker\n");
    add_task("Buy groceries");
    add_task("Finish project");
    list_tasks();
    printf("Total tasks: %d\n", task_count);
    return 0;
}