#ifndef SET_H
#define SET_H

template<typename Atype>
class Set {
    Atype* a;   // Массив элементов множества
    int len;    // Количество элементов

public:
    Set(int size);                // Конструктор
    ~Set();                       // Деструктор
    bool IsEmpty();               // Проверка на пустоту
    bool IsFull();                // Проверка на заполнение
    bool Add(Atype element);      // Включение элемента
    bool InSet(Atype element);    // Принадлежность элемента
    Atype Get(Atype element);     // Извлечение элемента
};

#endif
