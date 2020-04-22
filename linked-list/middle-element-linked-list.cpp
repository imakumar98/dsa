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

            cout<<"I am running";

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

    int value = ll.Middle();

    cout<<"Middle value is : "<<value;

    return 0;
}