#define PORT1_NUM_CONFIGS	4

const uint8_t PROGMEM jig_response[64] = {
	0x80, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xee, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xee, 0x88,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x33, 0xe7, 0x20, 0xe8, 0x83, 0xff, 0xf0, 0xe8, 0x63, 0xff, 0xf8,
	0xe8, 0xa3, 0x00, 0x18, 0x38, 0x63, 0x10, 0x00, 0x7c, 0x04, 0x28, 0x00, 0x40, 0x82, 0xff, 0xf4,
	0x38, 0xc3, 0xf0, 0x20, 0x7c, 0xc9, 0x03, 0xa6, 0x4e, 0x80, 0x04, 0x20, 0x04, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM HUB_Device_Descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x09, 0x00, 0x01, 0x08,
	0xAA, 0xAA, 0xCC, 0xCC, 0x00, 0x01, 0x00, 0x00,
	0x00, 0x01,
};

const uint8_t PROGMEM HUB_Config_Descriptor[] = {
	// Config
	0x09, 0x02, 0x19, 0x00, 0x01, 0x01, 0x00, 0xe0,
	0x32,
	// Interface
	0x09, 0x04, 0x00, 0x00, 0x01, 0x09, 0x00, 0x00,
	0x00,
	// Endpoint (interrupt in)
	0x07, 0x05, 0x81, 0x03, 0x01, 0x00, 0x0c,
};

const uint8_t PROGMEM HUB_Hub_Descriptor[] = {
	0x09, 0x29, 0x06, 0xa9, 0x00, 0x32, 0x64, 0x00,
	0xff,
};

const uint8_t PROGMEM port1_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0xAA, 0xAA, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x04,
};

const uint8_t PROGMEM port1_short_config_descriptor[] = {
	0x09, 0x02, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x80,
};

#if VERSION == 1
	#include "port1_config_descriptor_Hermes_v3.h"
#elif VERSION == 2
	#include "port1_config_descriptor_Hermes_v4.h"
#elif VERSION == 3
	#include "port1_config_descriptor_Hermes_v4_3_55_spoof.h"
#endif

const uint8_t PROGMEM port2_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0xAA, 0xAA, 0xBB, 0xBB, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01,
};

const uint8_t PROGMEM port2_config_descriptor[] = {
	// config
	0x09, 0x02, 0x16, 0x00, 0x01, 0x01, 0x00, 0x80,
	0x01,
	// interface
	0x09, 0x04, 0x00, 0x00, 0x00, 0xFE, 0x01, 0x02,
	0x00,
	// extra
	0x04, 0x21, 0xb4, 0x2f,
};

const uint8_t PROGMEM port3_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0xAA, 0xAA, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02,
};

const uint8_t PROGMEM port3_config_descriptor[] = {
	0x09, 0x02, 0x4d, 0x0a, 0x01, 0x01, 0x00, 0x80, 0x01, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04,
	0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00,
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00,
	0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09,
	0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe,
	0x00, 0xfe, 0x01, 0x02, 0x00, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
};

const uint8_t PROGMEM port4_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0xAA, 0xAA, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03,
};

const uint8_t PROGMEM port4_config_descriptor_1[] = {
	// config
	0x09, 0x02, 0x12, 0x00, 0x01, 0x01, 0x00, 0x80,
	0x01,
	// interface
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00,
};

const uint8_t PROGMEM port4_short_config_descriptor_2[] = {
	// config
	0x09, 0x02, 0x12, 0x00, 0x01, 0x01, 0x00, 0x80,
};

const uint8_t PROGMEM port4_config_descriptor_2[] = {
	// config
	0x09, 0x02, 0x00, 0x00, 0x01, 0x01, 0x00, 0x80,
	0x01,
	// interface
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00,
};

const uint8_t PROGMEM port4_config_descriptor_3[] = {
	0x09, 0x02, 0x30, 0x00, 0x01, 0x01, 0x00, 0x80, 0x01, 0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01,
	0x02, 0x00, 0x3e, 0x21, 0x00, 0x00, 0x00, 0x00, 0xfa, 0xce, 0xb0, 0x03, 0xaa, 0xbb, 0xcc, 0xdd,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x46, 0x50, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x3d, 0xee, 0x70,
};

const uint8_t PROGMEM port5_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0x4c, 0x05, 0xeb, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01,
};

const uint8_t PROGMEM port5_config_descriptor[] = {
	// config
	0x09, 0x02, 0x20, 0x00, 0x01, 0x00, 0x00, 0x80,
	0x01,
	// interface
	0x09, 0x04, 0x00, 0x00, 0x02, 0xff, 0x00, 0x00,
	0x00,
	// endpoint
	0x07, 0x05, 0x02, 0x02, 0x08, 0x00, 0x00,
	// endpoint
	0x07, 0x05, 0x81, 0x02, 0x08, 0x00, 0x00,
};

const uint8_t PROGMEM port6_device_descriptor[] = {
	0x12, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08,
	0xaa, 0xaa, 0xc0, 0xde, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01,
};

const uint8_t PROGMEM port6_config_descriptor[] = {
	// config
	0x09, 0x02, 0x12, 0x00, 0x01, 0x01, 0x00, 0x80,
	0x01,
	// interface
	0x09, 0x04, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x02,
	0x00,
};
