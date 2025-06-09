#include <iostream>
using namespace std;

struct listn{
    int data;
    struct listn*next;
};
typedef struct listn listN;
void create(listN*ptr,int n){
    while(n>0){
        cout<<"Enter the number: ";
        cin>>ptr->data;
        if(n-1>0){
            ptr->next=new listN;
            ptr=ptr->next;
        }
        else{
            ptr->next=NULL;
        }
        n--;
    }
}
void print(listN*ptr){
    while(ptr!=NULL){
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}
void insert(listN*ptr,int x){
    int i=0;
    while(i!=x-1){
        ptr=ptr->next;
        i++;
    }
    listN*node=new listN;
    cout<<"Enter the number to be inserted: ";
    cin>>node->data;
    node->next=ptr->next;
    ptr->next=node;
    
}
listN*deletel(listN*ptr,int k,int n){
    if(ptr==NULL||k<1||k>n){
        cout<<"Invalid entry!!";
        return ptr;
    }
    listN*let=ptr;
    if(k==1){
        listN*pt=ptr;
        ptr=ptr->next;
        return ptr;
    }
     listN *prev = NULL, *current = ptr;
        for (int i = 1; i < k; i++)
    {
        prev = current;
        current = current->next;
    }

   
    if (k == n)
    {
        prev->next = NULL;
        return let;
    }

   
    prev->next = current->next;

    return let;
    
}

int main()
{
listN* head= new listN;
int n;
cout<<"Enter the number of elements: ";
cin>>n;
    create(head,n);
    print(head);
    //  cout<<"\nDo you wnat to insert a number 1/0: ";
    //  cout<<"\nDo you want to delete a number 1/0: ";
    int c;
    cin>>c;
    if(c==1){
        // cout<<"Enter at which place do you want to enter the number: ";
        // int x;
        // cin>>x;
        // insert(head,x);
        // print(head);


    //      cout<<"Enter the place which is to be deleted: ";
    //     int x;
    //     cin>>x;
    // head=deletel(head,x,n);
    //     print(head);    
    }
    else{
        cout<<"Thanks for entry :)";
    }


    return 0;
}