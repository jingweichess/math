#pragma once

#include <array>
#include <cstdint>

constexpr std::array<std::uint64_t, 64> oneShiftedBy{ []() constexpr {
    std::array<std::uint64_t, 64> result{};

    for (std::uint32_t i = 0; i < 64; i++) {
        result[i] = 1ull << i;
    }

    return result;
}() };

#define OneShiftedBy(x) (oneShiftedBy[x])
