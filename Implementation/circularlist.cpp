#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

/*
 * cNode Declaration
 */
struct cnode
{
    int info;
    struct cnode *next;
    struct cnode *prev;
}*start, *last;
int counter = 0;
/*
 * Class Declaration
 */
class double_clist
{
public:
    cnode *create_cnode(int);
    void insert_begin();
    void insert_last();
    void insert_pos();
    void delete_pos();
    void search();
    void update();
    void display();
    void reverse();
    void sort();
    double_clist()
    {
        start = NULL;
        last = NULL;
    }
};

/*
 * Main: Contains Menu
 */
void CLL()
{
    int choice;
    double_clist cdl;
    cout<<"CIRCULAR LINKED LIST BY ASTHA VARSHNEY"<<endl;
	cout<<"------------"<<endl;
    cout<<"MENU: "<<endl;
    cout<<"-------------------"<<endl; 
    cout<<"1.PREPEND\n2.APPEND\n3.INSERT AT\n4.DELETE AT\n5.UPDATE\n6.SEARCH\n7.SORT\n8.DISPLAY\n9.REVERSE\n10.EXIT\n";

    while (1)
    {
        cout<<"-------------------"<<endl; 
        cout<<"Enter your choice (1-10)"<<endl;
        cout<<"-------------------"<<endl; 
        cin>>choice;
        switch(choice)
        {
            case 1:
                cdl.insert_begin();
                break;
            case 2:
                cdl.insert_last();
                break;
            case 3:
                cdl.insert_pos();
                break;
            case 4:
                cdl.delete_pos();
                break;
            case 5:
                cdl.update();
                break;
            case 6:
                cdl.search();
                break;
            case 7:
                cdl.sort();
                break;
            case 8:
                cdl.display();
                break;
            case 9:
                cdl.reverse();
                break;
            case 10:
                exit(1);
            default:
                cout<<"Wrong choice"<<endl;
        }
    }
    cout<<"------------------"<<endl;
    cout<<"The END"<<endl;
    cout<<"------------------"<<endl;
    return;
}

cnode* double_clist::create_cnode(int value)
{
    counter++;
    struct cnode *temp;
    temp = new(struct cnode);
    temp->info = value;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
/*
 *INSERTS ELEMENT AT BEGINNING
 */
void double_clist::insert_begin()
{
    int value;
    cout<<endl<<"Enter the element to be inserted: ";
    cin>>value;
    struct cnode *temp;
    temp = create_cnode(value);
    if (start == last && start == NULL)
    {
        cout<<"Element inserted in empty list"<<endl;
        start = last = temp;
        start->next = last->next = NULL;
        start->prev = last->prev = NULL;
    }
    else
    {
        temp->next = start;
        start->prev = temp;
        start = temp;
        start->prev = last;
        last->next = start;
        cout<<"Element inserted"<<endl;
    }
}

/*
 *INSERTS ELEMNET AT LAST
 */
void double_clist::insert_last()
{
    int value;
    cout<<endl<<"Enter the element to be inserted: ";
    cin>>value;
    struct cnode *temp;
    temp = create_cnode(value);
    if (start == last && start == NULL)
    {
        cout<<"Element inserted in empty list"<<endl;
        start = last = temp;
        start->next = last->next = NULL;
        start->prev = last->prev = NULL;
    }
    else
    {
        last->next = temp;
        temp->prev = last;
        last = temp;
        start->prev = last;
        last->next = start;
    }
}
/*
 *INSERTS ELEMENT AT POSITION
 */
void double_clist::insert_pos()
{
    int value, pos, i;
    cout<<endl<<"Enter the element to be inserted: ";
    cin>>value;
    cout<<endl<<"Enter the postion of element inserted: ";
    cin>>pos;
    struct cnode *temp, *s, *ptr;
    temp = create_cnode(value);
    if (start == last && start == NULL)
    {
        if (pos == 1)
        {
            start = last = temp;
            start->next = last->next = NULL;
            start->prev = last->prev = NULL;
        }
        else
        {
            cout<<"Position out of range"<<endl;
            counter--;
            return;
        }
    }
    else
    {
        if (counter < pos)
        {
            cout<<"Position out of range"<<endl;
            counter--;
            return;
        }
        s = start;
        for (i = 1;i <= counter;i++)
        {
            ptr = s;
            s = s->next;
            if (i == pos - 1)
            {
                ptr->next = temp;
                temp->prev = ptr;
                temp->next = s;
                s->prev = temp;
                cout<<"Element inserted"<<endl;
                break;
            }
        }
    }
}
/*
 * Delete cNode at Particular Position
 */
void double_clist::delete_pos()
{
    int pos, i;
    cnode *ptr, *s;
    if (start == last && start == NULL)
    {
        cout<<"List is empty, nothing to delete"<<endl;
        return;
    }
    cout<<endl<<"Enter the postion of element to be deleted: ";
    cin>>pos;
    if (counter < pos)
    {
        cout<<"Position out of range"<<endl;
        return;
    }
    s = start;
    if(pos == 1)
    {
        counter--;
        last->next = s->next;
        s->next->prev = last;
        start = s->next;
        free(s);
        cout<<"Element Deleted"<<endl;
        return;
    }
    for (i = 0;i < pos - 1;i++ )
    {
        s = s->next;
        ptr = s->prev;
    }
    ptr->next = s->next;
    s->next->prev = ptr;
    if (pos == counter)
    {
        last = ptr;
    }
    counter--;
    free(s);
    cout<<"Element Deleted"<<endl;
}
/*
 * Update value of a particular cnode
 */
void double_clist::update()
{
    int value, i, pos;
    if (start == last && start == NULL)
    {
        cout<<"The List is empty, nothing to update"<<endl;
        return;
    }
    cout<<endl<<"Enter the postion of cnode to be updated: ";
    cin>>pos;
    cout<<"Enter the new value: ";
    cin>>value;
    struct cnode *s;
    if (counter < pos)
    {
        cout<<"Position out of range"<<endl;
        return;
    }
    s = start;
    if (pos == 1)
    {
        s->info = value;
        cout<<"cNode Updated"<<endl;
        return;
    }
    for (i=0;i < pos - 1;i++)
    {
        s = s->next;
    }
    s->info = value;
    cout<<"cNode Updated"<<endl;
}
/*
 * Search Element in the list
 */
void double_clist::search()
{
    int pos = 0, value, i;
    bool flag = false;
    struct cnode *s;
    if (start == last && start == NULL)
    {
        cout<<"The List is empty, nothing to search"<<endl;
        return;
    }
    cout<<endl<<"Enter the value to be searched: ";
    cin>>value;
    s = start;
    for (i = 0;i < counter;i++)
    {
        pos++;
        if (s->info == value)
        {
            cout<<"Element "<<value<<" found at position: "<<pos<<endl;
            flag = true;
        }
        s = s->next;
    }
    if (!flag)
        cout<<"Element not found in the list"<<endl;
}
/*
 * Sorting Doubly Circular Link List
 */
void double_clist::sort()
{
    struct cnode *temp, *s;
    int value, i;
    if (start == last && start == NULL)
    {
        cout<<"The List is empty, nothing to sort"<<endl;
        return;
    }
    s = start;
    for (i = 0;i < counter;i++)
    {
        temp = s->next;
        while (temp != start)
        {
            if (s->info > temp->info)
            {
                value = s->info;
                s->info = temp->info;
                temp->info = value;
            }
            temp = temp->next;
        }
        s = s->next;
    }
}
/*
 * Display Elements of the List
 */
void double_clist::display()
{
    int i;
    struct cnode *s;
    if (start == last && start == NULL)
    {
        cout<<"The List is empty, nothing to display"<<endl;
        return;
    }
    s = start;
    cout<<"The circular list is: ";
    for (i = 0;i < counter-1;i++)
    {
        cout<<s->info<<" ";
        s = s->next;
    }
    cout<<s->info<<endl;
}
/*
 * Reverse Doubly Circular Linked List
 */
void double_clist::reverse()
{
    if (start == last && start == NULL)
    {
        cout<<"The List is empty, nothing to reverse"<<endl;
        return;
    }
    struct cnode *p1, *p2;
    p1 = start;
    p2 = p1->next;
    p1->next = NULL;
    p1->prev = p2;
    while (p2 != start)
    {
        p2->prev = p2->next;
        p2->next = p1;
        p1 = p2;
        p2 = p2->prev;
    }
    last = start;
    start = p1;
    cout<<"List Reversed"<<endl; 	 
}
