using namespace std;
#include<iostream>

class node{
    int data;
    node *next;
    public : void append(int  , node **);
    void display( node *start);

};

void node :: append(int x , node ** start){

    if(*start == NULL){
        cout<<"list is empty";
        node *temp;

        temp = new node;
        temp->data=x;

        temp->next=NULL;
        *start = temp;
    }
    else{
          cout<<"list has element"<<endl;
        node *temp , *temp1;
        temp1 = *start;
        temp = new node;
        temp->data=x;
        temp->next=NULL;
        while(temp1->next != NULL){
              cout<<"loop element"<<endl;
            temp1 = temp1->next;
        }
         temp1 = temp->next;

    }

}
void node :: display( node *start){

    while(start != NULL){
        cout<<start->data<<"-";
        start = start->next;
    }

}

int main(){

    node n , *start = NULL;

    n.append(10,&start);
    n.append(20,&start);
    n.append(30,&start);

    n.display(start);


    return 0;
}