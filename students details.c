#include<stdio.h>
struct student
{
    int roll_number;
    float cut_off;
    char name[50];
    char city[50];
    char dream[50];
};
void read_input(struct student s[],int count);
void display_output(struct student s[],int count);
int main
 {
    int count;
    printf("Enter the count of the students:");
    scanf("%d" ,&count);
    struct student s [count];
        read_input(s,count);
        display_output(s,count);
    return 0;    
 }
void read_input(struct student s[],int count)
{
    int counter=1, i;
    for(i=0;i<count;i++)
    {
        printf("\nEnter the %dstudents details: ");
        printf("\nEnter the name:");
        scanf("%s", s[i].name);
        printf("\nEnter the roll_number:");
        scanf("%d", &s[i].roll_number);
        printf("\nEnter the cut_off:");
        scanf("%1f", &s[i].cut_off);
        printf("\nEnter the residential address:");
        scanf("%s", s[i].city);
        printf("\nEnter the student's dream:");
        scanf("%s", s[i].dream);
        counter++;

    }
 }
void display_output(struct student s[],int count)
 {
    int counter=1, i;
    for(i=0;i<count;i++)
    {
        printf("\nEnter the %d students details:");
        printf("\nEnter the name:");
        scanf("%s", s[i].name);
        printf("\nEnter the roll_number:");
        scanf("%d", &s[i].roll_number);
        printf("\nEnter the cut_off:");
        scanf("%1f", &s[i].cut_off);
        printf("\nEnter the residential address: ");
        scanf("%s", s[i].city);
        printf("\nEnter the student's dream:");
        scanf("%s", s[i].dream);
        counter++;
    }
}