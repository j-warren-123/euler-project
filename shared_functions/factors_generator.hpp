// Created by xzato on 10/06/22.

#pragma once

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <optional>
#include <unordered_set>
#include <vector>

#include "is_divisible_by.hpp"

namespace euler_project
{
    class factors_generator
    {
    public:
        explicit factors_generator(uint64_t value) : _value(value), _current_guess(1) { }

    public:
        uint64_t operator()()
        {

            for (; !_big_values.contains(_current_guess); _current_guess++)
            {
                if (is_divisible_by(_value, _current_guess))
                {
                    _big_values.insert(_value / _current_guess);
                    return _current_guess++;
                }
            }

            if (!sorted)
            {
                // copy from unordered set
                _big_values_vector = {_big_values.begin(), _big_values.end()};
                std::sort(_big_values_vector.begin(), _big_values_vector.end());
                _current_returned_value = _big_values_vector.begin();
                sorted = true;
            }

            // return either the next value, or 0
            return _current_returned_value != _big_values_vector.end()
                       ? *(_current_returned_value++)
                       : 0;
        }

    private:
        uint64_t _value;
        uint64_t _current_guess;

    private:
        bool sorted = false;
        std::vector<uint64_t>::iterator _current_returned_value;
        std::unordered_set<uint64_t> _big_values;
        std::vector<uint64_t> _big_values_vector;
    };
} // namespace euler_project