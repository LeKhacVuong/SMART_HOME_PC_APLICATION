//
// Created by mrgundam on 06/05/2024.
//

#ifndef SM_MODBUS_DEFINE_H
#define SM_MODBUS_DEFINE_H

#define MODBUS_MAX_COILS_SUPPORT    250

#define MODBUS_RESPONSE_TIMEOUT_DEFAULT 500

#define BSS_MODBUS_COM_BAUD_RATE_DEFAULT    9600

#define SLAVE_ID_OFFSET                     1

enum MODBUS_FUNCTION_CODE{
    READ_COILS                          = 0x01,
    READ_DISCRETE_INPUT                 = 0x02,
    READ_HOLDING_REGISTERS              = 0x03,
    READ_INPUT_REGISTERS                = 0x04,
    WRITE_SINGLE_COIL                   = 0x05,
    WRITE_SINGLE_HOLDING_REGISTER       = 0x06,
    WRITE_MULTIPLE_COILS                = 0x15,
    WRITE_MULTIPLE_HOLDING_REGISTERS    = 0x16,
    READ_FILE_RECORD                    = 0x14,
    WRITE_FILE_RECORD                   = 0x15
};

typedef enum {
    // Library errors
    MODBUS_ERROR_INVALID_UNIT_ID = -7,  /**< Received invalid unit ID in response from server */
    MODBUS_ERROR_INVALID_TCP_MBAP = -6, /**< Received invalid TCP MBAP */
    MODBUS_ERROR_CRC = -5,              /**< Received invalid CRC */
    MODBUS_ERROR_TRANSPORT = -4,        /**< Transport error */
    MODBUS_ERROR_TIMEOUT = -3,          /**< Read/write timeout occurred */
    MODBUS_ERROR_INVALID_RESPONSE = -2, /**< Received invalid response from server */
    MODBUS_ERROR_INVALID_ARGUMENT = -1, /**< Invalid argument provided */
    MODBUS_ERROR_NONE = 0,              /**< No error */

    // Modbus exceptions
    MODBUS_EXCEPTION_ILLEGAL_FUNCTION = 1,      /**< Modbus exception 1 */
    MODBUS_EXCEPTION_ILLEGAL_DATA_ADDRESS = 2,  /**< Modbus exception 2 */
    MODBUS_EXCEPTION_ILLEGAL_DATA_VALUE = 3,    /**< Modbus exception 3 */
    MODBUS_EXCEPTION_SERVER_DEVICE_FAILURE = 4, /**< Modbus exception 4 */
}MODBUS_ERROR_CODE;

/// DECODE register Value;
#define MODBUS_GET_HIGH_BYTE(value)         (((value) >> 8) & 0xFF)
#define MODBUS_GET_LOW_BYTE(value)          ((value) & 0xFF)


/// MB INPUT REG

#define MB_INPUT_REG_SYNC_NUBER             40

#define MB_INPUT_REG_DEV_TIME               0
#define MB_INPUT_REG_DOOR_STT               1
#define MB_INPUT_REG_LIGHT_BED              2
#define MB_INPUT_REG_FAN_BED                3
#define MB_INPUT_REG_LIGHT_LIVING           4
#define MB_INPUT_REG_LIGHT_KITCHEN          5
#define MB_INPUT_REG_LIGHT_HALLWAY          6
#define MB_INPUT_REG_HUMIDITY               7
#define MB_INPUT_REG_TEMPERATURE            8
#define MB_INPUT_REG_FIRE_SENSOR            9
#define MB_INPUT_REG_SMOKE_SENSOR           10
#define MB_INPUT_REG_FIRE_BUZZER            11
#define MB_INPUT_REG_AUTO_LIGHT_LIVING      12
#define MB_INPUT_REG_AUTO_LIGHT_BED         19
#define MB_INPUT_REG_AUTO_LIGHT_KITCHEN     26
#define MB_INPUT_REG_AUTO_LIGHT_HALLWAY     33


/// MB HOLDING REG

#define MB_HOLDING_REG_UPDATE_TIME              0
#define MB_HOLDING_REG_OPEN_DOOR                1
#define MB_HOLDING_REG_CONTROL_LIGHT_BED        2
#define MB_HOLDING_REG_SET_BED_BRIGHTNESS       3
#define MB_HOLDING_REG_CONTROL_FAN_BED          4
#define MB_HOLDING_REG_CONTROL_LIGHT_LIVING     5
#define MB_HOLDING_REG_SET_LIVING_BRIGHTNESS    6
#define MB_HOLDING_REG_CONTROL_LIGHT_KITCHEN    7
#define MB_HOLDING_REG_SET_KITCHEN_BRIGHTNESS   8
#define MB_HOLDING_REG_CONTROL_LIGHT_HALLWAY    9
#define MB_HOLDING_REG_SET_HALLWAY_BRIGHTNESS   10
#define MB_HOLDING_REG_CONTROL_FIRE_BUZZER      11
#define MB_HOLDING_REG_SET_AUTO_LIGHT           12
#define MB_HOLDING_REG_SET_AUTO_TIME            13
#define MB_HOLDING_REG_DELETE_AUTO_TIME         16
#define MB_HOLDING_REG_BLINK_LED_TEST           20



#endif //SM_MODBUS_DEFINE_H
