/*
 * Done by:
 * Student Name: David Hrytsenok
 * Student Group: B-121-24-1-SE
 * pracs 2.2, 2.3, 2.4
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <thread>
#include <chrono>

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

const int MAX_HEIGHT = 100;
const int MAX_WIDTH = 200;

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printTree(char tree[][MAX_WIDTH], int height, int width, bool lightsOn)
{
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            char c = tree[i][j];
            if (c == '*')
            {
                cout << "\033[32m" << c << "\033[0m";
            }
            else if (c == '@' || c == '$' || c == '%' || c == '#')
            {
                if (lightsOn)
                {
                    cout << "\033[93m" << c << "\033[0m";
                }
                else
                {
                    cout << "\033[37m" << c << "\033[0m";
                }
            }
            else
            {
                cout << c;
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of levels: ";
    cin >> n;

    if (n <= 0 || n > 10)
    {
        cout << "Invalid number of levels. Please enter a number from 1 to 10." << endl;
        return 1;
    }

    int max_width = n * 2 + n * 2 + 1;
    int max_height = n * n + 2;

    char tree[MAX_HEIGHT][MAX_WIDTH];

    for (int i = 0; i < MAX_HEIGHT; i++)
    {
        for (int j = 0; j < MAX_WIDTH; j++)
        {
            tree[i][j] = ' ';
        }
    }

    int current_height = 0;
    for (int level = 1; level <= n; level++)
    {
        int level_height = level + 1;
        for (int i = 0; i < level_height; i++)
        {
            int stars = i * 2 + 1;
            int spaces = max_width / 2 - stars / 2;
            for (int j = 0; j < stars; j++)
            {
                tree[current_height + i][spaces + j] = '*';
            }
        }
        current_height += level_height;
    }

    int trunk_height = 2;
    int trunk_width = 1;
    int spaces = max_width / 2 - trunk_width / 2;
    for (int i = 0; i < trunk_height; i++)
    {
        for (int j = 0; j < trunk_width; j++)
        {
            tree[current_height + i][spaces + j] = '*';
        }
    }
    current_height += trunk_height;

    srand(time(0));
    char ornaments[] = {'@', '$', '%', '#'};
    int num_ornaments = n * 10;
    for (int k = 0; k < num_ornaments; k++)
    {
        int i = rand() % current_height;
        int j = rand() % max_width;
        if (tree[i][j] == '*')
        {
            tree[i][j] = ornaments[rand() % 4];
        }
    }

    ofstream outfile("tree.txt");
    for (int i = 0; i < current_height; i++)
    {
        for (int j = 0; j < max_width; j++)
        {
            outfile << tree[i][j];
        }
        outfile << endl;
    }
    outfile.close();

    for (int t = 0; t < 20; t++)
    {
        clearScreen();
        bool lightsOn = t % 2 == 0;
        printTree(tree, current_height, max_width, lightsOn);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }

    return 0;
}
