#include<iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
}*head;

createlist(int n)
{
    struct node *current, *newnode;
    head=(struct node*)malloc(sizeof(struct node));
    int i=0;
    if(head==NULL)
        cout << "Memory is full" <<endl;
    else{
        cout << "Enter the " << i+1 << "th value: ";
        cin >> head->data;
        current=head;

        for(i=1; i<n; i++)
        {
            newnode=(struct node*)malloc(sizeof(struct node));
             cout << "Enter the " << i+1 << "th value: ";
             cin >> newnode->data;
             newnode->next=NULL;
             current->next=newnode;
             current=newnode;
        }
    }
}

void display()
{
    struct node *current;
    current=head;
    cout << "All the values are: " << endl;
    while(current!=NULL)
    {
        cout << current->data << endl;
        current=current->next;
    }
}
int main()
{
    int n;
    cout << "Enter a number you want to take in linked list: ";
    cin >> n;
    createlist(n);
    display();
}
