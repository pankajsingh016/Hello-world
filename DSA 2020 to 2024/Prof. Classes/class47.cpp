#include<iostream>
using namespace std;

class Media
{
    protected:
        string name;
        string author;
        string issue_date;
        string re_date;
    public:
        void new_item()
        {
            getline(cin,name);
            getline(cin,author);
            getline(cin,issue_date);
        }

        virtual void issue()
        {
            cout<<name<<" "<<issue_date<<" "<<re_date;
        }

        void deposit()
        {
            cout<<name<<" Book returned on "<<re_date<<endl;
        }
};

class Book : public Media
{
        int no_of_pages;
        public:
            void details()
            {
                cin>>no_of_pages;
            }

            void issue()
        {
            cout<<name<<" "<<no_of_pages<<" "<<issue_date<<" "<<re_date;
        }
};

class Tape : public Media
{
    int run_time;
    public:
    void details()
    {
        cin>>run_time;
    }

    void issue()
        {
            cout<<name<<""<<run_time<<" "<<issue_date<<" "<<re_date;
        }
};

int main()
{
    Media m, *mptr=&m;
    Book b, *bptr; bptr = &b;
    Tape t,*tptr; tptr = &t;
    mptr = &b;
    b.new_item();
    t.new_item();
    mptr->issue();
    return 0;
}