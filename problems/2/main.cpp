//
// Created by xzato on 10/06/22.
//

#include <fmt/core.h>

#include "is_divisible_by.hpp"

class fib_gen
{
public:
    uint64_t operator()()
    {
        uint64_t next = _current + _previous;
        _previous = _current;
        _current = next;
        return next;
    }

private:
    uint64_t _current = 1;
    uint64_t _previous = 0;
};

int main()
{
    uint64_t up_to = 4'000'000;
    //uint64_t up_to = 89;
    uint64_t total = 0;
    auto fib_generator = fib_gen();
    while (true)
    {
        auto next_number = fib_generator();
        if (next_number > up_to)
            break;



        if (euler_project::is_divisible_by(next_number, 2))
            total += next_number;
    }

    fmt::print("{}\n", total);
}
