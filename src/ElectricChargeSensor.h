#include <Arduino.h>
#include <CapacitiveSensor.h>

class ElectricChargeSensor
{
private:
    uint16_t _electric_charge_sensor_read;
    uint16_t _electric_charge_sensor_send;
    CapacitiveSensor _cs;
public:
    ElectricChargeSensor(uint16_t electric_charge_sensor_read, uint16_t electric_charge_sensor_send);
    ~ElectricChargeSensor();

    void setAutoCalibate(unsigned long auto_cal_millis);
    long getValue(uint8_t samples);
    bool isPress(uint8_t samples);
};


