#include<bits/stdc++.h>
using namespace std;
struct listnode
{
    char info;
    struct listnode *next;
};
struct treenode
{
    char info;
    struct treenode *lchild;
    struct treenode *rchild;
};
struct listnode *addatbeg( struct listnode *start, char data )
{
    struct listnode *tmp;
    tmp = ( struct listnode * )malloc( sizeof( struct listnode ) );
    tmp->info = data;
    tmp->next = start;
    start = tmp;
    return start;
}
struct listnode *addatend( struct listnode *start, char data )
{
    struct listnode *p, *tmp;
    tmp = ( struct listnode * )malloc( sizeof( struct listnode ) );
    tmp->info = data;
    p = start;
    while( p->next != NULL )
        p = p->next;

    p->next = tmp;
    tmp->next = NULL;
    return start;
}
struct listnode *preList( struct listnode *start )
{
    int i,n;
    char data;
    cout << "Enter the number of nodes Pre: ";
    cin >> n;
    start = NULL;
    if( n == 0 )
        return start;
    cout << "Enter the element to be inserted: ";
    cin >> data;
    start = addatbeg( start,data );
    for( i=2; i<=n; i++ ){
        cin >> data;
        start = addatend( start,data );
    }
    return start;
}
struct listnode *inList( struct listnode *start )
{
    int i,n;
    char data;
    cout << "Enter the number of nodes In: ";
    cin >> n;
    start = NULL;
    if( n == 0 )
        return start;
    cout << "Enter the element to be inserted: ";
    cin >> data;
    start = addatbeg( start,data );
    for( i=2; i<=n; i++ ){
        cin >> data;
        start = addatend( start,data );
    }
    return start;
}
struct treenode *construct( struct listnode *inptr, struct listnode *preptr, int num )
{
    struct treenode *temp;
    struct listnode *q;
    int i,j;

    if( num == 0 )
        return NULL;

    temp = ( struct treenode * )malloc( sizeof( struct treenode ) );
    temp->info = preptr->info;
    temp->lchild = NULL;
    temp->rchild = NULL;

    if( num == 1 )
        return temp;

    q = inptr;
    for( i=0; q->info != preptr->info; i++ )
        q = q->next;

    temp->lchild = construct( inptr, preptr->next, i );
    for( j=1; j<=i+1; j++ )
        preptr = preptr->next;

    temp->rchild = construct( q->next, preptr, num-i-1 );
    return temp;
}
void display_tree( struct treenode *ptr )
{
    if( ptr == NULL )
        return;

    display_tree( ptr->lchild );
    display_tree( ptr->rchild );
    cout << ptr->info << " ";
}
void display( struct listnode *start )
{
    struct listnode *p;
    if( start == NULL ){
        cout << "List is empty.\n";
        return;
    }
    p = start;
    cout << "List is: ";
    while( p != NULL ){
        cout << p->info << " ";
        p = p->next;
    }
    cout << endl << endl;
}


int main()
{
    struct listnode *preptr = NULL;
    struct listnode *inptr = NULL;
    
    preptr = preList( preptr );
    display( preptr );
    
    inptr = NULL;
    inptr = inList( inptr );
    display( inptr );
    
    struct treenode *root = construct( inptr, preptr, 11 );
    cout << "The PostOrder of your tree: ";
    display_tree( root );
    
    return 0;
}
