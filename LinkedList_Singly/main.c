#include <stdio.h>
#include <stdlib.h>

typedef struct data{
    int number;
    struct data *next;
}Data;

Data* head = NULL;

Data* newNode(int number)
{
    Data *temp = (Data*)malloc(sizeof(Data));
    if(temp == NULL)
        return -1;
    temp->number = number;
    temp->next = NULL;
    return temp;
}

void createNewDataAtLast(int number)
{
    Data *temp = head;
    if (temp == NULL)
    {
        head = newNode(number);
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode(number);
    }
}

void createNewDataAtFirst(int number)
{
    Data *temp = head;
    head = newNode(number);
    head->next = temp;
}

void printAllData(Data* start)
{
    if (start == NULL)
    {
        printf("No Data!\n");
    }
    else
    {
        printf("Data: ");
        while(start->next != NULL)
        {
            printf("%d ", start->number);
            start = start->next;
        }
        printf("%d \n", start->number);
    }
}

void findNode(int number)
{
    Data *temp = head;
    int i = 0;
    if (temp == NULL)
    {
        printf("No Data!\n");
    }
    else
    {
        while(temp != NULL)
        {
            if(number == temp->number)
            {
                printf("Find on index %d\n", i);
            }
                temp = temp->next;
                i++;
        }
    }
}

int main()
{
    printf("[Linked List] - Singly Linked List \n");

    int choice, data;
    while(1)
    {
        printf("Choose the function you want :\n");
        printf("1. Add data at last\n");
        printf("2. Add data at first\n");
        printf("3. Print All datas\n");
        printf("4. Find data\n");
        printf("5. Exit\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Input data: ");
                scanf("%d", &data);
                createNewDataAtLast(data);
                break;
            case 2:
                printf("Input data: ");
                scanf("%d", &data);
                createNewDataAtFirst(data);
                break;
            case 3:
                printAllData(head);
                break;
            case 4:
                printf("Find data: ");
                scanf("%d", &data);
                findNode(data);
                break;
            case 5:
                exit(0);
            default:
                printf("Error!\n");
                break;
        }
        printf("\n");
    }

    return 0;
}
