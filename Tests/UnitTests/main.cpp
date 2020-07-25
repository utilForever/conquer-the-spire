// Copyright (c) 2020 conquer-the-spire Team
// Chris Ohk, Sangyun Chung, Seokwon Moon, Taehwan Yu, Jinwoo Park, Seongmin Cho

// We are making my contributions/submissions to this project solely in our
// personal capacity and are not conveying any rights to any intellectual
// property of any third parties.

#define DOCTEST_CONFIG_IMPLEMENT
#include <doctest.h>

int main()
{
    doctest::Context context;

    // Run queries, or run tests unless --no-run is specified
    const int res = context.run();

    return res;
}