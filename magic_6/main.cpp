#include <iostream>
#include <windows.h>
//Magic box:
using namespace std;
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x*5;
    coord.Y=y*5;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}



int main()
{
    int ent,col,row,i;
    cout << "please enter number" << endl;
    cin >> ent;
    if((ent % 2==0) &&(ent>1))
    {
        cout<<"not allowed number";
    }
    else
    {
        col=(ent+1)/2;
        row=1;
        gotoxy(col,row);
        cout<<1<<endl;
        for(i=2;i<=ent*ent;i++){
            if((i-1)% ent !=0)
            {
                col --;
            row --;
            if(col<1)
                col=ent;
            else if(col>ent)
            col=1;
            if(row <1)
                row=ent;
            else if(row>ent)
                row=1;
            }
        else
        {
            row++;
        }
        gotoxy(col,row);
        cout <<i<<endl;
    }
    }
    return 0;
}
