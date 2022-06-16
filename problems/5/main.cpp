//
// Created by xzato on 10/06/22.
//

#include "is_divisible_by.hpp"

#include <range/v3/all.hpp>
#include <fmt/core.h>

int main()
{
    using namespace ranges;
    fmt::print("{}\n", *(views::iota(20) | views::filter([](int i){
                             for (size_t j = 20; j > 1; j--)
                             {
                                 if (!euler_project::is_divisible_by(i, j))
                                     return false;
                             }
                             return true;
                         })).begin());
}
