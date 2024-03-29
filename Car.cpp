#include<iostream>
#include <graphics.h>

void draw_moving_car(void)
{
    initwindow(1365, 600);
    int i, j = 0;

    for (i = 0; i <= 1365; i = i + 10)
    {

        setcolor(WHITE);
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
        // For left wheel
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);

        // For right wheel
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);

        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);
        delay(100);


        setcolor(BLACK);
        line(0 + i, 300, 210 + i, 300);
        line(50 + i, 300, 75 + i, 270);
        line(75 + i, 270, 150 + i, 270);
        line(150 + i, 270, 165 + i, 300);
        line(0 + i, 300, 0 + i, 330);
        line(210 + i, 300, 210 + i, 330);
        // For left wheel of car
        circle(65 + i, 330, 15);
        circle(65 + i, 330, 2);
        // For right wheel of car
        circle(145 + i, 330, 15);
        circle(145 + i, 330, 2);
        // Line left of left wheel
        line(0 + i, 330, 50 + i, 330);
        // Line middle of both wheel
        line(80 + i, 330, 130 + i, 330);
        // Line right of right wheel
        line(210 + i, 330, 160 + i, 330);

        setcolor(YELLOW);
        line(0, 360, 1300, 360);
    }
    getch();
    closegraph();
}

int main()
{
    draw_moving_car();
    return 0;
}
