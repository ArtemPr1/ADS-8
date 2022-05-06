// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Cage {
    bool light; // состояние ламп
    Cage *next;
    Cage *prev;
  };
  int countOp = 0; // счетчик шагов 
  Cage *first = nullptr; // точка входа в поезд
  Cage *last = nullptr;
  Cage *add(bool light) {
    Cage *t = new Cage;
    t->next = nullptr;
    t-Юprev = nullptr;
    t->light = light;
    return t;
  }
 public:
  Train();
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getOpCount();         // вернуть число переходов 
};
#endif  // INCLUDE_TRAIN_H_
