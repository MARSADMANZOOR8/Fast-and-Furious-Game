// libraries
#include <iostream>
#include <windows.h>
#include <conio.h>
#include <fstream>
using namespace std;

// to clean the screen
void clear();
// to print the logo
void logo();
// to print the header
void header();
// to print the main menu
string menu();
// to print the menu for the game continue
string menu2();
// The function to reset the coordinates
void Reset();
// to print the submenu
string submenu();
// to print the keys
void keys();
// to print the instructions
void instructions();
// Funtion to run the game
void gameRunning();
// function for the  gamerunning
void gameover();
// Function to print the Maze
void printMaze2d();

// Funtion to store and read coordinates
void storeCorrdinates();
void readCoordinates();

// Function to print the winning logo
void winningLogo();

// Funtion to store and read BulletCounts
void storeCount();
void readCount();

// Funtion to store and read Health
void storeHealth();
void readHealth();

string printMaze[30][1]{

    {" ##########################################################################################################"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" #                                                                                                        #"},
    {" ##########################################################################################################"}

};
// to print the box
char box = 219;

// to print the tom tank
char printtomTank[4][13]{
    {'[', '[', '[', box, box, box, box, box, box, '=', '=', '~', '>'},
    {' ', ' ', ' ', ' ', '*', box, box, box, '*', ' ', ' ', ' ', ' '},
    {' ', box, box, box, box, box, box, box, box, box, box, box, ']'},
    {' ', '\\', '_', '@', '_', '@', '_', '@', '_', '@', '_', '@', ' '}};
void printtomTank2d();

// To move the tom tank up down left right
void movetomTankleft();
// To move the tom tank right
void movetomTankright();
// To move the tom tank up
void movetomTankup();
// To move the tom tank down
void movetomTankdown();

// The complete functionalities of the shaw tank
void shawFunctionalities();

// The complete functionalities of the rock tank
void rockFunctionalities();

// The complete functionalities of the john tank
void johnFunctionalities();

// to print the enemy john tank
char printjohnTank[4][14]{
    {' ', ' ', ' ', ' ', ' ', '_', '_', '_', '_', '_', '_', '_', ' '},
    {'<', '=', '=', '=', '(', '`', '`', '`', '`', '`', '`', ' ', ')'},
    {' ', ' ', ' ', ' ', ' ', '\\', '(', '@', ')', '(', '@', ')', '/'},
    {' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' '}};
void printjohnTank2d();

// to print the enemy shaw tank
char printshawTank[4][14]{
    {' ', ' ', ' ', ' ', ' ', '_', '_', '_', '_', '_', '_', '_', ' '},
    {'<', '=', '=', '=', '(', '`', '`', '`', '`', '`', '`', ' ', ')'},
    {' ', ' ', ' ', ' ', ' ', '\\', '(', '@', ')', '(', '@', ')', '/'},
    {' ', ' ', ' ', ' ', ' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' '}};
void printshawTank2d();

// rock tank character
char printrockTank[4][14]{
    {' ', '_', '_', '_', '_', '_', '_', '_', ' ', ' ', ' ', ' ', ' ', ' '},
    {'(', ' ', '`', '`', '`', '`', '`', '`', '`', ')', '=', '=', '=', '>'},
    {' ', '\\', '(', '@', ')', '(', '@', ')', '/', ' ', ' ', ' ', ' ', ' '},
    {' ', ' ', '*', '*', '*', '*', '*', '*', ' ', ' ', ' ', ' ', ' ', ' '}};
void printrockTank2d();

// to erase the player tank
void erasetomTank();

// To erase the john tank
void erasejohnTank();

// To erase the shaw tank
void eraseshawTank();

// To erase the rock tank
void eraserockTank();

// to move the shaw tank
void moveshawTank();

// to move the john tank
void movejohnTank();

// to move the rock tank
void moverockTank();

// SHAW  Tank FIRST direction
string shawtankDirection = "Up";

// JOHN tank first direction
string johntankDirection = "Left";

// ROCK tank first direction
string rocktankDirection = "Up";

// coordinates of the tank where we have to print it
// Player Coordinate
int tankX = 35;
int tankY = 8;
// JOHN tank coordinate
int enemyjX = 87;
int enemyjY = 14;
// Shaw tank coordinate
int enemysX = 89;
int enemysY = 5;
// Rock tank coordinate
int enemyrX = 3;
int enemyrY = 12;

// hero's Bulllets towards right side
int bxRight[10000];
int byRight[10000];
void generateBulletR();
void moveBulletR();
bool isbulletActiveR[10000];
int bulletcountRight = 0;

// hero's Bulllets towards left side
int bxLeft[10000];
int byLeft[10000];
void generateBulletL();
void moveBulletL();
bool isbulletActiveL[10000];
int bulletcountLeft = 0;

// to print the bullets
void printBullet(int x, int y);
void printbulletLeft(int x, int y);

// to erase the bullets
void eraseBullet(int x, int y);
void makebulletinActive(int index);

// Collision detection with enemies
void bulletCollisionwithshawTank();
void bulletCollisionwithjohnTank();
void bulletCollisionwithrockTank();

// to add the score
void addScore();

// to print the score
void printScore();

// Shaw Tank Bullets funtions
int shawBulletfx[10000];
int shawBulletfy[10000];
bool shawbulletActive[10000];
int shawbulletCount = 0;

// to generate the shaw bullets
void generateshawBullet();

// to move the shaw bullets
void moveshawBullet();

// the collision detector for shaw bullets
void shawcollisionCheck();

// to print the shaw bullets
void printshawBullet(int x, int y);

// to erase the shaw bullets
void eraseshawBullet(int x, int y);

// John Tank Bullets Functions
int johnBulletsX[10000];
int johnBulletsY[10000];
bool johnbulletActive[10000];
int johnbulletCount = 0;

// to generate the john bullets
void generatejohnBullet();

// to move the john bullets
void movejohnBullet();

// the collision detector for the shaw bullets
void johncollisionCheck();

// to print the john bullets
void printjohnBullet(int x, int y);

// to erase the john bullets
void erasejohnBullet(int x, int y);

// John Tank Bullets Functions
int rockBulletrX[10000];
int rockBulletrY[10000];
bool rockbulletActive[10000];
int rockbulletCount = 0;

// to generate the rock bullets
void generaterockBullet();
// to move the john bullets
void moverockBullet();
// the collision detector for the shaw bullets
void rockcollisionCheck();
// to print the john bullets
void printrockBullet(int x, int y);
// to erase the john bullets
void eraserockBullet(int x, int y);

// function to print the health of the tank
void printtankHealth();

// health of the hero
void tankHealth();

// health of the john Tank
void johnHealth();
void printjohnHealth();

// health of the shaw Tank
void shawHealth();
void printshawHealth();

// health of the rock Tank
void rockHealth();
void printrockHealth();

// level Two after the level one started
void levelTwo();

// get character
char getCharAtxy(short int x, short int y);

// To move the cursor at the certain position
void gotoxy(int x, int y);

// VARIABLES

int shawtankHealth = 30;
int rocktankHealth = 30;
int johntankHealth = 10;

// variable for the score
int score;

// variable for the tank health
int Tank_health = 30;

main()
{
    string choice1;
    string choice2;
    int timer;
    system("cls");
    logo();
    clear();
    header();
    clear();
    while (choice1 != "0")
    {
        readCount();
        if (bulletcountLeft > 2 || bulletcountRight > 2)
        {
            choice1 = menu2();
            system("cls");
            if (choice1 == "1")
            {
                readCoordinates();
                readHealth();
                gameRunning();
            }
            if (choice1 == "2")
            {
                Reset();
                gameRunning();
            }

            if (choice1 == "3")
            {
                while (choice2 != "3")
                {
                    choice2 = submenu();
                    if (choice2 == "1")
                    {
                        system("cls");
                        keys();
                    }
                    if (choice2 == "2")
                    {

                        instructions();
                    }
                    if (choice2 == "3")
                    {
                        break;
                    }
                }
            }
            if (choice1 == "4")
            {
                break;
            }
        }
        else
        {
            choice1 = menu();
            system("cls");
            if (choice1 == "1")
            {
                gameRunning();
            }

            if (choice1 == "2")
            {
                while (choice2 != "3")
                {
                    choice2 = submenu();
                    if (choice2 == "1")
                    {
                        system("cls");
                        keys();
                    }
                    if (choice2 == "2")
                    {
                        system("cls");
                        instructions();
                    }
                    if (choice2 == "3")
                    {
                        break;
                    }
                }
            }
            if (choice1 == "3")
            {
                break;
            }
        }
    }
}
// game running function
void gameRunning()
{

    system("cls");
    printMaze2d();
    printtomTank2d();
    printshawTank2d();
    printrockTank2d();

    while (true)
    {

        printScore();
        printtankHealth();
        printshawHealth();
        printrockHealth();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movetomTankleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movetomTankright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movetomTankup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movetomTankdown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBulletR();
        }
        if (GetAsyncKeyState(VK_TAB))
        {
            generateBulletL();
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            storeCorrdinates();
            storeCount();
            storeHealth();
            break;
        }

        // to move the bullets of hero  left and right
        moveBulletR();
        moveBulletL();

        shawFunctionalities();
        rockFunctionalities();
        Sleep(35);
        if (shawtankHealth <= 0 && rocktankHealth <= 0)
        {
            shawtankHealth = 0;
            rocktankHealth = 0;

            levelTwo();
        }
        if (johntankHealth <= 0 && shawtankHealth <= 0)
        {
            system("cls");
            winningLogo();
            cout << "Press any key to continue " << endl;
            getch();
            Reset();
            break;
        }
        if (Tank_health <= 0)
        {
            system("cls");
            Reset();
            gameover();
            cout << "Press any key to continue " << endl;
            getch();
            break;
        }
    }
}
// win logo
void winningLogo()
{
    cout << "         /$$     /$$                        /$$      /$$                            " << endl;
    cout << "        |  $$   /$$/                       | $$  /$ | $$                            " << endl;
    cout << "         \\  $$ /$$//$$$$$$  /$$   /$$     | $$ /$$$| $$  /$$$$$$  /$$$$$$$         " << endl;
    cout << "          \\  $$$$//$$_  $$| $$  | $$      | $$/$$ $$ $$ /$$_  $$| $$__  $$         " << endl;
    cout << "           \\  $$/| $$  \\ $$| $$  | $$    | $$$$_  $$$$| $$  \\ $$| $$  \\ $$      " << endl;
    cout << "            | $$ | $$  | $$| $$  | $$      | $$$/ \\  $$$| $$  | $$| $$  | $$       " << endl;
    cout << "            | $$ |  $$$$$$/|  $$$$$$/      | $$/   \\  $$|  $$$$$$/| $$  | $$       " << endl;
    cout << "            |_/  \\__/  \\__/       |/     \\/ \\__/ |/  |_/                        " << endl;
}
// to store the coordinates of the enemy
void storeCorrdinates()
{
    fstream file;
    file.open("coordinates.txt", ios::out);
    {
        file << tankX << endl;
        file << tankY << endl;
        file << enemyjX << endl;
        file << enemyjY << endl;
        file << enemysX << endl;
        file << enemysY << endl;
        file << enemyrX << endl;
        file << enemyrY << endl;
    }
    file.close();
}
// to read the coordinates of the all tank
void readCoordinates()
{
    fstream file;
    file.open("coordinates.txt", ios::in);
    {
        file >> tankX;
        file >> tankY;
        file >> enemyjX;
        file >> enemyjY;
        file >> enemysX;
        file >> enemysY;
        file >> enemyrX;
        file >> enemyrY;
    }
    file.close();
}
// to store the number of bullets
void storeCount()
{
    fstream file;
    file.open("Count.txt", ios::out);
    {
        file << bulletcountLeft << endl;
        file << bulletcountRight << endl;
        file << shawbulletCount << endl;
        file << johnbulletCount << endl;
        file << rockbulletCount << endl;
    }
    file.close();
}
// to the number of the bullets
void readCount()
{
    fstream file;
    file.open("Count.txt", ios::in);
    {
        file >> bulletcountLeft;
        file >> bulletcountRight;
        file >> shawbulletCount;
        file >> johnbulletCount;
        file >> rockbulletCount;
    }
    file.close();
}
// to store the health of the tanks
void storeHealth()
{
    fstream file;
    file.open("Health.txt", ios::out);
    {
        file << Tank_health << endl;
        file << shawtankHealth << endl;
        file << rocktankHealth << endl;
        file << johntankHealth << endl;
    }
    file.close();
}
// to read the health of the tanks
void readHealth()
{
    fstream file;
    file.open("Health.txt", ios::in);
    {
        file >> Tank_health;
        file >> shawtankHealth;
        file >> rocktankHealth;
        file >> johntankHealth;
    }
    file.close();
}
// to reset the coordinates
void Reset()
{
    tankX = 35;
    tankY = 8;
    // JOHN tank coordinate
    enemyjX = 87;
    enemyjY = 14;
    // Shaw tank coordinate
    enemysX = 89;
    enemysY = 5;
    // Rock tank coordinate
    enemyrX = 3;
    enemyrY = 12;

    bulletcountLeft = 0;
    shawbulletCount = 0;
    johnbulletCount = 0;
    rockbulletCount = 0;

    Tank_health = 30;
    shawtankHealth = 30;
    rocktankHealth = 30;
    johntankHealth = 10;
}
// logo function
void logo()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 12;
    SetConsoleTextAttribute(hConsole, k);

    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                                                                                  " << endl;
    cout << "                __________________________________________|||     ___ FIRE        " << endl;
    cout << "                __________________________________________ ------|___ >>>>>>>>    " << endl;
    cout << "                    _________________|||_______________   |||                     " << endl;
    cout << "                   |                                   |                          " << endl;
    cout << "                   |___________________________________|                          " << endl;
    cout << "                      |||                         |||                             " << endl;
    cout << "          ========================================================                " << endl;
    cout << "         |   @@           @@          @@          @@         @@   |               " << endl;
    cout << "         | @@  @@       @@  @@      @@  @@      @@  @@     @@  @@ |               " << endl;
    cout << "         |   @@           @@          @@          @@         @@   |               " << endl;
    cout << "          ========================================================                " << endl;
    cout << "                                                                                  " << endl;
    cout << "______________________________FAST AND FURIOUS____________________________________" << endl;
    cout << "                                                                                  " << endl;
}
// function to print the header
void header()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);
    cout << "                                                                                             " << endl;
    cout << "                                                                                             " << endl;
    cout << "              #########       ##       #####    ############                                 " << endl;
    cout << "              ##            ##  ##    #             ##                                       " << endl;
    cout << "              #########    ##    ##    ##           ##        ##   ##      ## ######         " << endl;
    cout << "              ##          ##########     ##         ##      ##  ## ## ##   ## ##    ##       " << endl;
    cout << "              ##          ##      ##       ##       ##      ###### ##   ## ## ##    ##       " << endl;
    cout << "              ##          ##      ##   #####        ##      ##  ## ##      ## ######         " << endl;
    cout << "                                                                                             " << endl;
    cout << "       ############     ####     ####    ########    ###      ####     ####    ####   ###### " << endl;
    cout << "       ###              ####     ####    ##    ##    ###    ##    ##   ####    ####  #       " << endl;
    cout << "       ############     ####     ####    ########    ###   ##      ##  ####    ####   ##     " << endl;
    cout << "       ###              ####     ####    ##   #      ###   ##      ##  ####    ####     ##   " << endl;
    cout << "       ###              ####     ####    ##    #     ###    ##    ##   ####    ####       ## " << endl;
    cout << "       ###              #############    ##     #    ###      ####     ############   ###### " << endl;
    cout << "                                                                                             " << endl;
}

// main menu function
string menu()
{
    system("cls");
    string option;
    cout << "                          " << endl;
    cout << "__________________________" << endl;
    cout << "1.  Start                 " << endl;
    cout << "2.  Option                " << endl;
    cout << "0.  Exit                  " << endl;
    cout << "ENTER ONE OPTION  :        " << endl;
    cin >> option;
    return option;
}

// menu for when the game is continue
string menu2()
{
    system("cls");
    string option;
    cout << "                          " << endl;
    cout << "__________________________" << endl;
    cout << "1.  Continue              " << endl;
    cout << "2.  Start New             " << endl;
    cout << "3.  Option                " << endl;
    cout << "0.  Exit                  " << endl;
    cout << "ENTER ONE OPTION  :        " << endl;
    cin >> option;
    return option;
}

// submenu function after the main menu function
string submenu()
{
    system("cls");
    string option1;
    cout << "                   " << endl;
    cout << "1.  Keys.          " << endl;
    cout << "2.  Instructions.  " << endl;
    cout << "3.  Exit           " << endl;
    cout << "Enter any option : " << endl;
    cin >> option1;
    return option1;
}

// important keys function description
void keys()
{
    cout << "KEYS.                            " << endl;
    cout << "________________________________ " << endl;
    cout << "1. UP                     GO UP  " << endl;
    cout << "2. DOWN                   GO DOWN" << endl;
    cout << "3. LEFT                   GO LEFT" << endl;
    cout << "4. RIGHT                  GO RIGHT" << endl;
    cout << "5. FIRE Right             SPACE   " << endl;
    cout << "6. Fire Left              TAB     " << endl;
    cout << "7. TO stop the game       Esc     " << endl;
    cout << "Press any key to continue ........" << endl;
    getch();
}

// the insrtuction function for the users
void instructions()
{
    cout << "INSTRUCTIONS                                                               " << endl;
    cout << "Please do not press any invalid key and follow the keys menu given below.  " << endl;
    cout << "Press any key to continue ........" << endl;
    getch();
}

// logo of the gameover
void gameover()
{

    cout << "        GGGGGGGGGGGGG              AAA              MMMMMMMM               MMMMMMMEEEEEEEEEEEEEEEEEEEEEE EEEEEEEEEEEEEEEEEEEENNNNNNNN        NNNNNNNDDDDDDDDDDDDD             " << endl;
    cout << "       G::::::::::::G             A:::A             M:::::::M             M:::::::E::::::::::::::::::::E ::::::::::::::::::::N:::::::N       N::::::D::::::::::::DDD          " << endl;
    cout << "   GG:::::::::::::::G            A:::::A            M::::::::M           M::::::::E::::::::::::::::::::E ::::::::::::::::::::N::::::::N      N::::::D:::::::::::::::DD        " << endl;
    cout << "  G:::::GGGGGGGG::::G           A:::::::A           M:::::::::M         M:::::::::EE::::::EEEEEEEEE::::E E::::::EEEEEEEEE::::N:::::::::N     N::::::DDD:::::DDDDD:::::D       " << endl;
    cout << " G:::::G       GGGGGG          A:::::::::A          M::::::::::M       M::::::::::ME:::::E       EEEEEE  E:::::E       EEEEEN::::::::::N    N::::::N D:::::D    D:::::D      " << endl;
    cout << " G:::::G                      A:::::A:::::A         M:::::::::::M     M:::::::::::ME:::::E               E:::::E            N:::::::::::N   N::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G                     A:::::A A:::::A        M:::::::M::::M   M::::M:::::::ME::::::EEEEEEEEEE     E::::::EEEEEEEEEE  N:::::::N::::N  N::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G    GGGGGGGGGG      A:::::A   A:::::A       M::::::M M::::M M::::M M::::::ME:::::::::::::::E     E:::::::::::::::E  N::::::N N::::N N::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G    G::::::::G     A:::::A     A:::::A      M::::::M  M::::M::::M  M::::::ME:::::::::::::::E     E:::::::::::::::E  N::::::N  N::::N:::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G    GGGGG::::G    A:::::AAAAAAAAA:::::A     M::::::M   M:::::::M   M::::::ME::::::EEEEEEEEEE     E::::::EEEEEEEEEE  N::::::N   N:::::::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G        G::::G   A:::::::::::::::::::::A    M::::::M    M:::::M    M::::::ME:::::E               E:::::E            N::::::N    N::::::::::N D:::::D     D:::::D     " << endl;
    cout << " G:::::G       G::::G   A:::::AAAAAAAAAAAAA:::::A   M::::::M     MMMMM     M::::::ME:::::E       EEEEEE  E:::::E       EEEEEN::::::N     N:::::::::N D:::::D    D:::::D      " << endl;
    cout << "  G:::::GGGGGGGG::::G  A:::::A             A:::::A  M::::::M               M::::::EE::::::EEEEEEEE:::::E E::::::EEEEEEEE:::::N::::::N      N::::::::DDD:::::DDDDD:::::D       " << endl;
    cout << "   GG:::::::::::::::G A:::::A               A:::::A M::::::M               M::::::E::::::::::::::::::::E ::::::::::::::::::::N::::::N       N:::::::D:::::::::::::::DD        " << endl;
    cout << "     GGG::::::GGG:::GA:::::A                 A:::::AM::::::M               M::::::E::::::::::::::::::::E ::::::::::::::::::::N::::::N        N::::::D::::::::::::DDD          " << endl;
    cout << "        GGGGGG   GGGAAAAAAA                   AAAAAAMMMMMMMM               MMMMMMMEEEEEEEEEEEEEEEEEEEEEE EEEEEEEEEEEEEEEEEEEENNNNNNNN         NNNNNNDDDDDDDDDDDDD             " << endl;
    cout << "press any key to continue " << endl;
    getch();
}

// clear function
void clear()
{
    cout << "Press any key to continue....";
    getch();
    system("cls");
}

// to print the maze in 2D form
void printMaze2d()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 1;
    SetConsoleTextAttribute(hConsole, k);
    for (int index = 0; index < 30; index++)
    {
        cout << printMaze[index][0] << endl;
    }
}

// function to print the tom tank in 2D form
void printtomTank2d()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 4;
    SetConsoleTextAttribute(hConsole, k);
    for (int i = 0; i < 4; i++)
    {
        gotoxy(tankX, tankY + i);
        for (int j = 0; j < 13; j++)
        {
            cout << printtomTank[i][j];
        }
        cout << endl;
    }
}

// function to print the john tank in 2d form
void printjohnTank2d()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 3;
    SetConsoleTextAttribute(hConsole, k);
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyjX, enemyjY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << printjohnTank[i][j];
        }
        cout << endl;
    }
}

// function to print the Shaw tank in 2D form
void printshawTank2d()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 2;
    SetConsoleTextAttribute(hConsole, k);
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemysX, enemysY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << printshawTank[i][j];
        }
        cout << endl;
    }
}

// function to print the rock tank in 2D form
void printrockTank2d()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 5;
    SetConsoleTextAttribute(hConsole, k);
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyrX, enemyrY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << printrockTank[i][j];
        }
        // enemyrY++;
        cout << endl;
    }
}

// to erase the tom tank
void erasetomTank()
{

    for (int i = 0; i < 4; i++)
    {
        gotoxy(tankX, tankY + i);
        for (int j = 0; j < 13; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}

// To erase the john tank
void erasejohnTank()
{
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyjX, enemyjY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

// To erase the shaw tank
void eraseshawTank()
{
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemysX, enemysY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

// To erase the rock tank
void eraserockTank()
{
    for (int i = 0; i < 4; i++)
    {
        gotoxy(enemyrX, enemyrY + i);
        for (int j = 0; j < 14; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

// to move the tank left
void movetomTankleft()
{
    char next = getCharAtxy(tankX - 1, tankY);
    if (next == ' ' || next == '.' || next == '-')
    {
        erasetomTank();
        tankX = tankX - 1;
        printtomTank2d();
    }
}

// to move the tank right
void movetomTankright()
{

    char next = getCharAtxy(tankX + 13, tankY);
    if (next == ' ' || next == '.' || next == '-')
    {
        erasetomTank();
        tankX = tankX + 1;
        printtomTank2d();
    }
}

// to move the tank up
void movetomTankup()
{

    char next = getCharAtxy(tankX, tankY - 1);
    if (next == ' ' || next == '.' || next == '-')
    {
        erasetomTank();
        tankY = tankY - 1;
        printtomTank2d();
    }
}

// to move the tank down
void movetomTankdown()
{

    char next = getCharAtxy(tankX, tankY + 4);
    if (next == ' ' || next == '.' || next == '-')
    {
        erasetomTank();
        tankY = tankY + 1;
        printtomTank2d();
    }
}

// To move the shaw tank
void moveshawTank()
{

    if (shawtankDirection == "Up")
    {
        char next = getCharAtxy(enemysX, enemysY - 1);
        if (next == ' ' || next == '.')
        {
            eraseshawTank();
            enemysY--;
            printshawTank2d();
        }
        if (enemysY <= 1)
        {
            shawtankDirection = "Down";
        }
    }
    if (shawtankDirection == "Down")
    {
        char next = getCharAtxy(enemysX, enemysY + 4);
        if (next == ' ' || next == '.')
        {
            eraseshawTank();
            enemysY++;
            printshawTank2d();
        }
        if (enemysY >= 9)
        {
            shawtankDirection = "Up";
        }
    }
}

// to move the rock tank
void moverockTank()
{

    if (rocktankDirection == "Up")
    {
        char next = getCharAtxy(enemyrX, enemyrY - 1);
        if (next == ' ' || next == '.')
        {
            eraserockTank();
            enemyrY--;
            printrockTank2d();
        }
        if (enemyrY <= 12)
        {
            rocktankDirection = "Down";
        }
    }
    if (rocktankDirection == "Down")
    {
        char next = getCharAtxy(enemyrX, enemyrY + 4);
        if (next == ' ' || next == '.')
        {
            eraserockTank();
            enemyrY++;
            printrockTank2d();
        }
        if (enemyrY >= 24)
        {
            rocktankDirection = "Up";
        }
    }
}

// to move the john tank
void movejohnTank()
{
    if (tankX > enemyjX)
    {
        char next = getCharAtxy(enemyjX + 0.01, enemyjY);

        if (next == ' ' || next == '.')
        {

            erasejohnTank();
            enemyjX++;
            printjohnTank2d();
        }
    }
    if (tankX < enemyjX)
    {
        char next = getCharAtxy(enemyjX - 0.01, enemyjY);

        if (next == ' ' || next == '.')
        {
            erasejohnTank();
            enemyjX--;
            printjohnTank2d();
        }
    }
    if (tankY > enemyjY)
    {
        char next = getCharAtxy(enemyjX, enemyjY + 0.01);

        if (next == ' ' || next == '.')
        {

            erasejohnTank();
            enemyjY++;
            printjohnTank2d();
        }
    }
    if (tankY < enemyjY)
    {
        char next = getCharAtxy(enemyjX, enemyjY - 0.01);

        if (next == ' ' || next == '.')
        {

            erasejohnTank();
            enemyjY--;
            printjohnTank2d();
        }
    }
}

// generate bullet from the hero tanks towadrs right side
void generateBulletR()
{
    bxRight[bulletcountRight] = tankX + 13;
    byRight[bulletcountRight] = tankY;
    isbulletActiveR[bulletcountRight] = true;
    gotoxy(tankX + 13, tankY);
    cout << "*";
    bulletcountRight++;
}

// to generate the bullets in the left side direction
void generateBulletL()
{

    bxLeft[bulletcountLeft] = tankX - 1;
    byLeft[bulletcountLeft] = tankY;
    isbulletActiveL[bulletcountLeft] = true;
    gotoxy(tankX - 1, tankY);
    cout << "*";
    bulletcountLeft++;
}

// move bullet towards the enemy in the  right direction
void moveBulletR()
{
    for (int x = 0; x < bulletcountRight; x++)
    {
        if (isbulletActiveR[x] == true)
        {
            char next = getCharAtxy(bxRight[x] + 1, byRight[x]);
            if (next != ' ')
            {
                eraseBullet(bxRight[x], byRight[x]);
                makebulletinActive(x);
            }
            else
            {
                eraseBullet(bxRight[x], byRight[x]);
                bxRight[x] = bxRight[x] + 1;
                printBullet(bxRight[x], byRight[x]);
            }
        }
    }
}

// to move the bullet in left direction towards the rock tank
void moveBulletL()
{
    for (int x = 0; x < bulletcountLeft; x++)
    {
        if (isbulletActiveL[x] == true)
        {
            char next = getCharAtxy(bxLeft[x] - 1, byLeft[x]);
            if (next != ' ')
            {
                eraseBullet(bxLeft[x], byLeft[x]);
                isbulletActiveL[x] = false;
            }
            else
            {
                eraseBullet(bxLeft[x], byLeft[x]);
                bxLeft[x] = bxLeft[x] - 1;
                printbulletLeft(bxLeft[x], byLeft[x]);
            }
        }
    }
}

// supporting function to print the bullets
void printBullet(int x, int y)
{
    char bulletcolourright = 16;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 4;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(x, y);
    cout << bulletcolourright;
}
void printbulletLeft(int x, int y)
{
    char bulletcolourleft = 17;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 4;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(x, y);
    cout << bulletcolourleft;
}

// supporting function to erase the bullets
void eraseBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

// function to make the bullets inactive
void makebulletinActive(int index)
{
    isbulletActiveR[index] = false;
}

// collision detection tom tank bullets with the rock tank
void bulletCollisionwithrockTank()
{
    for (int x = 0; x < bulletcountLeft; x++)
    {
        if (isbulletActiveL[x] == true)
        {
            if (bxLeft[x] - 1 == enemyrX && (byLeft[x] == enemyrY || byLeft[x] == enemyrY + 2 || byLeft[x] == enemyrY + 3))
            {
                addScore();
                rockHealth();
            }

            if (enemyrX + 14 == bxLeft[x] && enemyrY + 1 == byLeft[x])
            {
                addScore();
                rockHealth();
            }
        }
    }
}

// collision detection tom tank bullets with the shaw tank
void bulletCollisionwithshawTank()
{
    for (int x = 0; x < bulletcountRight; x++)
    {
        if (isbulletActiveR[x] == true)
        {
            if (bxRight[x] + 1 == enemysX && (byRight[x] == enemysY || byRight[x] == enemysY + 2 || byRight[x] == enemysY + 3))
            {
                addScore();
                shawHealth();
            }
            if (enemysX - 1 == bxRight[x] && enemysY + 1 == byRight[x])

            {
                addScore();
                shawHealth();
            }
        }
    }
}

// collision detection tom tank bullets with the john tank
void bulletCollisionwithjohnTank()
{
    for (int x = 0; x < bulletcountRight; x++)
    {
        if (isbulletActiveR[x] == true)
        {
            if (bxRight[x] + 1 == enemyjX && (byRight[x] == enemyjY - 1 || byRight[x] == enemyjY || byRight[x] == enemyjY + 2 || byRight[x] == enemyjY + 3))
            {
                addScore();
                johnHealth();
            }
            if (enemyjX - 1 == bxRight[x] && enemyjY + 1 == byRight[x])

            {
                addScore();
                johnHealth();
            }
        }
    }
}

// score of the player
void addScore()
{

    score = score + 1;
}

// to print the score of the player
void printScore()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(120, 8);
    cout << "Score :: " << score;
}

// to generate the shaw tank bullets
void generateshawBullet()
{
    shawBulletfx[shawbulletCount] = enemysX - 1;
    shawBulletfy[shawbulletCount] = enemysY + 1;
    shawbulletActive[shawbulletCount] = true;
    gotoxy(enemysX - 1, enemysY + 1);
    cout << "-";
    shawbulletCount++;
}

// to move the shaw tank bullets
void moveshawBullet()
{
    for (int x = 0; x < shawbulletCount; x++)
    {
        if (shawbulletActive[x] == true)
        {
            char next = getCharAtxy(shawBulletfx[x] - 1, shawBulletfy[x]);
            if (next != ' ')
            {
                eraseshawBullet(shawBulletfx[x], shawBulletfy[x]);
                shawbulletActive[x] = false;
            }
            else
            {
                eraseshawBullet(shawBulletfx[x], shawBulletfy[x]);
                shawBulletfx[x] = shawBulletfx[x] - 1;
                printshawBullet(shawBulletfx[x], shawBulletfy[x]);
            }
        }
    }
}

// to print the shaw tank
void printshawBullet(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 2;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(x, y);
    cout << "-";
}

// to erase the shaw tank bullets
void eraseshawBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

// to check the collision shaw tank bullets with the tom tank
void shawcollisionCheck()
{
    for (int x = 0; x < shawbulletCount; x++)
    {
        if (shawbulletActive[x] == true)
        {
            if (shawBulletfx[x] - 1 == tankX + 13 && (shawBulletfy[x] == tankY || shawBulletfy[x] == tankY + 2 || shawBulletfy[x] == tankY + 3))
            {
                tankHealth();
            }

            if (tankX + 13 == shawBulletfx[x] && tankY + 1 == shawBulletfy[x])
            {
                tankHealth();
            }
        }
    }
}

// to generate the john tank bullet
void generatejohnBullet()
{
    johnBulletsX[johnbulletCount] = enemyjX - 1;
    johnBulletsY[johnbulletCount] = enemyjY + 1;
    johnbulletActive[johnbulletCount] = true;
    gotoxy(enemyjX - 1, enemyjY + 1);
    cout << "-";
    johnbulletCount++;
}

// to move the john tank bullet
void movejohnBullet()
{
    for (int x = 0; x < johnbulletCount; x++)
    {
        if (johnbulletActive[x] == true)
        {
            char next = getCharAtxy(johnBulletsX[x] - 1, johnBulletsY[x]);
            if (next != ' ')
            {
                erasejohnBullet(johnBulletsX[x], johnBulletsY[x]);
                johnbulletActive[x] = false;
            }
            else
            {
                erasejohnBullet(johnBulletsX[x], johnBulletsY[x]);
                johnBulletsX[x] = johnBulletsX[x] - 1;
                printjohnBullet(johnBulletsX[x], johnBulletsY[x]);
            }
        }
    }
}

// to print the john bullet
void printjohnBullet(int x, int y)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 3;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(x, y);
    cout << "-";
}

// to erase the john tank bullet
void erasejohnBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

// to check the collision of the john tank with the tom tank
void johncollisionCheck()
{
    for (int x = 0; x < johnbulletCount; x++)
    {
        if (johnbulletActive[x] == true)
        {
            if (johnBulletsX[x] - 1 == tankX + 13 && (johnBulletsX[x] == tankY || johnBulletsY[x] == tankY + 2 || johnBulletsY[x] == tankY + 3))
            {
                tankHealth();
            }
            if (tankX + 13 == johnBulletsX[x] && tankY + 1 == johnBulletsY[x])
            {
                tankHealth();
            }
        }
    }
}

// to generate the john tank bullet
void generaterockBullet()
{
    rockBulletrX[rockbulletCount] = enemyrX + 14;
    rockBulletrY[rockbulletCount] = enemyrY + 1;
    rockbulletActive[rockbulletCount] = true;
    gotoxy(enemyrX + 14, enemyrY + 1);
    cout << ".";
    rockbulletCount++;
}

// to move the john tank bullet
void moverockBullet()
{
    for (int x = 0; x < rockbulletCount; x++)
    {
        if (rockbulletActive[x] == true)
        {
            char next = getCharAtxy(rockBulletrX[x] + 1, rockBulletrY[x]);
            if (next != ' ')
            {
                eraserockBullet(rockBulletrX[x], rockBulletrY[x]);
                johnbulletActive[x] = false;
            }
            else
            {
                eraserockBullet(rockBulletrX[x], rockBulletrY[x]);
                rockBulletrX[x] = rockBulletrX[x] + 1;
                printrockBullet(rockBulletrX[x], rockBulletrY[x]);
            }
        }
    }
}

// to print the john bullet
void printrockBullet(int x, int y)
{

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 5;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(x, y);
    cout << ".";
}

// to erase the john tank bullet
void eraserockBullet(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

// to check the collision of the john tank with the tom tank
void rockcollisionCheck()
{
    for (int x = 0; x < rockbulletCount; x++)
    {
        if (rockbulletActive[x] == true)
        {
            if (rockBulletrX[x] + 1 == tankX && (rockBulletrX[x] == tankY || rockBulletrY[x] == tankY + 2 || rockBulletrY[x] == tankY + 3))
            {
                tankHealth();
            }
            if (tankX + 13 == rockBulletrX[x] && tankY + 1 == rockBulletrY[x])
            {
                tankHealth();
            }
        }
    }
}

// to print the tank health
void printtankHealth()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(120, 9);
    cout << "Hero Tank Health :: " << Tank_health << "      ";
}

// health of the shaw
void printshawHealth()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(120, 10);
    cout << "Shaw Tank Health :: " << shawtankHealth << "      ";
}

// health of the rock
void printrockHealth()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);
    gotoxy(120, 11);
    cout << "Rock tank Health :: " << rocktankHealth << "     ";
}

// health of the john
void printjohnHealth()
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    int k = 6;
    SetConsoleTextAttribute(hConsole, k);

    gotoxy(120, 11);
    cout << "John tank Health :: " << johntankHealth << "      ";
}

// health of the hero
void tankHealth()
{
    Tank_health = Tank_health - 2;
}

// health of the john tank
void johnHealth()
{
    johntankHealth = johntankHealth - 5;
    if (johntankHealth <= 0)
    {
        johntankHealth = 0;
    }
}

// health of the shaw tank
void shawHealth()
{
    shawtankHealth = shawtankHealth - 4;
    if (shawtankHealth <= 0)
    {
        shawtankHealth = 0;
    }
}

// health of the rock tank
void rockHealth()
{

    rocktankHealth = rocktankHealth - 4;
    if (rocktankHealth <= 0)
    {
        rocktankHealth = 0;
    }
}

// level which displayed after the first level
void levelTwo()
{
    system("cls");

    printMaze2d();
    printtomTank2d();
    printjohnTank2d();
    printshawTank2d();
    enemysX = 88;
    enemysY = 4;
    shawtankHealth = 30;
    while (true)
    {

        printScore();
        printtankHealth();
        printshawHealth();
        printjohnHealth();
        if (GetAsyncKeyState(VK_LEFT))
        {
            movetomTankleft();
        }
        if (GetAsyncKeyState(VK_RIGHT))
        {
            movetomTankright();
        }
        if (GetAsyncKeyState(VK_UP))
        {
            movetomTankup();
        }
        if (GetAsyncKeyState(VK_DOWN))
        {
            movetomTankdown();
        }
        if (GetAsyncKeyState(VK_SPACE))
        {
            generateBulletR();
        }

        moveBulletR();
        shawFunctionalities();
        johnFunctionalities();
        gotoxy(120, 7);
        cout << "LEVEL 2 ";
        if (johntankHealth <= 0 && shawtankHealth <= 0)
        {
            johntankHealth = 0;
            shawtankHealth = 0;
            break;
        }
        if (Tank_health <= 0)
        {
            Tank_health = 0;
            Reset();
            break;
        }

        Sleep(100);
    }
}

// the functionalities of the shaw tank
void shawFunctionalities()
{
    if (shawtankHealth > 0)
    {
        // to move the tanks
        moveshawTank();
        // to generate and to move the bullets
        generateshawBullet();
        moveshawBullet();
        // collision of the bullets with enemies tanks
        bulletCollisionwithshawTank();
        // Enemies bullets hiting check with hero tank collision detector
        shawcollisionCheck();
    }
    else
    {
        eraseshawTank();
        for (int x = 0; x < shawbulletCount; x++)
        {
            eraseshawBullet(shawBulletfx[x], shawBulletfy[x]);
        }
    }
}

// the functionalities of the rock tank
void rockFunctionalities()
{
    if (rocktankHealth > 0)
    {
        moverockTank();
        // to generate and to move the bullets
        generaterockBullet();
        moverockBullet();
        // collision of the bullets with enemies tanks
        bulletCollisionwithrockTank();
        // Enemies bullets hiting check with hero tank collision detector
        rockcollisionCheck();
    }

    else
    {
        eraserockTank();
        for (int x = 0; x < rockbulletCount; x++)
        {
            eraserockBullet(rockBulletrX[x], rockBulletrY[x]);
        }
    }
}
// the functionalities of the john Tank
void johnFunctionalities()
{
    if (johntankHealth > 0)
    {
        // to move the john tank
        movejohnTank();
        // to move the  bulllets of the hero in the direction against the rock tank
        moveBulletR();
        // to move the john bullets  inthe direction against the hero tank
        generatejohnBullet();
        movejohnBullet();
        // bullets collision check with  the enemy
        bulletCollisionwithjohnTank();
        // Enemies bullets collision dection with the hero tank
        johncollisionCheck();
    }

    else
    {
        erasejohnTank();
        for (int x = 0; x < johnbulletCount; x++)
        {
            erasejohnBullet(johnBulletsX[x], johnBulletsY[x]);
        }
    }
}

// to move the cursor at desired place
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coorsBufSize;
    coorsBufSize.X = 1;
    coorsBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coorsBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}
