#include "ElectricChargeSensor.h"

ElectricChargeSensor::ElectricChargeSensor(uint16_t electric_charge_sensor_read, uint16_t electric_charge_sensor_send)
{
    this->_electric_charge_sensor_read = electric_charge_sensor_read;
    this->_electric_charge_sensor_send = electric_charge_sensor_send;
    this->_cs = CapacitiveSensor(_electric_charge_sensor_read,_electric_charge_sensor_send); 
}

ElectricChargeSensor::~ElectricChargeSensor()
{
} 


void setAutoCalibate(unsigned long auto_cal_millis){
    this->cs.set_CS_AutocaL_Millis(auto_cal_millis);
}

long getValue(uint8_t samples)
{
    return cs.capacitiveSensor(samples);
}

void isPress(uint8_t samples)
{
    return (this->getValue(samples) > (samples*10) ) ? true : false;
}