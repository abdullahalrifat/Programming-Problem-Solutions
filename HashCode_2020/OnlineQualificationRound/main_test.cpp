//
// Created by abdullah on ২০/২/২০.
//

// CPP program to find Minimum number of times A
// has to be repeated such that B is a substring of it
#include <bits/stdc++.h>
#define inputa freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/a_example.txt", "r", stdin);
#define outputa freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/a_example_output.txt", "w", stdout);

#define inputb freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/b_read_on.txt", "r", stdin);
#define outputb freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/b_read_on_output.txt", "w", stdout);

#define inputc freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/c_incunabula.txt", "r", stdin);
#define outputc freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/c_incunabula_output.txt", "w", stdout);

#define inputd freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/d_tough_choices.txt", "r", stdin);
#define outputd freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/d_tough_choices_output.txt", "w", stdout);

#define inpute freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/e_so_many_books.txt", "r", stdin);
#define outpute freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/e_so_many_books_output.txt", "w", stdout);

#define inputf freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/f_libraries_of_the_world.txt", "r", stdin);
#define outputf freopen("/mnt/sda3/Programming-Problem-Solutions/HashCode_2020/OnlineQualificationRound/f_libraries_of_the_world_output.txt", "w", stdout);




#define sync  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

using namespace std;
bool sortbysec(const pair<int,int> &a,
               const pair<int,int> &b)
{
    return (a.second > b.second);
}
struct library{
    int libraryNo;
    int noOfBooks;
    int signupProcess;
    int shipTime;
    vector<int>booksList;
}libraries[1000010];
bool compareTwoLibrary(library a, library b)
{
    // If total marks are not same then
    // returns true for higher total
    if (a.noOfBooks < b.noOfBooks )
    {
        if (a.signupProcess > b.signupProcess)
        {
            if(a.shipTime < b.shipTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(b.shipTime < a.shipTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
    else
    {
        if (a.signupProcess > b.signupProcess)
        {
            if(a.shipTime < b.shipTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            if(b.shipTime < a.shipTime)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
    }
}
int main()
{
    sync;
    inputa;
    outputa;
   /* inputb;
    outputb;
    inputc;
    outputc;
   inputd;
    outputd;
    inpute;
    outpute;
   inputf;
    outputf;*/

    int b, l, d;
    cin>>b>>l>>d;

    vector<int> booksScores;
    for(int i=0;i<b;i++)
    {
        int temp;
        cin>>temp;
        booksScores.push_back(temp);
    }
    for(int i=0;i<l;i++)
    {
        int bk, stime,shiplimit;
        cin>>bk>>stime>>shiplimit;
        vector<int> lists;
        for(int j=0;j<bk;j++)
        {
            int temp;
            cin>>temp;
            lists.push_back(temp);
        }
        libraries[i].libraryNo = i;
        libraries[i].noOfBooks= bk;
        libraries[i].signupProcess = stime;
        libraries[i].shipTime = shiplimit;
        libraries[i].booksList=lists;
    }
    sort(libraries, libraries+l, compareTwoLibrary);
    int time = d;
    int totalLibrary = 0;
    map<int,int> mp;
    vector<pair<int,int>> liblist;
    vector<vector<int>> bkList;
    for(int i=0;i<l;i++)
    {
        if(time - libraries[i].signupProcess >= 0)
            time -= libraries[i].signupProcess;
        else break;

        totalLibrary++;
        int noCanbetaken = 0;
        int tempdays = libraries[i].booksList.size() / libraries[i].shipTime;
        if (libraries[i].booksList.size() % libraries[i].shipTime !=0)
            tempdays += 1;
        if(tempdays > time)
        {
            noCanbetaken = time * libraries[i].shipTime;
        } else
        {
            noCanbetaken =((tempdays) * libraries[i].shipTime);
        }
        pair<int,int> tp;
        tp.first = libraries[i].libraryNo;
        tp.second = noCanbetaken;
        liblist.push_back(tp);
        int cnt = 0;
        vector<int> lt;
        for(int j=0;j<libraries[i].booksList.size();j++,cnt++)
        {
            if(cnt >= noCanbetaken) break;
            /*if(mp[libraries[i].booksList[j]] == 0)
            {
                mp[libraries[i].booksList[j]] = 1;

            }*/
            lt.push_back(libraries[i].booksList[j]);
        }
        bkList.push_back(lt);

    }
    cout<<totalLibrary<<endl;
    for(int i=0;i<liblist.size();i++)
    {
        cout<<liblist[i].first<<" "<<bkList[i].size()<<endl;
        for(int j=0;j<bkList[i].size();j++)
        {
            cout<<bkList[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    fclose(stdin);
    fclose(stdout);
    return 0;
}
