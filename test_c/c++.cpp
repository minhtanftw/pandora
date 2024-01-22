
#include <iostream>

using namespace std;
struct linkedListItem
{
    int value;
    linkedListItem *next;
linkedListItem()
{
    value =0;
    next = NULL;
}

void put(int x)
{
    if (next != NULL)
    {
        next->put(x);
        return;
    }
    next = new linkedListItem();
    next->value = x;
}
void printAll()
{
    cout << value << endl;
    if (next != NULL)
    {
        next->printAll();
    }
}
};

struct linkedlist
{
    linkedListItem *firstItem;
    linkedlist()
    {
        firstItem = NULL;
    }
    void put (int x)
    {
    if (firstItem == NULL )
    {
        firstItem =new linkedListItem();
        firstItem->value = x;
    }
    else
    firstItem->put(x);
    }
}; 

int main()
{
    linkedListItem list;
    list.put(21);
    list.put(7);
    list.put(19);
    list.put(97);
    list.printAll();
    /*list.put(18);
    list.put(02);
    list.printAll(); */
    return 0;
}
