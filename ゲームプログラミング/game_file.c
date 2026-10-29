#include <stdio.h>

#define MAZE_ROW 5
#define MAZE_COLUMN 5

//迷路のブロック
enum MazeKind {PATH, WALL, START, GOAL};
enum MazeFlag 