#include <iostream>
#include <windows.h>
#include <string>
#include <fstream>

using namespace std;
using std::cout;
using std::ifstream;
using std::string;

string user, comm, folder[100];
int prog, level = 0;
bool active;

void setWindow(int Width, int Height)
{
    //set window title
    char consoleTitle[256];
    wsprintf(consoleTitle, ("default terminal"));
    SetConsoleTitle((LPCTSTR)consoleTitle);

    //resize window
    _COORD coord;
    coord.X = Width;
    coord.Y = Height;

    _SMALL_RECT Rect;
    Rect.Top = 0;
    Rect.Left = 0;
    Rect.Bottom = Height - 1;
    Rect.Right = Width - 1;

    HANDLE Handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleWindowInfo(Handle, TRUE, &Rect);

    //hide scrollbar
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO info;
    GetConsoleScreenBufferInfo(handle, &info);
    COORD new_size =
    {
        info.srWindow.Right - info.srWindow.Left + 1,
        info.srWindow.Bottom - info.srWindow.Top + 1
    };
    SetConsoleScreenBufferSize(handle, new_size);
}

void clearScreen()
{
    HANDLE hOut;
    COORD Position;

    hOut = GetStdHandle(STD_OUTPUT_HANDLE);

    Position.X = 0;
    Position.Y = 0;
    SetConsoleCursorPosition(hOut, Position);
}

void setCursor (short x, short y)
{
COORD coord = {x, y};
SetConsoleCursorPosition ( GetStdHandle ( STD_OUTPUT_HANDLE ), coord );
}

void load()
{
    string path = "jd.data";
    ifstream data;

    data.open("jd.data");
    if(data.is_open())
    {
        data >> user >> prog;
        data.close();
    }
    else
    {
        prog = -1;
    }
}

void save()
{
    ofstream data ("jd.data");
        if (data.is_open())
        {
            data << user << "\n";
            data << prog << "\n";
            data.close();
        }
}

void title()
{
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(500);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                             `   `        ,      `  |" << endl;
    cout << "                                      {  `   " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                             '`  |        ;      '\\ -" << endl;
    cout << "                                      !  ~  -" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                             |^  0      , y  -   -/ +" << endl;
    cout << "                                   .  d }_  +" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           . kH  O      ; y  =  '_| *" << endl;
    cout << "                                   o )d ]= `#" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           , hM `O  .   ! y' r  7L! 0" << endl;
    cout << "                                   e ]d 3-.'m" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           ; hm \\O :   'H yY r  JBt O" << endl;
    cout << "                                   a-ld`8xr\"n" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           y.hn )O  i` |M yt.r -Y$t o" << endl;
    cout << "                                   a=id:6i&*n" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           jchn >O` i' lN y+_r =ySt n" << endl;
    cout << "                                   axid0ois0n" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           jChn DO~ io in y*=r +yst.m" << endl;
    cout << "                                   aoid5oisOn" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           jOhn DO= ie in yOnr *ystom" << endl;
    cout << "                                   acidP0ison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE is in your system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    getch();

    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE is [] your system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE is[  ]your system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE i[    ]our system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE [      ]ur system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DOE[        ]r system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john DO[          ] system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john D[            ]system" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john [              ]ystem" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           john[                ]stem" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           joh[                  ]tem" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           jo[                    ]em" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           j[                      ]m" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [                        ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(20);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>                       ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>                      ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>                     ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>                    ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>                   ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>                  ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>                 ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>                ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>               ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(700);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           {>>>/>>>/>               )" << endl;
    cout << "                                   ecidp0lson" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(80);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>               ]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(300);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(400);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           {>>>>>>>>>          ERR0R]" << endl;
    cout << "                                   aCidpoisen" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(80);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   acidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(1200);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   icidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   inidpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   inpdpoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   inpupoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   inputoison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   input ison" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   input uson" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   input uson" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   input usen" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    cout << "                           [>>>>>>>>>          ERROR]" << endl;
    cout << "                                   input user" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;

    setCursor(28, 9);
    cin >> user;

    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking..." << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.  " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Linking.. " << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(100);
    clearScreen();
    setCursor(0, 10);
    cout << "                                   Success :)" << endl;
    cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
    Sleep(2000);
    system("cls");
    Sleep(800);
}

int main()
{
    setWindow(80, 25);

    load();
    if (prog == -1)
    {
        title();

        prog = 1;
        level = 0;

        save();
    }

    /*load();
    if (prog == -1)
    {
        cout << endl << endl << "     ERROR: Unable to save data." << endl;
        getch();
        system("cls");
    }

    cout << endl << endl << "     Welcome " << user << "!";
    Sleep(1000);
    system("cls");*/

    active = true;
    while (active == true)
    {
        if (level > 0)
        {
            for (int x = 0; x < level; x++)
            {
                cout << folder[x];
                if (x < level - 1)
                {
                    cout << "/";
                }
            }
        }

        //cout << "level:" << level << endl << "0:" << folder[0] << " 1:" << folder[1] << " 2:" << folder[2] << endl;

        cout << ">";
        cin >> comm;

        if (comm[0] == '/')
        {
            comm.erase(0,1);

            if (level == 0)
            {
                if(comm == "folder1" || comm == "folder2" || comm == "folder3")
                {
                    folder[level] = comm;
                    level += 1;
                }
            }
            else if (level == 1)
            {
                if(comm == "folder4" || comm == "folder5" || comm == "folder6")
                {
                    folder[level] = comm;
                    level += 1;
                }
            }
        }

        if (comm == "back" && level > 0)
        {
            level -= 1;
        }

        if (comm == "exit")
        {
            active = false;
        }
    }

    return 0;
}

/* info


*/
