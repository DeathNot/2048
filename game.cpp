#include "game.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

void GameWindow::init() { //每次在空格位置随机生成２或４
  srand((unsigned)time(NULL));
  int newNum = 0;
  newNum = rand() % 3 > 0 ? 2 : 4;//生成２的概率为２／３，生成４的概率为１／３
  int loc = 0;
  do {
    loc = rand() % 16;
  } while (num[loc / 4][loc % 4] != 0);//找一个没有数字的位置
  num[loc/4][loc%4] = newNum;//该位置的数字赋值为随机数２或４
}

void GameWindow::up() {//向上平移操作
  

}

void GameWindow::down() {

}

void GameWindow::left() {

}

void GameWindow::right() {

}

void GameWindow::ctrl() {
  char op;
  std::cout << "Please input your op" << std::endl;
  std::cin >> op;
  switch (op) {
    case 'w':
      up();
      show();
      break;
    case 'a':
      left();
      show();
      break;
    case 's':
      down();
      show();
      break;
    case 'd':
      right();
      show();
      break;
    default:
      std::cout << "Input error!" << std::endl;
  }
}











void GameWindow::show() {
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (num[i][j] != 0) {
        std::cout<<num[i][j]<<"\t";
      } else {
        std::cout<<" "<<"\t";
      }
    }
    std::cout<<std::endl;
  }
}
