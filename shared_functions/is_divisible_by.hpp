// Created by xzato on 10/06/22.

#pragma once

#include <cstdint>

namespace euler_project
{
    constexpr bool is_divisible_by(uint64_t value, uint64_t divisor)
    {
        return value % divisor == 0;
    }
} // namespace euler_project