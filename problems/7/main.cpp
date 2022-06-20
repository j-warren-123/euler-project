//
// Created by xzato on 10/06/22.
//

#include "is_prime.hpp"

#include <fmt/core.h>
#include <range/v3/all.hpp>

int main()
{
    using ranges::views::iota;
    using ranges::views::filter;
    auto primes = iota(1) | filter([](uint64_t i) { return euler_project::is_prime(i); });
    fmt::print("{}\n", *std::next(primes.begin(), 10'001));
}
