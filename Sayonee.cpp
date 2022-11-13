#include<iostream>
using namespace std;

struct node{
    char name[100];
    int id;
    float cgpa;
    struct node *next;
}*head;

createlist(int n)
{
    int i=0;
    struct node *current, *newnode;
    head=(struct node*)malloc(sizeof(struct node));
    cout << "Input the information of student " << i+1 << " :" << endl;
    cout << "Enter the name: ";
    cin >> head->name;
    cout << "Enter the id: ";
    cin >> head->id;
    cout << "Enter the cgpa: ";
    cin >> head->cgpa;
    current=head;
    cout << endl;
    for(int i=1; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        cout << "Input the information of student " << i+1 << " :" << endl;
        cout << "Enter the name: ";
        cin >> newnode->name;
        cout << "Enter the id: ";
        cin >> newnode->id;
        cout << "Enter the cgpa: ";
        cin >> newnode->cgpa;

        newnode->next=NULL;
        current->next=newnode;
        current=newnode;

        cout << endl;
    }
}

void displaylist()
{
    struct node *current;
    current=head;
    cout << "                           Information of all students are: " << endl;
    cout << endl;
    int i =1;
    while(current!=NULL)
    {
        cout << "For student: " << i << endl;
        cout << endl;
        cout << "Name is: " << current->name << endl;
        cout << "Id is: " << current->id << endl;
        cout << "CGPA is: " << current->cgpa << endl;
        current=current->next;
        i++;
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of students you want to list in the Student Information Management: ";
    cin >> n;
    cout << endl;
    createlist(n);
    displaylist();

    return 0;
}
