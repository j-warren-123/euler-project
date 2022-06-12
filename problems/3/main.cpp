//
// Created by xzato on 10/06/22.
//

#include <fmt/core.h>

#include "factors_generator.hpp"
#include "is_divisible_by.hpp"
#include "is_prime.hpp"

#include <algorithm>

int main()
{

    auto fg = euler_project::factors_generator(600851475143);

    std::vector<uint64_t> primes;
    while (uint64_t next = fg())
    {
        if (euler_project::is_prime(next))
            primes.emplace_back(next);
    }

    fmt::print("{}\n", *std::max_element(primes.begin(), primes.end()));
}
