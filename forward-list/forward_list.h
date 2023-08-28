
#ifndef A_DS_FORWARD_LIST_H
#define A_DS_FORWARD_LIST_H

#include <iostream>

template <typename T>
struct Cell {
    T  value;
    Cell * next{nullptr};

};
template <typename T>
class ForwardList {
public:
    ForwardList();
    Cell<T> * FindCell(const T & value) const;
    void AddAtTheBeginning(const T & value);

private:
    Cell<T> * head_{nullptr};
};

template<typename T>
void ForwardList<T>::AddAtTheBeginning(const T &value) {
    auto old_top = head_;
    head_ = new Cell<T>{value, old_top};
}

template<typename T>
ForwardList<T>::ForwardList() {}

template<typename T>
Cell<T> * ForwardList<T>::FindCell(const T &value) const {
    auto curr_cell = head_;
    while (curr_cell){
        if (curr_cell->value == value)
            return curr_cell;
        curr_cell = curr_cell->next;
    }
    return nullptr;


}

#endif //A_DS_FORWARD_LIST_H
