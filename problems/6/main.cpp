//
// Created by xzato on 10/06/22.
//

#include <fmt/core.h>
#include <range/v3/all.hpp>

int main()
{
    using namespace ranges;

    auto range = views::iota(uint64_t{1}, uint64_t{101});

    uint64_t squared_sum =
        accumulate(range | views::transform([](uint64_t i) { return std::pow(i, 2); }), 0);
    fmt::print("{}\n", squared_sum);

    uint64_t sum_of_squares = std::pow(accumulate(range, 0), 2);
    fmt::print("{}\n", sum_of_squares);

    fmt::print("{}\n", sum_of_squares - squared_sum);
}
