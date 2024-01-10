using namespace std;
#include <iostream>

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertHead(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insrtRandom(node *&head, int pos, int d)
{
    node *temp = head;
    int cnt = 1;

    if (pos == 1)
    {
        insertHead(temp, d);
    }

    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }

    node* midEle = new node(d);
    midEle->next = temp-> next;
    temp -> next = midEle;


}

void insertTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = tail->next;
}
void deleteEle(node* &head , int pos){
    node * prev = NULL;
    node* curr = head;
  
    int cnt = 1;

    while(cnt < pos){
         prev = curr;
        curr = curr -> next;
       
        cnt++;
    }

    prev -> next = curr -> next;

    curr -> next = NULL;
    delete curr;

}

void printll(node *&head)
{

    node *temp = head;
    while (temp != NULL)
    {

        cout << temp->data << "   ";
        temp = temp->next;
    }
}

int main()
{

    node *head = new node(100);
    node *tail = head;

    insertHead(head, 101);
    insertHead(head, 102);
    insertHead(head, 103);
    insertHead(head, 104);
    // printll(head);

    insertTail(tail, 99);
    //  printll(tail);
    insertTail(tail, 99);
    //  printll(tail);
    insertTail(tail, 99);
   

    insrtRandom(head, 4, 50);
    cout<<"before dletion"<<endl;
       printll(head);


    deleteEle(head , 4);
     cout<<"\n aftr dletion  ->";
         printll(head);

    return 0;
}