// Created by xzato on 10/06/22.

#pragma once

#include <cstdint>
#include <sstream>
#include <string>

namespace euler_project
{
    bool is_palindrome(uint64_t value)
    {
        std::stringstream ss;
        ss << value;
        std::string value_as_string = ss.str();
        std::string reversed_value_as_string = value_as_string;
        std::reverse_copy(value_as_string.begin(),
                          value_as_string.end(),
                          reversed_value_as_string.begin());

        return reversed_value_as_string == value_as_string;
    }
} // namespace euler_project
