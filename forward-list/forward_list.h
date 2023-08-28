
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
private:
    Cell<T> * head_{nullptr};
};
#endif //A_DS_FORWARD_LIST_H
