#include <gtest/gtest.h>
#include "vehicle-collector.h"

TEST(COLLECT, when_a_vehicle_report_a_measurement_it_is_fetched_stored_with_vehicle_id) {
    struct vehicle {
          int id;
          float temp;
          }v1;
    ASSERT_NEAR(v1.temp, get_vehicle_measurement(vehicle_id, motor_temp, 0.001));
}

TEST(COLLECT, Copy_telematics_to_invertory) {
 struct telematics t = {30, motor_temp, 130};
 telematics_value_passing_to_inventory(telematics t);
 ASSER_NEAR(130, i.motor_temp, 0.001);             
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
