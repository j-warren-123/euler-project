//
// Created by xzato on 10/06/22.
//

#include <fmt/core.h>

#include "is_divisible_by.hpp"

int main()
{
    uint64_t up_to = 1000;
    uint64_t total = 0;

    for (uint64_t i = 1; i != up_to; i++)
    {
        if (euler_project::is_divisible_by(i, 3) or euler_project::is_divisible_by(i, 5))
            total += i;
    }

    fmt::print("{}", total);
}