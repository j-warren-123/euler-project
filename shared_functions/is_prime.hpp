// Created by xzato on 10/06/22.

#pragma once

#include <cstdint>

#include "is_divisible_by.hpp"

namespace euler_project
{
    constexpr bool is_prime(uint64_t value)
    {

        for (uint64_t i = 2; i < value; i++)
        {
            if (is_divisible_by(value, i))
                return false;
        }
        return true;
    }
} // namespace euler_project