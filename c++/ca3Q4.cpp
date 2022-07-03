#include <iostream>
#include <map>


using namespace std;


int main()
{
    map<string, int> names;
    bool menu = true;
    while(menu)
    {
        cout << "Choose the operation(1, 2): " << endl;
        cout << "1. Add name to vector" << endl;
        cout << "2. Remove name from vector" << endl;
        cout << "3. Exit" << endl;
        int choice;
        int counter = 0;
        cin >> choice;
        switch(choice);
        {
            //case 1:
                counter++;
                string name;
                cout << "Enter name you want to add: ";
                cin >> name;
                names[name] = counter;
                break;


           // case 2:
                cout << "Enter name you want to remove: ";
                cin >> name;
                names.erase(name);
                break;
        }
    }
    return 0;
}