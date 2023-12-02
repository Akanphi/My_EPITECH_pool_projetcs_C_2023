/*
** EPITECH PROJECT, 2023
** Game Cloud bounce
** File description:
** the bounceù
*/

#include <curses.h>
#include "my_bounce.h"
#include <stdlib.h>

void rull(ball_t *ball)
{
    char c = '\0';
    ball = malloc(sizeof(ball_t));
    ball->form = 'O';
    ball->position.x = 23;
    ball->position.y = 23;
    initscr();
    curs_set(0);
    while ((c = getch()) != 'q') {
    mvprintw(ball->position.x, ball->position.y, "%c", ball->form);
    refresh();
    }
     endwin();
}

int main(int argc, char const *argv[])
{
    ball_t *ball;
    rull(ball);
    return 0;
}

