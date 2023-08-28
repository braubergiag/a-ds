#include "forward_list.h"
#include <gtest/gtest.h>

static const auto COUNT{10};

TEST(ForwardList, Iterate){
    ForwardList<int> list;
    for (int i = 0; i < COUNT; ++i) {
        list.AddAtTheBeginning(i);
    }

    list.Iterate();
}


TEST(ForwardList, FindCell){
    ForwardList<int> list;
    for (int i = 0; i < COUNT; ++i) {
        list.AddAtTheBeginning(i);
    }
    for (int i = 0; i < COUNT; ++i) {
        ASSERT_TRUE( list.FindCell(i));
    }

}

TEST(ForwardList, FindCellBefore){
    ForwardList<int> list;
    for (int i = 0; i < COUNT; ++i) {
        list.AddAtTheBeginning(i);
    }
    for (int i = 0; i < COUNT; ++i) {
        ASSERT_TRUE( list.FindCellBefore(i));
    }

}