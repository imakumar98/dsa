#include <iostream>

using namespace std;


struct Node
{
    int data;
    struct Node *next;
};


class LinkedList
{
    private:
        Node *head;

    public:
        LinkedList()
        {
            head = NULL;
        }


        void Add(int data)
        {
            Node *newNode = new Node;
            newNode->data = data;
            newNode->next = NULL;

            if(head==NULL) 
            {
                head = newNode;
            }
            else 
            {
                Node *traverseNode = head;
                while(traverseNode->next!=NULL)
                {
                    traverseNode = traverseNode->next;
                }
                traverseNode->next = newNode;
            }
        }

        void Display()
        {
            Node *traverseNode = head;
            while(traverseNode!=NULL) 
            {
                cout<<traverseNode->data<<"->";
                traverseNode = traverseNode->next;
            }
            cout<<"NULL"<<endl;
        }

        int Middle()
        {
            Node *slow = head;
            Node *fast = head;

            while(fast->next!=NULL && fast!=NULL )
            {
              
                slow = slow->next;
                fast = fast->next->next;
            
            }
            return slow->data;
        }

        void Reverse()
        {
            Node *p = head;
            Node *q = NULL;
            Node *r = NULL;

            while(p!=NULL)
            {
                r = q;
                q = p;
                p = p->next;
                q->next = r;
            }
            head = q;

        }

        void ReverseRecursion(Node *q, Node *p)
        {
            if(p!=NULL){
                ReverseRecursion(p, p->next);
            }else{
                head = q;
            }
            return head;


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

    ll.Display();

    ll.Reverse();
    ll.Display();

    return 0;
}