///Static Implementation Of Queue Using Array.

#include<stdio.h>
#include<conio.h>

#define MAX 5

int Queue[MAX];
int Rear = 0;
int Front = 0;

int Is_Queue_Full()
{
    if(Rear == MAX)
    {
        return 1;
    }
    return 0;
}

int Is_Queue_Empty()
{
    if(Front == Rear)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Enqueue(int No)
{
    if(Is_Queue_Full())
    {
        printf("\n Queue is Already Full Can not Enqueue any Element.");
    }
    else
    {
        Queue[Rear] = No;
        Rear++;

        printf("\n\n %d Enqued Successfully",No);
    }
    return;
}

void Dequeue()
{
    if(Is_Queue_Empty())
    {
        printf("\n Queue Already Empty, Can not Dequeue Any Element!!!");
    }
    else
    {
        printf("\n\n Element Deleted is = %d",Queue[Front]);
        Queue[Front] = 0;
        Front++;
    }
    return;
}

void Display_Queue()
{
    if(Is_Queue_Empty())
    {
        printf("\n Queue Already Empty.Can not Display any Element !!!");
    }
    else
    {
        int i = 0;
        printf("\n\n Elements I Queue are => \n\t\t");

        for(i = 0;i<Rear; i++)
        {
            printf("\t |%d|",Queue[i]);
        }
    }
    return 0;
}

int Count_Queue_Elements()
{
    return Rear - Front;
}

int main()
{
    Enqueue(21);
    Enqueue(51);

    printf("\n\n Elements Count in Queue = %d",Count_Queue_Elements());

    getch();

    Display_Queue();

    Dequeue();
    Dequeue();
    Dequeue();

    getch();

    Enqueue(111);
    Enqueue(251);
    Enqueue(210);
    Enqueue(510);
    Enqueue(201);
    Enqueue(501);

    printf("\n\n Element Count in Queue = %d",Count_Queue_Elements());

    getch();
    Display_Queue();
    return 0;
}
