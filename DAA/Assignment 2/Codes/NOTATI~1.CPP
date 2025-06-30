#include <iostream.h>
#include <conio.h>
#include <math.h>
#include <graphics.h>
class AsymptoticComparison {
public:
    int function1(int n) { return n * n; }           
    float function2(int n) { return n * log(n); }    
    int function3(int n) { return n; }              
    void plotGraph(int start, int end) {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
        int x = 50, y_base = 400, prev_x = -1;
        int prev_y1 = -1, prev_y2 = -1, prev_y3 = -1;
        for (int i = start; i <= end; i *= 2) {
            int y1 = y_base - function1(i) / 100;   // scale O(n^2)
            int y2 = y_base - function2(i) / 10;    // scale O(n log n)
            int y3 = y_base - function3(i);         // scale O(n)
            putpixel(x, y1, BLUE);    // O(n^2)
            putpixel(x, y2, GREEN);   // O(n log n)
            putpixel(x, y3, RED);     // O(n)
            if (prev_x != -1) {
                setcolor(BLUE);
                line(prev_x, prev_y1, x, y1); // O(n^2)
                setcolor(GREEN);
                line(prev_x, prev_y2, x, y2); // O(n log n)
                setcolor(RED);
                line(prev_x, prev_y3, x, y3); // O(n)
            }
            prev_x = x;
            prev_y1 = y1;
            prev_y2 = y2;
            prev_y3 = y3;
	    x += 10;
        }
        setcolor(WHITE);
        outtextxy(50, 420, "Red: O(n), Green: O(n log n), Blue: O(n^2)");
        outtextxy(50, 450, "Shiv Arora");
        getch();
        closegraph();
    }
};
int main() {
    clrscr();
    AsymptoticComparison comparer;
    comparer.plotGraph(1, 1100);
    getch();
    return 0;
}
