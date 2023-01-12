#include<iostream>
using namespace std;
class BankinQ
{
    int arr[105];
    int front=-1;
    int rear=-1;
public:
bool isEmpty()
{
  if(front==-1&&rear==-1)
        return true;
  else
    return false;
}
bool isFull()
{
    if(rear == 100-1)
        {
            return true;
        }
        else
        {
            return false;
        }
}
void restructure()
{
    for(int j=1; j<=rear;j++)
    {
        int key = arr[j];
        int i=j-1;
        while(i>=0 && key>arr[i])
        {
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}
void enqueue(int age)
{
    if(isFull()== true)
        {
            cout<<"QUEUE IS FULL!\n";
        }
        else if( isEmpty()== true)
        {
            front=rear=0;
            arr[rear]=age;
        }
        else
        {
            rear++;
            arr[rear]=age;
        }
        restructure();
}
void completeserve()
{
    if(isEmpty()==true)
        {
            cout<<"STACK IS EMPTY;";
        }
        else if(front==rear)
        {
            front=rear=-1;
        }
        else
        {
            front++;
        }

}
void getFirstMember()
{
    int first =arr[front];
    cout<<"Age of the first person: "<<first;
}
void showQ()
{
    for(int i = front;i<=rear;i++)
        {
            cout<<arr[i]<<endl;
        }
}
};
int main()
{
    BankinQ q;
    int n,age;
    char ch='y';
    while(ch=='Y'||ch=='y')
    {
    cout<<"What do you want to do?\n1. Enqueue person in the standing line\n2. Complete Serving a person from the standing line \n3. Display the age of first person to get served \n4. Show age of every person from standing line.\n";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"Enter the age of the person to enqueue: \n";
        cin>>age;
        q.enqueue(age);
        break;
    case 2:
        q.completeserve();
        break;
    case 3:
        q.getFirstMember();
        break;
    case 4:
        q.showQ();
        break;
    default:
        cout<<"Invalid Input\n";
    }
    cout<<"Do you wanna continue?(y/n)\n";
    cin>>ch;
    }
}
