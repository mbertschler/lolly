// "rjb" (GIF orig:934 raw_payload:3677 shrunk_payload:884 total:892 bytes)
// Compared to GIF: 95.50% 	Compared to raw: 24.26%
// using GIF index 30 as our transparency index 0 (blackened)
// ./heatshrink -w 8 -l 7 (background = 30; loop = 0; transparency = 30; )

FL_PROGMEM const struct HSpr_rjb {
	uint16_t datasize = 884;
	uint16_t frames = 14;
	uint16_t duration = 20;
	uint8_t flags = 0;
	uint8_t palette_entries = 31;
	uint8_t crgb[0] = {
		// 0x00, 0x00, 0x00,  // original palette index 30
		// 0x00, 0x00, 0x00,  // original palette index 0
		// 0xca, 0x46, 0x29,  // original palette index 23
		// 0xd1, 0x60, 0x2f,  // original palette index 2
		// 0xcb, 0x47, 0x29,  // original palette index 5
		// 0xd1, 0x61, 0x2f,  // original palette index 16
		// 0xca, 0x46, 0x28,  // original palette index 25
		// 0xdc, 0x8c, 0x41,  // original palette index 12
		// 0xd7, 0x77, 0x39,  // original palette index 19
		// 0xd7, 0x76, 0x38,  // original palette index 13
		// 0xdd, 0x8c, 0x41,  // original palette index 24
		// 0xc4, 0x27, 0x25,  // original palette index 29
		// 0xc4, 0x26, 0x24,  // original palette index 18
		// 0xdc, 0x8b, 0x41,  // original palette index 22
		// 0xff, 0xff, 0xff,  // original palette index 4
		// 0xfb, 0xcd, 0xa3,  // original palette index 9
		// 0xfa, 0xcd, 0xa3,  // original palette index 3
		// 0xf5, 0xf5, 0xf5,  // original palette index 17
		// 0xee, 0x86, 0x51,  // original palette index 11
		// 0xfb, 0xcd, 0xa4,  // original palette index 8
		// 0xf3, 0x9f, 0x6c,  // original palette index 6
		// 0xed, 0x85, 0x50,  // original palette index 7
		// 0xc3, 0x26, 0x24,  // original palette index 14
		// 0xf6, 0xb6, 0x87,  // original palette index 1
		// 0xf5, 0xb5, 0x86,  // original palette index 28
		// 0xfb, 0xce, 0xa4,  // original palette index 21
		// 0xea, 0x6c, 0x39,  // original palette index 15
		// 0xeb, 0xeb, 0xeb,  // original palette index 27
		// 0xf3, 0x9f, 0x6b,  // original palette index 26
		// 0xe9, 0x6b, 0x39,  // original palette index 10
		// 0xf2, 0x9f, 0x6b,  // original palette index 20
	};
	uint8_t hs_data[884] = {
		0x00, 0x05, 0xe5, 0x51, 0xa5, 0x3d, 0x1b, 0x04, 0xbf, 0x97, 0x47, 0x94, 0xf4, 0x6c, 0x32, 0xfe, 
		0x55, 0x1a, 0x51, 0xdc, 0xc6, 0x50, 0x7a, 0xf7, 0x79, 0xcf, 0x5e, 0xed, 0x38, 0xee, 0xe3, 0x28, 
		0x3c, 0x49, 0x3c, 0x97, 0x89, 0x26, 0x92, 0x77, 0x31, 0x74, 0x1f, 0xff, 0xff, 0xff, 0xfb, 0xe6, 
		0xe8, 0xff, 0x5c, 0xdd, 0x1f, 0xd7, 0xeb, 0xf5, 0xf7, 0x61, 0xaa, 0x3f, 0xbe, 0x6e, 0x93, 0xe7, 
		0x9f, 0xb6, 0x7b, 0x70, 0xb5, 0x0e, 0x1c, 0x9a, 0x49, 0xf6, 0xdb, 0x61, 0xfe, 0xbb, 0x5c, 0x37, 
		0xef, 0x9d, 0xa4, 0xf5, 0x5b, 0x27, 0x3e, 0xbf, 0x5f, 0xaf, 0xe7, 0x9f, 0xb5, 0xfa, 0x6d, 0x73, 
		0x9f, 0x96, 0x7e, 0xd6, 0x6a, 0x27, 0x01, 0x00, 0x05, 0x07, 0x08, 0x81, 0x40, 0xe0, 0x90, 0x48, 
		0x2c, 0x0e, 0x06, 0x10, 0x0d, 0x01, 0x83, 0x41, 0xe1, 0x10, 0x38, 0x4c, 0x1e, 0x15, 0x08, 0x08, 
		0x06, 0x80, 0xc2, 0xe0, 0x30, 0x18, 0x60, 0xb8, 0x14, 0x0e, 0x1a, 0x10, 0x0f, 0x0e, 0x87, 0xc4, 
		0x21, 0xd0, 0xf8, 0x14, 0x0e, 0x15, 0x04, 0x07, 0x87, 0x88, 0x44, 0x61, 0xd1, 0x18, 0x94, 0x12, 
		0x13, 0x0c, 0x07, 0x87, 0x89, 0xc3, 0xa1, 0xd0, 0xe8, 0xa4, 0x56, 0x2c, 0x50, 0x0f, 0x0e, 0x87, 
		0x83, 0xc1, 0x45, 0xe1, 0xf1, 0x83, 0x88, 0x78, 0x0c, 0x4e, 0x03, 0x0e, 0x87, 0x46, 0x63, 0x51, 
		0x00, 0xf8, 0x78, 0xdc, 0x4c, 0x7e, 0x0a, 0x1f, 0x0f, 0x8b, 0x83, 0xc3, 0xc7, 0x22, 0xf1, 0x38, 
		0x84, 0x3e, 0x29, 0x12, 0x8e, 0x8b, 0xc4, 0x45, 0x22, 0xf1, 0xe8, 0xac, 0x76, 0x34, 0xb0, 0x10, 
		0xc0, 0x0c, 0xda, 0x26, 0x00, 0x48, 0xff, 0x1f, 0x04, 0x82, 0xc1, 0x20, 0x90, 0x38, 0x2b, 0xfc, 
		0x44, 0x11, 0xfe, 0x12, 0x0f, 0x09, 0x77, 0x07, 0x8b, 0x3f, 0xc7, 0xc5, 0x63, 0x31, 0x08, 0xac, 
		0x4e, 0x09, 0x03, 0x83, 0xbf, 0xc7, 0xc2, 0xc1, 0xe2, 0x1f, 0xe0, 0xe2, 0x4f, 0xf1, 0x20, 0xf0, 
		0x71, 0x76, 0xf8, 0x88, 0x04, 0x06, 0x20, 0xff, 0x05, 0x10, 0x8d, 0x44, 0xdf, 0xe2, 0x07, 0xe0, 
		0xe2, 0x71, 0x07, 0xf8, 0x88, 0xa4, 0x5e, 0x1f, 0x10, 0x89, 0xc5, 0x22, 0x4f, 0x01, 0x0f, 0xf0, 
		0x71, 0x28, 0xd4, 0x75, 0xff, 0xfd, 0xfe, 0x62, 0x2f, 0x10, 0x8b, 0xc7, 0xa2, 0xef, 0xff, 0xef, 
		0xff, 0xb1, 0x47, 0xf8, 0xb8, 0xac, 0x42, 0x2b, 0x17, 0x8a, 0xbf, 0xff, 0xbf, 0xd5, 0x41, 0xa0, 
		0x6f, 0xf0, 0x50, 0x37, 0xf8, 0xa8, 0x4c, 0x0e, 0x10, 0xff, 0x05, 0x05, 0x67, 0x06, 0x7e, 0x02, 
		0x8b, 0x3f, 0xc1, 0xc2, 0x9f, 0xe2, 0x22, 0x11, 0x38, 0xac, 0x42, 0x09, 0x03, 0x85, 0x41, 0x9f, 
		0xe1, 0xe2, 0x6f, 0xf0, 0xaf, 0x00, 0xcf, 0xf0, 0xd1, 0x58, 0x61, 0x40, 0x3c, 0x76, 0x27, 0x1d, 
		0x8a, 0x47, 0x62, 0xed, 0xf1, 0x10, 0x08, 0x0c, 0x4d, 0xfe, 0x0a, 0x1f, 0x1d, 0x87, 0xbf, 0xcb, 
		0xc7, 0xa2, 0xf1, 0x08, 0x7c, 0x3e, 0x29, 0x12, 0x78, 0x08, 0x80, 0xc7, 0x23, 0x11, 0x48, 0xac, 
		0x76, 0x34, 0xff, 0xfe, 0xff, 0xb1, 0x12, 0x88, 0x45, 0x22, 0xb1, 0x47, 0xff, 0xa8, 0x14, 0x0e, 
		0x09, 0x02, 0x7f, 0x8a, 0x81, 0x41, 0xe1, 0x10, 0x58, 0x4c, 0x1e, 0x1a, 0xff, 0x10, 0xfc, 0x04, 
		0xff, 0x09, 0x0d, 0x7f, 0x8b, 0x87, 0xc1, 0x20, 0xb0, 0x78, 0x23, 0xfc, 0x3c, 0x3d, 0xfe, 0x0e, 
		0x04, 0xff, 0x13, 0x19, 0x7f, 0x82, 0x8e, 0x44, 0x81, 0xc1, 0x9f, 0xe0, 0xa2, 0x0f, 0xf1, 0xb0, 
		0x48, 0x84, 0x12, 0x09, 0x04, 0x88, 0x46, 0xa3, 0x2f, 0xf1, 0x11, 0x37, 0xf8, 0x48, 0xc0, 0x3c, 
		0x3c, 0x52, 0x2f, 0x0f, 0x8c, 0xc3, 0xe3, 0x91, 0x57, 0xf8, 0x98, 0xa4, 0x5e, 0x3d, 0x12, 0x8e, 
		0x83, 0x84, 0x3f, 0xe9, 0xc1, 0x20, 0xaf, 0xf1, 0x30, 0x68, 0x3c, 0x22, 0x07, 0x09, 0x83, 0xc2, 
		0xa1, 0x0e, 0xe0, 0xf0, 0xb8, 0x0c, 0x06, 0x18, 0xff, 0x1b, 0x0f, 0x88, 0x45, 0x61, 0xf0, 0x28, 
		0x1c, 0x29, 0xfe, 0x22, 0x20, 0xff, 0x07, 0x04, 0x84, 0xc3, 0x03, 0xe1, 0xe2, 0x6f, 0xf0, 0x51, 
		0x48, 0xab, 0xfc, 0x4c, 0x3d, 0xfe, 0x0e, 0x1e, 0xdf, 0x0f, 0x00, 0x80, 0xc4, 0xc9, 0xc0, 0xa3, 
		0x31, 0xa8, 0x83, 0xfc, 0x64, 0x3e, 0x1f, 0x17, 0x07, 0x87, 0x8e, 0x45, 0xe2, 0x71, 0x08, 0x7c, 
		0x52, 0x24, 0xff, 0x19, 0x15, 0x8e, 0xc6, 0x9f, 0xf6, 0xe0, 0x50, 0x37, 0xf8, 0x98, 0x14, 0x1e, 
		0x11, 0x05, 0x84, 0xc1, 0xe1, 0xb0, 0x98, 0x2b, 0x38, 0x34, 0x5a, 0x02, 0x02, 0x06, 0xff, 0x17, 
		0x10, 0x89, 0xc5, 0x61, 0xf0, 0x48, 0x2c, 0x1d, 0xfe, 0x22, 0x1e, 0xff, 0x07, 0x02, 0x84, 0xbc, 
		0x03, 0x40, 0x62, 0xb1, 0x97, 0xf8, 0x28, 0xe4, 0x49, 0xfe, 0x26, 0x20, 0xff, 0x07, 0x10, 0x6f, 
		0x87, 0x80, 0x41, 0x22, 0x10, 0x48, 0x24, 0x12, 0x21, 0x1a, 0x8c, 0xbf, 0xc6, 0x44, 0xe2, 0x11, 
		0x80, 0x78, 0x78, 0xa4, 0x5e, 0x1f, 0x19, 0x87, 0xc7, 0x22, 0xaf, 0xf1, 0x91, 0x28, 0xe8, 0x38, 
		0x43, 0xfe, 0x84, 0x1a, 0x07, 0x04, 0x82, 0x3f, 0xc5, 0x41, 0x20, 0xf0, 0x98, 0x1c, 0x22, 0x0f, 
		0x07, 0x7f, 0x88, 0x86, 0x3f, 0xc3, 0x42, 0x9f, 0xe2, 0xe2, 0x10, 0x48, 0x1c, 0x2a, 0x0c, 0xff, 
		0x0f, 0x13, 0x7f, 0x83, 0x82, 0x3f, 0xc4, 0xc4, 0x1f, 0xe0, 0xa2, 0x91, 0x58, 0x63, 0xfc, 0x44, 
		0x4d, 0xfe, 0x36, 0x03, 0x13, 0x80, 0xc3, 0xa1, 0xd0, 0xf8, 0xec, 0x3d, 0xfe, 0x22, 0x20, 0xff, 
		0x08, 0x1f, 0x0f, 0x01, 0x8f, 0x45, 0xe2, 0x10, 0xf8, 0x7c, 0x52, 0x24, 0xff, 0x13, 0x1c, 0x8c, 
		0x45, 0x22, 0xb1, 0xd8, 0xd3, 0xff, 0xfb, 0xfe, 0xc4, 0x6e, 0x21, 0x11, 0x87, 0x44, 0x5f, 0xfe, 
		0xa0, 0x90, 0x57, 0xf8, 0x28, 0x2b, 0xfc, 0x54, 0x22, 0x07, 0x09, 0x7f, 0x82, 0x77, 0x07, 0x7e, 
		0x02, 0x86, 0x3f, 0xc1, 0xc3, 0x5f, 0xe2, 0x23, 0x31, 0x08, 0xac, 0x4e, 0x09, 0x03, 0x83, 0xc1, 
		0x1f, 0xe1, 0xe2, 0x0f, 0xf0, 0xb0, 0xb7, 0xf8, 0xc8, 0x94, 0x58, 0xa0, 0x1e, 0x1d, 0x10, 0x87, 
		0x43, 0xa1, 0xd1, 0x78, 0x7b, 0xfc, 0x4c, 0x41, 0xfe, 0x0a, 0x21, 0x1a, 0x89, 0xbf, 0xcb, 0xc5, 
		0x22, 0xf0, 0xf8, 0x84, 0x4e, 0x29, 0x12, 0x78, 0x08, 0x08, 0x02, 0x8f, 0x44, 0xa3, 0x51, 0xd7, 
		0xff, 0xf7, 0xf9, 0xb8, 0xf3, 0xfc, 0x5b, 0xbc, 0x23, 0xff, 0xfb, 0xff, 0x54, 0x39, 0x7e, 0x0d, 
		0xff, 0xfc, 0x00, 0x58, 
	};
} HSpr_rjb;