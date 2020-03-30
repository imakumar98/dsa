#include <iostream>


using namespace std;


struct Node {
    int data;
    struct Node *next;
};


class LinkedList 
{
    private:
        Node *head;
        Node *tail;

    public:
        LinkedList() 
        {
            head = NULL;
            tail = NULL;
        }
        void Add(int data)
        {
            Node *temp = new Node;
            temp->data = data;
            temp->next = NULL;
            
            if(head==NULL) 
            {
                head = temp;
                tail = temp;

            }else 
            {
                tail->next = temp;
                tail = tail->next;
            }
        }

        void Display()
        {
            Node *traverseNode = head;

            while(traverseNode!=NULL) 
            {
                cout<<traverseNode->data<<endl;
                traverseNode = traverseNode->next;
            }
        }

        int Count()
        {
            Node *traverseNode = head;

            int count = 0;

            while(traverseNode!=NULL)
            {
                count++;
                traverseNode = traverseNode->next;
            }

            return count;

        }

        int getMiddle()
        {
            Node *p1 = head;
            Node *p2 = head;

            while(p2!=NULL && p2->next!=NULL)
            {
                p2 = p2->next->next;
                p1 = p1->next;
            }

            return p1->data;
        }


        void reverse()
        {
            Node *prev = NULL;
            Node *curr = head;
            Node *next = NULL;

            while(curr!=NULL) 
            {
                next = curr->next;
                curr->next = prev;

                prev = curr;
                curr = next;

            }
            head = prev;

        }





};


int main() 
{
    LinkedList ll;
    ll.Add(10);
    ll.Add(20);
    ll.Add(30);
    ll.Add(40);
    ll.Add(50);

    

    


}