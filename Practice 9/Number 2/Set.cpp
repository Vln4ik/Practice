#include "Set.h"

template<typename Atype>
Set<Atype>::Set(int size) {
    len = size;
    a = new Atype[size];
    for (int i = 0; i < size; i++)
        a[i] = 0; // Для базовых типов. Для нестандартных определить.
}

template<typename Atype>
Set<Atype>::~Set() {
    delete[] a;
}

template<typename Atype>
bool Set<Atype>::IsEmpty() {
    return len == 0;
}

template<typename Atype>
bool Set<Atype>::IsFull() {
    return len >= sizeof(a) / sizeof(a[0]);
}

template<typename Atype>
bool Set<Atype>::Add(Atype element) {
    if (InSet(element)) {
        return false; // Элемент уже присутствует во множестве
    }
    if (!IsFull()) {
        a[len] = element;
        len++;
        return true;
    }
    return false; // Множество полное
}

template<typename Atype>
bool Set<Atype>::InSet(Atype element) {
    for (int i = 0; i < len; i++) {
        if (a[i] == element) {
            return true; // Элемент принадлежит множеству
        }
    }
    return false; // Элемент не принадлежит множеству
}

template<typename Atype>
Atype Set<Atype>::Get(Atype element) {
    for (int i = 0; i < len; i++) {
        if (a[i] == element) {
            Atype result = a[i];
            for (int j = i; j < len - 1; j++) {
                a[j] = a[j + 1];
            }
            len--;
            return result;
        }
    }
    return 0; // Элемент не найден в множестве
}
