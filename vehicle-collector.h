enum measure {
 motor_temp,
 battery_pc,
 battery_temp
};

struct telematics {
  int vehicle_id;
  int type;
  measure measurement;
};

struct inventory {
  int vehicle_id;
  float motor_temp;
  float battery_pc;
  float battery_temp;
};

telematics_value_passing_to_inventory(telematics t) {

struct inventory i;

i.vehicle_id = t.vehicle_id;
if (t.type == motor_temp) {
    i.motor_temp = t.measurement;
    }
    else if (t.type == battery_temp) {
    i.battery_temp = t.measurement;
    }
    else {
      i.battery_pc = t.battery_pc;
    }
 }
