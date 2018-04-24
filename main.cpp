//Geeks For Geeks Practice For LinkedLists

#include <iostream>
#include <cstdlib>
using namespace std;

struct data{
    string name;
    float ID;
};
//data d;
struct Node{
    data d;
    struct Node* Next;  //Points to another Structure
};

void printList(struct Node* n){
    while(n != NULL){
        cout<<n->d.name<<" ";
        cout<<n->d.ID<<endl ;
        n = n->Next;
    }
}
int main()
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;

    // allocate 3 nodes in the heap
    head  = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third  = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));

    head->d.name = "Name0" ; //assign data in first node
    head->d.ID = 1 ;
    head->Next = second ; // Link first node with second

    second->d.name = "Name1" ;
    second->d.ID = 2 ; //assign data to second node
    second->Next = third;

    third->d.name = "Name2" ;
    third->d.ID = 3 ; //assign data to third node
    third->Next = fourth ;

    fourth->d.name = "Name3" ;
    fourth->d.ID = 4 ;       //assign data to fourth node
    fourth->Next = NULL ;

    struct Node* threeandhalf = NULL;
    threeandhalf->d.name = "Name1.5";
    threeandhalf->d.name = 3.5;
    threeandhalf->Next = fourth;
    third->Next = threeandhalf;

    printList(head) ;
    return 0 ;
}
