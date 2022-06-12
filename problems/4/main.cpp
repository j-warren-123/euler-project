//
// Created by xzato on 10/06/22.
//

#include "is_palindrome.hpp"

#include <fmt/core.h>
#include <algorithm>

int main()
{
    std::vector<uint64_t> all_palindromes;
    for (uint64_t i = 999; i >= 100; i--)
    {
        for (uint64_t j = 999; j >= 100; j--)
        {
            uint64_t result = j*i;
            if (euler_project::is_palindrome(result))
            {
                all_palindromes.emplace_back(result);
            }
        }
    }

    fmt::print("{}\n", *std::max_element(all_palindromes.begin(), all_palindromes.end()));
}
