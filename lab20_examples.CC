/*
//1
#include <graphics.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    double x, y;
    for (x = 0; x <= 3 * M_PI; x += 0.1) {
        y = sin(x);

        int screen_x = x * 100; 
        int screen_y = 100 - y * 50; 
        putpixel(screen_x, screen_y, WHITE);
    }

    delay(50000); 
    closegraph();
    return 0;
}
*/
/*
//2
#include <graphics.h>
#include <conio.h>
#include <stdio.h>

#define ESC 27

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int font = DEFAULT_FONT;
    int size = 2;
    settextstyle(font, HORIZ_DIR, size);

    int x = 100, y = 100;

    char text[100] = "";
    char ch;
    int i = 0;
    do {
        ch = getch();
        if (ch == 13) 
            break;
        else if (ch == ESC) 
            return 0;
        else if (ch == 8) { 
            if (i > 0) {
                i--;
                text[i] = '\0';
                outtextxy(x, y, " "); 
            }
        } else {
            text[i++] = ch;
            text[i] = '\0';
            outtextxy(x, y, text);
            x += textwidth(text); 
        }
    } while (1);

    getch();
    closegraph();
    return 0;
}

*/
/*
//3
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x = 0, y = 0; 
    int dx = 1, dy = 1;


    while (!kbhit()) { 
   
        cleardevice();

  
        circle(x, y, 20); 

        x += dx;
        y += dy;

        delay(50);

        if (x <= 0 || x >= getmaxx()) {
            dx = -dx;
        }
        if (y <= 0 || y >= getmaxy()) {
            dy = -dy;
        }
    }

    closegraph();
    return 0;
}
*/
/*
//4
#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int centerX = getmaxx() / 2;
    int centerY = getmaxy() / 2;
    int radius = 50;
    int angle = 0;

    while (!kbhit()) {
        cleardevice();

        int x = centerX + radius * cos(angle * M_PI / 180);
        int y = centerY + radius * sin(angle * M_PI / 180);

        circle(x, y, 10);

        angle += 5;

        delay(100);
    }

    closegraph();
    return 0;
}

*/
/*
//5
#include <graphics.h>
#include <conio.h>

void drawShip(int x, int y) {
	
    setcolor(BROWN);
    int ship[] = {x, y, x + 200, y, x + 180, y + 50, x + 20, y + 50, x, y};
    setfillstyle(SOLID_FILL, BROWN);
    fillpoly(5, ship);

    setcolor(LIGHTGRAY);
    int sail[] = {x + 100, y, x + 100, y - 100, x + 180, y, x + 100, y};
    setfillstyle(SOLID_FILL, LIGHTGRAY);
    fillpoly(4, sail);

    setcolor(DARKGRAY);
    line(x + 100, y, x + 100, y - 100);
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int maxX = getmaxx();
    int maxY = getmaxy();
    int shipX = 0;
    int shipY = maxY / 2;

    while (!kbhit()) {
        cleardevice();

        setfillstyle(SOLID_FILL, LIGHTBLUE);
        bar(0, 0, maxX, maxY / 2);

        setfillstyle(SOLID_FILL, BLUE);
        bar(0, maxY / 2, maxX, maxY);

        drawShip(shipX, shipY);
        shipX += 5;

        if (shipX > maxX)
            shipX = 0;

        delay(70);
    }

    closegraph();
    return 0;
}

*/