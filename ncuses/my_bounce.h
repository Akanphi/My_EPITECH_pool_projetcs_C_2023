#ifndef BOUNCE
    #define BOUNCE

typedef struct coordinate
{
    int x;
    int y;
}coordinate_t;
typedef struct ball
{
    char form;
    int x;
    int y;
    coordinate_t position;
}ball_t;
void rull(ball_t *ball);
#endif
