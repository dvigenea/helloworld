//hello c++
#include <iostream>
using namespace std;

struct ppl
{
    string name;
    string sex;
    int age;
    int phone;
    string address;
};

void menu();
void add( ppl array[] , int *p );
void see( ppl array[] , int *p );
void del( ppl array[] , int *p );
void find( ppl array[] , int *p );
void chan( ppl array[] , int *p );
void clear( ppl array[] , int *p );

void menu()
{                    
    for ( int i = 0 ; i < 15 ; i++ )
    {
        cout << "*";
    }
    cout << endl << "1. add a contact" << endl << "2. show all contacts" << endl << "3. delete a contact" << endl 
    << "4. find a contact" << endl << "5. change a contact" << endl << "6. clear all contact" << endl << "7. quit" 
    << endl;
    for ( int i = 0 ; i < 15 ; i++ )
    {
        cout << "*";
    }
    cout << endl;
};

void add( ppl array[] , int *p )
{
    cout << "please enter the name:" << endl;
    cin >> array[*p].name;
    cout << "please enter the sex:" << endl;
    cin >> array[*p].sex;
    cout << "please enter the age:" << endl;
    cin >> array[*p].age;
    cout << "please enter the phone no." << endl;
    cin >> array[*p].phone;
    cout << "please enter the address:" << endl;
    cin >> array[*p].address;
    
};

void see( ppl array[] , int *p )
{
    for ( int i = 0 ; i < *p ; i++ )
    {
        cout << array[i].name << "  " << array[i].sex << "  " << array[i].age << "  " 
        << array[i].phone << "  " << array[i].address << endl;
    }
}

void del( ppl array[] , int *p )
{
    string delpp;
    cout << "enter the name of contact that you want to delete:" << endl;
    cin >> delpp;
    int  k = 0;
    for ( k = 0 ; ; k++ )
    {
        if ( array[k].name == delpp )
        {
            for ( int l = k ; l < *p ; l++ )
            {
                array[l] = array[l+1];
            }
            break;
        }
        else if ( k == *p )
        {
            cout << "cannot find the contact" << endl;
            break;
        }
    }
}

void find( ppl array[] , int *p )
{
    string findppl;
    cout << "enter the name of contact that you want to find:" << endl;
    cin >> findppl;
    int  k = 0;
    for ( k = 0 ; ; k++ )
    {
        if ( array[k].name == findppl )
        {
            cout << array[k].name << "  " << array[k].sex << "  " << array[k].age << "  " 
            << array[k].phone << "  " << array[k].address << endl;
            break;
        }
        else if ( k == *p )
        {
            cout << "not been found" << endl;
            break;
        }
    }

}

void chan( ppl array[] , int *p )
{
    string chanppl;
    cout << "please enter the name of contact that you want to change:" << endl;
    cin >> chanppl;
    int  k = 0;
    for ( k = 0 ; ; k++ )
    {
        if ( array[k].name == chanppl )
        {
            cout << "name:" << endl;
            cin >> array[k].name;
            cout << "sex:" << endl;
            cin >> array[k].sex;
            cout << "age:" << endl;
            cin >> array[k].age;
            cout << "phone no.:" << endl;
            cin >> array[k].phone;
            cout << "address:" << endl;
            cin >> array[k].address;
            break;
        }
        else if ( k == *p )
        {
            cout << "not been found" << endl;
            break;
        }
    }

}

void clear( ppl array[] , int *p )
{
    for ( int h = 0 ; h < *p ; h++)
    {
        array[h] = array[(*p)+1];
    }
    cout << "all contacts cleared" << endl;
}

int main()
{
    ppl array[1000];
    int com;
    int no = 0; 
    do {
        menu();
        cin >> com;
        switch (com)
        {
            case 1:
            add( array , &no );
            no++;
            break;

            case 2:
            see( array , &no );
            break;

            case 3:
            del( array , &no );
            no--;
            break;

            case 4:
            find( array , &no );
            break;

            case 5:
            chan( array , &no );
            break;
                
            case 6:
            clear( array , &no );
            no = 0;
            break;

            case 7:
            return 0;
        };
        
    } while ( true );


    system("pause");

    return 0;
}

