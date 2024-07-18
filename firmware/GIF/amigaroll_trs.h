// "amigaroll_trs" (GIF orig:1764 raw_payload:2099 shrunk_payload:836 total:844 bytes)
// Compared to GIF: 47.85% 	Compared to raw: 40.21%
// using GIF index 4 as our transparency index 0 (blackened)
// ./heatshrink -w 8 -l 7 (background = 4; loop = 32000; transparency = 4; )

FL_PROGMEM const struct HSpr_amigaroll_trs {
	uint16_t datasize = 836;
	uint16_t frames = 8;
	uint16_t duration = 75;
	uint8_t flags = 0;
	uint8_t palette_entries = 17;
	uint8_t crgb[0] = {
		// 0x00, 0x00, 0x00,  // original palette index 4
		// 0x0c, 0x0a, 0x05,  // original palette index 0
		// 0x00, 0x00, 0x00,  // original palette index 15
		// 0xbf, 0x0d, 0x08,  // original palette index 6
		// 0x00, 0x00, 0x00,  // original palette index 255
		// 0xc0, 0x57, 0x04,  // original palette index 8
		// 0xb6, 0xa2, 0x04,  // original palette index 10
		// 0x5d, 0x5e, 0x04,  // original palette index 3
		// 0xd3, 0xea, 0x04,  // original palette index 7
		// 0x04, 0x22, 0x64,  // original palette index 11
		// 0x04, 0x26, 0x94,  // original palette index 2
		// 0x25, 0x9d, 0x11,  // original palette index 1
		// 0x08, 0x6c, 0xae,  // original palette index 9
		// 0x40, 0xcb, 0x16,  // original palette index 5
		// 0x04, 0xea, 0xbc,  // original palette index 12
		// 0x26, 0xf5, 0x24,  // original palette index 14
		// 0x04, 0x68, 0x54,  // original palette index 13
	};
	uint8_t hs_data[836] = {
		0x00, 0x02, 0x86, 0x42, 0xa0, 0xa0, 0x50, 0x5b, 0xf8, 0x6c, 0x20, 0x0a, 0x0b, 0x81, 0x57, 0x82, 
		0x6d, 0xb4, 0x50, 0x4a, 0xed, 0x7a, 0x09, 0xd3, 0xf5, 0x41, 0x20, 0x92, 0x2b, 0x24, 0x12, 0x4d, 
		0x94, 0x92, 0xe7, 0x62, 0x30, 0x8b, 0x66, 0xba, 0x81, 0xcb, 0x8b, 0x41, 0x3d, 0x5b, 0xc9, 0x37, 
		0xd6, 0x49, 0x04, 0xb4, 0x55, 0x07, 0x42, 0xa0, 0x30, 0x18, 0x14, 0x06, 0x02, 0x0e, 0x17, 0x03, 
		0x81, 0xc0, 0xe0, 0x80, 0xe1, 0x10, 0x28, 0x10, 0x38, 0x14, 0x0c, 0x3e, 0x26, 0x03, 0x03, 0x82, 
		0x80, 0x41, 0x40, 0x83, 0xc2, 0x20, 0x30, 0x50, 0x00, 0x21, 0xf8, 0x98, 0x0c, 0x16, 0x0d, 0x07, 
		0x83, 0x41, 0xc1, 0xc2, 0x20, 0x50, 0x18, 0x44, 0x16, 0x0d, 0x06, 0x80, 0x8b, 0x83, 0xc0, 0xa0, 
		0x50, 0x88, 0x34, 0x1a, 0x11, 0x07, 0x1e, 0x89, 0x83, 0xc2, 0x20, 0xf0, 0x88, 0x34, 0x08, 0x1e, 
		0x0a, 0x03, 0x02, 0x00, 0x02, 0x80, 0xc0, 0x43, 0xc0, 0xc9, 0x81, 0x20, 0x30, 0x98, 0x4c, 0x26, 
		0x15, 0x01, 0x85, 0x87, 0x81, 0x13, 0x02, 0xc0, 0xa1, 0x30, 0xc8, 0x4c, 0x32, 0x19, 0x08, 0x85, 
		0xc3, 0x61, 0xa6, 0xb0, 0xb0, 0x18, 0x14, 0x32, 0x1d, 0x09, 0x87, 0xc3, 0x61, 0x70, 0xf2, 0x60, 
		0x78, 0x0c, 0x06, 0x1d, 0x0f, 0x87, 0xc2, 0xe1, 0xf0, 0xb2, 0x60, 0x30, 0x80, 0x58, 0x84, 0x3e, 
		0x1b, 0x0f, 0x87, 0x9e, 0x84, 0x08, 0x01, 0x00, 0x01, 0x40, 0x9d, 0x02, 0x82, 0xa1, 0x61, 0x90, 
		0xc8, 0x63, 0xfc, 0x50, 0x38, 0x24, 0x05, 0xde, 0x24, 0x1e, 0x0e, 0x04, 0xff, 0x12, 0x1e, 0x09, 
		0x03, 0x82, 0xc1, 0x41, 0xe2, 0xe0, 0x4f, 0xf0, 0x63, 0xe1, 0x70, 0x68, 0x3b, 0xfc, 0x38, 0x78, 
		0x24, 0x06, 0x0a, 0xff, 0x10, 0x0f, 0x09, 0x08, 0x83, 0x42, 0x01, 0xc2, 0x61, 0xd0, 0x18, 0x3c, 
		0x22, 0x11, 0x06, 0x7f, 0x83, 0x85, 0x42, 0xa1, 0x50, 0x18, 0x14, 0x0a, 0x05, 0x01, 0x0f, 0x02, 
		0x7f, 0x84, 0x07, 0x83, 0x84, 0xc2, 0x61, 0x50, 0x18, 0x41, 0x34, 0x28, 0x3c, 0x1c, 0x0a, 0x12, 
		0x3f, 0x05, 0x0b, 0x86, 0xab, 0x02, 0x0b, 0xc2, 0xc3, 0x21, 0x2f, 0x20, 0x44, 0xd0, 0xa2, 0xc0, 
		0x50, 0x98, 0x0c, 0x06, 0x1f, 0x0f, 0x87, 0xc2, 0xcb, 0xa1, 0xc2, 0x00, 0xe1, 0xf0, 0xd8, 0x7a, 
		0x6c, 0x40, 0x80, 0x23, 0xac, 0x13, 0xec, 0x62, 0xc0, 0x18, 0x3f, 0xd4, 0x3a, 0x1c, 0x0f, 0x16, 
		0xd3, 0x04, 0xd6, 0x06, 0x0f, 0x70, 0xe1, 0x04, 0xe4, 0x06, 0x0f, 0x47, 0x01, 0x80, 0xc0, 0x91, 
		0xc0, 0xc3, 0x62, 0x60, 0x70, 0x38, 0x08, 0x40, 0x58, 0x3c, 0x14, 0x0e, 0x04, 0x0f, 0x19, 0x05, 
		0x82, 0xc0, 0xc4, 0x03, 0x20, 0xb0, 0x58, 0x28, 0x80, 0x64, 0x1e, 0x0f, 0x06, 0x0f, 0x8b, 0x81, 
		0x40, 0x60, 0xd0, 0x58, 0x08, 0x80, 0x5c, 0x0a, 0x11, 0x06, 0x84, 0x03, 0xc6, 0x41, 0xa1, 0x10, 
		0x88, 0x3c, 0x05, 0xfe, 0x2a, 0x02, 0x20, 0x05, 0x01, 0x81, 0x40, 0xa0, 0x4d, 0x60, 0x61, 0x30, 
		0x65, 0x10, 0x50, 0x88, 0x0c, 0x29, 0x5e, 0x08, 0x1e, 0x1e, 0x03, 0x0d, 0x85, 0x8f, 0xc1, 0x42, 
		0x60, 0x4f, 0x30, 0xf0, 0x28, 0x7c, 0x2e, 0x1f, 0x09, 0x86, 0x0b, 0xc4, 0x40, 0x20, 0x50, 0xb8, 
		0x7c, 0x3e, 0x1f, 0x01, 0x72, 0x83, 0x29, 0x06, 0x80, 0xc3, 0xe1, 0xb0, 0xf0, 0x70, 0xa8, 0x03, 
		0xcc, 0x10, 0x78, 0x3b, 0xfc, 0x1b, 0xf0, 0x40, 0x00, 0x14, 0x11, 0xde, 0x08, 0x20, 0x2d, 0xfe, 
		0x0e, 0x07, 0x02, 0x81, 0x03, 0xc4, 0x40, 0xa0, 0x70, 0x50, 0x08, 0x21, 0x00, 0x98, 0x0b, 0xfc, 
		0x1b, 0x80, 0x10, 0x40, 0x4c, 0x1e, 0x0d, 0x07, 0x78, 0x82, 0x18, 0x09, 0x80, 0xc1, 0xa0, 0xd0, 
		0x56, 0x78, 0x20, 0x80, 0x98, 0x3c, 0x22, 0x0d, 0x06, 0x84, 0x14, 0x84, 0xc0, 0xa0, 0x50, 0x68, 
		0x44, 0x1e, 0x11, 0x07, 0x20, 0x8a, 0x80, 0x88, 0x01, 0xa6, 0x01, 0x00, 0x01, 0x11, 0xc2, 0x40, 
		0x43, 0xc0, 0xa1, 0x10, 0xb8, 0x0c, 0x29, 0x82, 0x1e, 0x03, 0x01, 0x86, 0xc3, 0x61, 0x70, 0x88, 
		0x64, 0x32, 0x13, 0x0c, 0x84, 0x8d, 0x42, 0xc0, 0xa0, 0xf0, 0xf8, 0x5c, 0x36, 0x1f, 0x09, 0x87, 
		0x43, 0x05, 0xe1, 0x4a, 0x40, 0xa1, 0x70, 0xf8, 0x5c, 0x3e, 0x1f, 0x0e, 0x64, 0x08, 0x81, 0x40, 
		0x61, 0xf0, 0xf8, 0x6c, 0x3e, 0x20, 0xb6, 0x14, 0xf5, 0x04, 0x00, 0x04, 0x08, 0x05, 0x0a, 0x85, 
		0x42, 0x8d, 0x40, 0x83, 0x22, 0x01, 0xe1, 0x20, 0x70, 0x31, 0xc8, 0x80, 0x78, 0x68, 0x1a, 0x78, 
		0x38, 0x3c, 0x2c, 0x16, 0x0b, 0x03, 0x10, 0x0c, 0x82, 0xc1, 0x60, 0xa2, 0x01, 0x90, 0x78, 0x3c, 
		0x18, 0x3e, 0x2e, 0x05, 0x01, 0x83, 0x41, 0x60, 0x22, 0x01, 0x70, 0x28, 0x44, 0x1a, 0x10, 0x0f, 
		0x19, 0x06, 0x84, 0x42, 0x20, 0xe5, 0x11, 0x82, 0x00, 0x50, 0x17, 0xf8, 0x62, 0x88, 0x68, 0x44, 
		0x06, 0x14, 0xff, 0x0a, 0xb2, 0x0b, 0x0d, 0x85, 0xc3, 0x21, 0x8f, 0xf0, 0xc4, 0x10, 0x8f, 0x00, 
		0x50, 0x97, 0xf8, 0x60, 0x78, 0x47, 0xf8, 0x28, 0x7b, 0x14, 0x38, 0xc4, 0x24, 0x3e, 0x1b, 0x0f, 
		0x30, 0x8c, 0x81, 0x3f, 0xc2, 0x03, 0x82, 0x42, 0x40, 0x01, 0x03, 0xa1, 0xc1, 0xff, 0xc1, 0xfc, 
		0x02, 0x61, 0x20, 0x50, 0x18, 0x0c, 0x2a, 0x15, 0x0a, 0x09, 0x87, 0x80, 0xc0, 0x60, 0x70, 0x30, 
		0x78, 0xb8, 0x14, 0x0c, 0x1e, 0x32, 0x03, 0x03, 0x82, 0xc1, 0x41, 0xe2, 0xe0, 0x50, 0x58, 0x2c, 
		0x14, 0x7c, 0x32, 0x0d, 0x07, 0x83, 0x87, 0x85, 0xc0, 0x60, 0xb0, 0x68, 0x0c, 0x08, 0x1e, 0x2a, 
		0x11, 0x06, 0x84, 0x03, 0x85, 0x40, 0x60, 0xf0, 0x88, 0x44, 0x18, 0x1e, 0x1a, 0x03, 0x02, 0x81, 
		0x40, 0xa0, 0x21, 0xe0, 0x43, 0xd0, 0xea, 0xb0, 0x50, 0xa8, 0x0c, 0x20, 0x9a, 0x26, 0x05, 0x09, 
		0x86, 0x43, 0x21, 0x90, 0xb8, 0x6a, 0xb0, 0x44, 0x06, 0x05, 0x0c, 0x84, 0xc3, 0xe1, 0x70, 0xf2, 
		0x68, 0x98, 0x0c, 0x06, 0x1f, 0x0f, 0x87, 0xc2, 0xcb, 0xa2, 0xe1, 0xf0, 0xd8, 0x7b, 0x68, 0x6b, 
		0xac, 0x10, 0x3c, 0x40, 
	};
} HSpr_amigaroll_trs;
