#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <vector>

using namespace std;

struct Page
{
    int id;
    string path;
    int counter;
    Page(int id, string path)
    {
        this->id = id;
        this->path = path;
        counter = 0;
    };
};

// This function can facilitate sorting
bool operator<(const Page &a, const Page &b)
{
    return (a.id < b.id);
};

vector<Page> pages;

struct User
{
    int id;
    vector<string> visits;
    User(int id)
    {
        this->id = id;
    };
    void add_visit(int page_id)
    {
        Page p(page_id, "");
        vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
        if (iter->id == page_id)
            visits.push_back(iter->path);
    };
    int size() const
    {
        return visits.size();
    };
    void print_visits()
    {
        sort(visits.begin(), visits.end());
        vector<string>::iterator iter;
        for (iter = visits.begin(); iter != visits.end(); iter++)
        {
            cout << "- " << *iter << endl;
        }
    }
};

vector<User> users;

// Please implement the following function to facilitate the sorting of users
bool operator<(const User &a, const User &b) /**/
{
    if (a.size() == b.size())
    {
        return (a.id < b.id);
    }
    else
    {
        return (a.size() > b.size());
    }
};

// Please implement the following function **
void add_page(const Page &p)
{
    pages.push_back(p);
    // sort(pages.begin(), pages.end());
}

// Please implement the following function **
bool cmp_page_count(const Page &a, const Page &b)
{
    if (a.counter == b.counter)
    {
        for (int i = 0; i < min(a.path[i], b.path[i]); i++)
        {
            if (a.path[i] != b.path[i])
            {
                return (a.path[i] < b.path[i]);
            }
        }
        return 0;
    }
    else
    {
        return (a.counter > b.counter);
    }
}

// Please implement the following function **
void print_pages(int number)
{
    for (int i = 0; i < number; i++)
    {
        cout << pages[i].counter << ":" << pages[i].path << endl;
    }
}

// Please implement the following function **
void add_user(User u)
{
    users.push_back(u);
}

// Please implement the following function **
void add_visit(int page_id)
{
    User *pta = &users[users.size() - 1];
    string temp;
    for (int i = 0; i < pages.size(); i++)
    {
        if (pages[i].id == page_id)
        {
            temp = pages[i].path;
            break;
        }
    }
    pta->visits.push_back(temp);
}

// Please implement the following function **
void print_users(int number)
{
    for (int i = 0; i < number; i++)
    {
        User temp = users[i];
        cout << "- " << temp.size() << ':' << temp.id << endl;
        for (int i = 0; i < pages.size(); i++)
        {
            for (int j = 0; j < temp.size(); j++)
            {
                if (pages[i].path == temp.visits[j])
                {
                    cout << temp.visits[j] << endl;
                }
            }
        }
    }
}

int main()
{
    freopen("tc3.txt", "r", stdin);
    freopen("tc3_out.txt", "w", stdout);

    string type;

    while (cin >> type)
    {
        if (type == "USER")
        {
            int user_id;
            cin >> user_id;

            User u(user_id);
            add_user(u);
        }
        else if (type == "PAGE")
        {
            int page_id;
            string page_path;
            cin >> page_id;
            cin >> page_path;

            Page p(page_id, page_path);
            add_page(p);
        }
        else if (type == "VISIT")
        {
            int page_id;
            cin >> page_id;
            Page p(page_id, "");

            vector<Page>::iterator iter = lower_bound(pages.begin(), pages.end(), p);
            if (iter->id == p.id)
            {
                iter->counter++;
            }

            add_visit(p.id);
        }
        else if (type == "stop")
        {
            break;
        }
        else if (type == "printsize")
        {
            sort(users.begin(), users.end());
            cout << "users: " << users.size() << endl;
            for (int j = 0; j < users.size(); j++)
            {
                cout << users[j].id << "  " << users[j].size() << endl;
            }
            sort(pages.begin(), pages.end(), cmp_page_count);
            cout << "pages: " << pages.size() << endl;
            for (int j = 0; j < pages.size(); j++)
            {
                cout << pages[j].id << " : " << pages[j].path << "  " << pages[j].counter << endl;
            }
        }
        else if (type == "printuser")
        {
            int user_id;
            cin >> user_id;
            User temp = User(-1);
            for (int i = 0; i < users.size(); i++)
            {
                if (users[i].id == user_id)
                {
                    temp = users[i];
                    cout << temp.size() << ':' << temp.id << endl;
                }
            }
            for (int j = 0; j < temp.size(); j++)
            {
                cout << temp.visits[j] << endl;
            }
        }
    }

    sort(pages.begin(), pages.end(), cmp_page_count);
    cout << "*** 5 most popular pages ***" << endl;
    print_pages(5);
    sort(pages.begin(), pages.end());

    sort(users.begin(), users.end());
    cout << "*** 5 most active users ***" << endl;
    print_users(5);

    return 0;
}
