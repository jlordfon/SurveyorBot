#pragma once

#include <gtest/gtest.h>

#include "hello_world.h"

class adderTest
    : public ::testing::TestWithParam<std::tuple<double, double, double>> {
 protected:
  void SetUp() override { void* instantiate; };

  void TearDown() override { void* cleanup; };

  adder* adder_;
};