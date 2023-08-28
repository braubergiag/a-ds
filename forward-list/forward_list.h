
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
    ~ForwardList();
    Cell<T> * FindCell(const T & value) const;
    Cell<T> * FindCellBefore(const T & value) const;
    void DeleteAfter(Cell<T> *after_me);
    void AddAtTheBeginning(const T & value);
    void AddAtTheEnd(const T & value);
    void InsertCellAfter(Cell<T> * after_me, const T & value);
    void Iterate() const;


private:
    Cell<T> * head_{nullptr};
};

template<typename T>
void ForwardList<T>::InsertCellAfter(Cell<T> *after_me, const T &value) {
    auto after_me_old_next  =  after_me->next;
    after_me->next = new Cell<T>{value,after_me_old_next};
}

template<typename T>
void ForwardList<T>::AddAtTheEnd(const T &value) {
    auto curr_cell = head_;
    while (curr_cell->next) {
        curr_cell = curr_cell->next;
    }
    curr_cell->next = new Cell<T>{value, nullptr};
}

template<typename T>
ForwardList<T>::~ForwardList() {
    while (head_->next){
        DeleteAfter(head_);
    }
    delete head_;

}

template<typename T>
void ForwardList<T>::DeleteAfter(Cell<T> *after_me) {
    auto target_cell = after_me->next;
    after_me->next = after_me->next->next;
    delete target_cell;

}

template<typename T>
void ForwardList<T>::AddAtTheBeginning(const T &value) {
    auto old_head = head_->next;
    head_->next = new Cell<T>{value, old_head};
}

template<typename T>
ForwardList<T>::ForwardList() : head_(new Cell<T>) {  head_->next = nullptr;}

template<typename T>
Cell<T> * ForwardList<T>::FindCell(const T &value) const {
    auto curr_cell = head_->next;
    while (curr_cell){
        if (curr_cell->value == value)
            return curr_cell;
        curr_cell = curr_cell->next;
    }
    return nullptr;


}
template<typename T>
Cell<T> *ForwardList<T>::FindCellBefore(const T &value) const {
    auto curr_cell = head_->next;
    while (curr_cell){
        if (curr_cell->value == value) return curr_cell;
        curr_cell = curr_cell->next;
    }
    return nullptr;
}
template<typename T>
void ForwardList<T>::Iterate() const  {
    auto it = head_->next;
    while (it){
        std::cout << it->value;
        it = it->next;
    }
    std::cout << std::endl;
}

#endif //A_DS_FORWARD_LIST_H
