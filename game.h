#ifndef GAME_H_
#define GAME_H_

class GameWindow
{
private:
  int num[4][4] = {{0}};
public:
  void init();
  void show();
  void left();
  void right();
  void up();
  void down();
  void ctrl();
};

#endif
