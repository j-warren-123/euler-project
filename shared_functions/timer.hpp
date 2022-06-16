// Created by xzato on 10/06/22.

#pragma once

#include <fmt/chrono.h>
#include <fmt/core.h>

#include <iostream>

namespace euler_project
{
    class simple_timer
    {
    public:
        explicit simple_timer(const char* name = "default_timer") : _name(name)
        {
            set_start_time();
        };

        void set_start_time(
            std::chrono::steady_clock::time_point start_time = std::chrono::steady_clock::now())
        {
            _start_time = start_time;
            _last = start_time;
        }

        template <class RESOLUTION>
        RESOLUTION get_elapsed_time()
        {
            return std::chrono::duration_cast<RESOLUTION>(std::chrono::steady_clock::now() -
                                                          _start_time);
        }

        template <class RESOLUTION>
        RESOLUTION time_since_last()
        {
            auto now = std::chrono::steady_clock::now();
            auto time_passed = std::chrono::duration_cast<RESOLUTION>(now - _last);
            _last = now;
            return time_passed;
        }

        template <class RESOLUTION>
        void print_elapsed_time(std::ostream& output_stream = std::cout)
        {
            output_stream << fmt::format("{}: [{}]\n", _name, get_elapsed_time<RESOLUTION>());
        }

    private:
        std::chrono::steady_clock::time_point _start_time;
        std::chrono::steady_clock::time_point _last;

        const char* _name;
    };
} // namespace euler_project