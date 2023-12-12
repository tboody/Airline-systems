/* 
Using Structures, write a program to do the following:
Design structure templates to store data as follows:
Airline name, Flight number, Passenger surname, Seat number, destination, no of
bags
Using functions only, your program must:
a) Enter the travel information for 2 passengers
b) Display the data for each passenger

*/

#include <stdio.h>
#include <string.h>

struct pas1
{
    char airline_name[20];
    char flight_number[20];
    char passenger_name[50];
    char seat_number[30];
    char destination[20];
    int nombags;
};

void passenger(struct pas1[]);
void display(struct pas1[]);

int main()
{
    struct pas1 p[2];
    int i = 0;
    passenger(p);
    display(p);

    return 0;
}

void passenger(struct pas1 p[])
{
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        printf("Information for person %d\n", i + 1);
        printf("Enter your airline name: ");
        fgets(p[i].airline_name, sizeof(p[i].airline_name), stdin);
        printf("Enter your flight number: ");
        scanf("%s", p[i].flight_number);
        while (getchar() != '\n');
        printf("Enter your passenger name: ");
        fgets(p[i].passenger_name, sizeof(p[i].passenger_name), stdin);
        printf("Enter your seat number: ");
        fgets(p[i].seat_number, sizeof(p[i].seat_number), stdin);
        printf("Enter your destination: ");
        fgets(p[i].destination, sizeof(p[i].destination), stdin);
        printf("Enter the number of bags you have: ");
        scanf("%d", &(p[i].nombags));
        while (getchar() != '\n');
    }
}

void display(struct pas1 p[])
{
    int i = 0;
    for (i = 0; i < 2; i++)
    {
        printf("Printing the information of person %d\n", i + 1);
        printf("The airline name is: %s", p[i].airline_name);
        printf("The flight number is: %s\n", p[i].flight_number);
        printf("The passenger name is: %s", p[i].passenger_name);
        printf("The seat number is: %s", p[i].seat_number);
        printf("The final destination is: %s", p[i].destination);
        printf("The number of bags is: %d\n", p[i].nombags);
        printf("\n");
    }
}