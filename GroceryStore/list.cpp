#include "list.h"

shop::shop()
{

}
void shop::add_item(QString name)
{
    item temp ;
    temp.Name = name ;
    if(items.size() == 0){
        cout << "Enter The Item Production Company Name : " ;
        temp.ProductionCompanyName = cin.readLine();
        cout << "Enter Type Of The Item " ;
        temp.Type = cin.readLine();
        cout << "Enter Item Price : " ;
        cin >> temp.Price ;
        temp.Count ++ ;
        items.push_back(temp);
    }
    bool exist = false ;
    for(int i=0 ; i<items.size() ; i++){
        if(temp.Name == items[i].Name){
            exist = true ;
        }
        else
            continue ;
    }
    if(exist == true){
        cout << "That Item Is Already In The Shop So We Add 1 To It's Count." << endl ;
        for(int i=0 ; i<items.size() ; i++){
            if(temp.Name == items[i].Name){
                items[i].Count++;
                break ;
            }
        }
    }
    else{
        cout << "Enter The Item Production Company Name : " ;
        temp.ProductionCompanyName = cin.readLine();
        cout << "Enter Type Of The Item " ;
        temp.Type = cin.readLine();
        cout << "Enter Item Price : " ;
        cin >> temp.Price ;
        temp.Count ++ ;
        items.push_back(temp);
    }
}
void shop::remove_item(QString name)
{
    bool removed = false ;
    for(int i=0 ; i<items.size() ; i++){
        if(items[i].Name == name)
        {
            items.remove(i);
            removed = true ;
            break ;
        }
    }
    if(removed == true)
    {
        cout << "Item " << name << "Got Deleted." << endl ;
    }
    else
    {
        cout << "Item " << name << "Doesn't Exist In The Shop." << endl ;
        cout << "Would You Like To Add The Item (y,n) ? " ;
        char action ;
        cin >> action ;
        if(action == 'y')
            this -> add_item(name);
        else{
            return ;
        }
    }
}
void shop::edit(QString name)
{
    bool exist = false ;
    int index = 0;
    for(int index=0 ; index<items.size() ; index++){
        if(items[index].Name == name){
            exist = true ;
            break ;
        }
        else
            continue ;
    }
    if(exist == true)
    {
        short action;
        cout << "1. Name.\n"
             << "2. Production Company Name.\n"
             << "3. Type.\n"
             << "4. Price.\n";
        cout << "Which One You Want To Edit? ";
        cin >> action;
        switch (action)
        {
            case 1 :
                cout << "Please Enter The New Name.\n";
                cin >> items[index].Name ;
                cout << "The Name Of Your Item Has Been Changed.\n";
            case 2 :
                cout << "Please Enter The New Production Company Name.\n";
                cin >> items[index].ProductionCompanyName ;
                cout << "The Name Of Production Company Of Your Item Has Been Changed.\n";
            case 3 :
                cout << "Please Enter The New Type Of Your Item.\n";
                cin >> items[index].Type ;
                cout << "The Type Of Your Item Has Been Changed.\n";
            case 4 :
                cout << "Please Enter The New Price.\n";
                cin >> items[index].Price ;
                cout << "The Price Of Your Item Has Been Changed.\n";
        }
    }
}
void shop::display()
{
    cout << "==========================Shop Items===========================\n\n" ;
    for(int i=0 ; i<items.size() ; i++){
        cout << "Item Number " << i << "\n\n";
        cout << "Name: " << items[i].Name << '\n'
             << "Name Of Production Company: " << items[i].ProductionCompanyName << '\n'
             << "Item type: " << items[i].Type << '\n'
             << "Item Count: " << items[i].Count << '\n'
             << "Item Price: " << items[i].Price << '\n';
    }
}
