#include <time.h>
#include <math.h>

typedef struct{
  int x;
  int y;
  int z;
}blueCube;

typedef struct{
  int x;
  int y;
  int z;
}greenCube;

typedef struct{
  int x;
  int y;
  int z;
}redCube;

typedef struct{
  int x;
  int y;
  int z;
  int set;
}keyCube;

typedef struct walls{
    int start[2];
    int end[2];
    int direction;
    int current_length;

}wall;

enum directions{
    LEFT, RIGHT, UP, DOWN
}direction;

enum enemy_type{
  RED, YELLOW
}type;

typedef struct{
  enum enemy_type t;
  enum directions d;
  int state;
  int x;
  int y;
  int z;
  int projectile;
  int projectile_flag;
  float px;
  float pz;
  float py;
  float xratio;
  float yratio;
  float zratio;
}enemy;

void redCubeEffect();

void greenCubeEffect();

void blueCubeEffect();

void initializeGame();

void chooseWall();

void moveWall();

void drawEnemy(enemy e);

void eraseEnemy(enemy e);

void enemyMovement(enemy *e);

int lineOfSight(enemy *e, int xend, int zend, int yend);

void enemyShoot();

void animateEnemy(enemy *e);

void projectileCollision(enemy *e);

void playerVector(float *xratio, float *zratio, float * yratio);

int dance();
