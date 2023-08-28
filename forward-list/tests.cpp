#include "forward_list.h"
#include <gtest/gtest.h>




TEST(SingleList, FindCell){
    ForwardList<int> list;
    const auto count{10};
    for (int i = 0; i < count; ++i) {
        list.AddAtTheBeginning(i);
    }
    for (int i = 0; i < count; ++i) {
        ASSERT_TRUE( list.FindCell(i));
    }

}

TEST(SingleList, FindCellBefore){
    ForwardList<int> list;
    const auto count{10};
    for (int i = 0; i < count; ++i) {
        list.AddAtTheBeginning(i);
    }
    for (int i = 0; i < count; ++i) {
        ASSERT_TRUE( list.FindCellBefore(i));
    }

}