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

void createNewDataAtMiddle(int index, int number)
{
    Data *temp = head;
    int i = 0;
    int k = 0;
    if (head == NULL)
        printf("No Data!\n");
    else
    {
        while(temp != NULL)
        {
            if(index == i)
            {
                Data *temp1 = newNode(number);
                temp1->next = temp->next;
                temp->next = temp1;
                k++;
            }
            temp = temp->next;
            i++;
        }
        if (temp == NULL && k == 0)
        {
            printf("Out of range!\n");
        }
    }
}

void DeleteNode(int index)
{
    Data *temp = head;
    int i = 0;
    if (head == NULL)
        printf("No Data!\n");
    else
    {
        if (index == 0)
        {
            head = head ->next;
            free(temp);
            return;
        }
        while(temp != NULL)
        {
            if( (index > 0) && (index == (i + 1)) )
            {
                if(temp->next->next == NULL)
                {
                    Data *temp2 = temp->next;
                    temp->next = NULL;
                    free(temp2);
                    return;
                }
                Data *temp1 = temp->next;
                temp->next = temp->next->next;
                free(temp1);
                return;
            }
            temp = temp->next;
            i++;
        }
        if (temp == NULL && index > i )
        {
            printf("Out of range!\n");
        }
    }
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
    int k = 0;
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
                k++;
            }
                temp = temp->next;
                i++;
        }
        if (temp == NULL && k == 0)
        {
            printf("Cannot Find!\n");
        }
    }
}

int main()
{
    printf("[Linked List] - Singly Linked List \n");

    int choice, data, index;
    while(1)
    {
        printf("Choose the function you want :\n");
        printf("1. Add data at last\n");
        printf("2. Add data at first\n");
        printf("3. Add data at middle\n");
        printf("4. Print All data\n");
        printf("5. Find data\n");
        printf("6. Delete data\n");
        printf("7. Exit\n");
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
                printf("Input data: ");
                scanf("%d", &data);
                printf("Input index: ");
                scanf("%d", &index);
                createNewDataAtMiddle(index, data);
                break;
            case 4:
                printAllData(head);
                break;
            case 5:
                printf("Find data: ");
                scanf("%d", &data);
                findNode(data);
                break;
            case 6:
                printf("Input want to delete index: ");
                scanf("%d", &index);
                DeleteNode(index);
                break;
            case 7:
                exit(0);
            default:
                printf("Error!\n");
                break;
        }
        printf("\n");
    }

    return 0;
}
