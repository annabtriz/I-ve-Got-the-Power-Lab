#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark.hpp>
#include <catch2/benchmark/catch_constructor.hpp>
#include <catch2/generators/catch_generators_range.hpp>

#include "../src/lab2.hpp"

using namespace std;

TEST_CASE("it computes power correctly"){
    REQUIRE(naive(2, 0) == 1);
    REQUIRE(naive(2, 3) == 8);
    REQUIRE(unoptimized(2, 3) == 8);
    REQUIRE(optimized(2, 3) == 8);
    REQUIRE(naive(5, 4) == 625);
    REQUIRE(unoptimized(5, 4) == 625);
    REQUIRE(optimized(5, 4) == 625);
    REQUIRE(naive(3, 6) == 729);
    REQUIRE(unoptimized(3, 6) == 729);
    REQUIRE(optimized(3, 6) == 729);
}

TEST_CASE("benchmarking power functions") {
    int x_values[] = {2, 5, 10};
    int n_values[] = {10, 20, 30};

    for (int x : x_values) {
        for (int n : n_values) {

            BENCHMARK("naive") { 
                return naive(x, n); 
            };

            BENCHMARK("unoptimized") { 
                return unoptimized(x, n); 
            };

            BENCHMARK("optimized") { 
                return optimized(x, n); 
            };
        }
    }
}
