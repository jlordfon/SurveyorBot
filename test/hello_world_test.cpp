#include "hello_world_test.h"

#include <tuple>

TEST_P(adderTest, addition) {
  std::tuple<double, double, double> param = GetParam();
  EXPECT_EQ(adder_->add(std::get<0>(param), std::get<1>(param)),
            std::get<2>(param));
}

INSTANTIATE_TEST_SUITE_P(additionTests, adderTest,
                         ::testing::Values(std::make_tuple(2, 3, 5),
                                           std::make_tuple(1, 1, 2),
                                           std::make_tuple(1, 1, 1000)));