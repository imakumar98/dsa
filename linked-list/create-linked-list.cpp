#include <iostream>

using namespace std;


struct Node {
    int data;
    struct Node *next;
};



class LinkedList 
{

    private:
        Node *head, *tail;

    public:
        LinkedList() 
        {
            head = NULL;
            tail = NULL;
        }


        void Add(int data) 
        {
            Node *tmp = new Node;
            tmp->data = data;
            tmp->next = NULL;

            if(head == NULL) 
            {
                head = tmp;
                tail = tmp;
            }else 
            {
                tail->next = tmp;
                tail = tail->next;
            }
        }


        void display() 
        {
            Node *temp;
            temp = head;

            while(temp !=NULL) {
                cout<<temp->data <<endl;
                temp = temp->next;
            }
        }

};



int main() 
{
    LinkedList ll;
    ll.Add(10);
    ll.Add(20);

    ll.display();
}
