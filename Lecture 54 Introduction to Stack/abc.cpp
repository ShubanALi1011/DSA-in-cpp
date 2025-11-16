#include<iostream>
#include<fstream>
#include<string>
using namespace std;
class mobilePhone
{
private:
    string name;
    string manufacturedBy;
    float price;
public:
    void get()
    {
        cin.ignore();
        cout<<"Enter your mobile name:\n";
        getline(cin,name);
        cout<<"Enter manufacturer country:\n";
        getline(cin,manufacturedBy);
        cout<<"Enter price:\n";
        cin>>price;
    }
    void display()
    {
        cout<<"Mobile Name: "<<name<<endl;
        cout<<"Manufacturer Country: "<<manufacturedBy<<endl;
        cout<<"Price: "<<price<<endl;
    }
    void saveToFile()
    {
        fstream f;
        f.open("mobiles.txt",ios::out|ios::app);
        if(f)
        {
            f<<name<<endl;
            f<<manufacturedBy<<endl;
            f<<price<<endl;
            f.close();
            cout<<"Data saved.\n";
        }
        else
        {
            cout<<"File open error.\n";
        }
    }
    void searchInFile(string searchName)
{
    fstream f;
    f.open("mobiles.txt", ios::in);
    if (f)
    {
        string n, m;
        float p;
        bool found = false;
        while (getline(f, n) && getline(f, m) && (f >> p))
        {
            f.ignore(); 
            if (n == searchName)
            {
                cout<<"\nMobile found:\n";
                cout<<"Mobile Name: "<<n<<endl;
                cout<<"Manufacturer: "<<m<<endl;
                cout<<"Price: "<<p<<endl;
                found=true;
                break;
            }
        }
        f.close();
        if (!found)
        {
            cout<<"Mobile not found.\n";
        }
    }
    else
    {
        cout<<"File open error.\n";
    }
}
    void displayAll()
{
    fstream f;
    f.open("mobiles.txt", ios::in);
    if (f)
    {
        string n, m;
        float p;
        cout<<"\nAll Mobile Records:\n";
        while (getline(f, n) && getline(f, m) && (f >> p))
        {
            f.ignore(); 
            cout<<"----------------------\n";
            cout<<"Mobile Name: "<<n<<endl;
            cout<<"Manufacturer: "<<m<<endl;
            cout<<"Price: "<<p<<endl;
        }
        f.close();
    }
    else
    {
        cout<<"File open error.\n";
    }
}
};
int main()
{
    mobilePhone m1;
    int choice;
    string searchName;
    do
    {
        cout<<"\n--- Mobile Menu ---\n";
        cout<<"1. Save new mobile\n";
        cout<<"2. Search mobile\n";
        cout<<"3. Display all\n";
        cout<<"4. Exit\n";
        cout<<"Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            m1.get();
            m1.saveToFile();
            break;
        case 2:
            cout<<"Enter name to search: ";
            cin.ignore();
            getline(cin,searchName);
            m1.searchInFile(searchName);
            break;
        case 3:
            m1.displayAll();
            break;
        case 4:
            cout<<"Exiting...\n";
            break;
        default:
            cout<<"Invalid choice.\n";
        }
    } while(choice!=4);
    return 0;
}