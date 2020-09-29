#include<iostream>

#include<set>

using namespace std;

int main()
{
    int n;

    set<int> s;

    cout << "Enter the number of iterations : ";

    cin >> n;

    while(n--)
    {
        int choice;

        cout << "Enter the 1 to insert\nEnter 2 to search in the set\nChoice = ";

        cin >> choice;

        if(choice == 1)
        {
            int x;

            cout << "Enter the number you want to insert into the set:";

            cin >> x;

            auto pos = s.find(x);

            if(pos == s.end())
            {  
                s.insert(x);

                cout << "Number " << x << " is inserted successfully" << endl;
            }
            else
            {
                cout << "Number " << x << " already there in the set" << endl;
            }
            
        }
        else if(choice == 2)
        {
            int x;
            
            cout << "Enter the number you want search in the set:";

            cin >> x;

            auto pos = s.find(x);

            if(pos == s.end())
                cout << x << " not found" << endl;
            else
                cout << x << " found" << endl;
        }
        
    }
}
