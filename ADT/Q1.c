//create adt point and using that data type find distance between two points
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int distance(struct point p1, struct point p2)
{
    int x = p1.x - p2.x;
    int y = p1.y - p2.y;
    return sqrt(x * x + y * y);
}

int main()
{
    struct point p1, p2;
    int x1, y1, x2, y2;
    printf("Enter the coordinates of point 1\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the coordinates of point 2\n");
    scanf("%d%d", &x2, &y2);
    p1.x = x1;
    p1.y = y1;
    p2.x = x2;
    p2.y = y2;
    printf("The distance between the two points is %d", distance(p1, p2));
    return 0;
}