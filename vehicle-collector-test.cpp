#include <gtest/gtest.h>
#include "vehicle-collector.h"

TEST(COLLECT, Copy_telematics_to_invertory) {
 struct telematics t = {30, motor_temp, 130};
 telematics_value_passing_to_inventory(telematics t);
 ASSER_NEAR(130, i.motor_temp, 0.001);             
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
