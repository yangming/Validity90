#ifndef CONSTANTS_H
#define CONSTANTS_H

#define byte unsigned char
#define dword unsigned int

#define MASK_VARIABLE (1 << 30)
#define M(x) (MASK_VARIABLE | x)

static byte init_sequence_msg1[] = { 0x01 };
static byte init_sequence_msg2[] = { 0x19 };
static byte init_sequence_msg3[] = { 0x43, 0x02 };
static byte init_sequence_msg4[] = {
    0x06, 0x02, 0x00, 0x00, 0x01, 0x39, 0x17, 0xb3,
    0xdd, 0xa9, 0x13, 0x83, 0xb5, 0xbc, 0xac, 0x64,
    0xfa, 0x4a, 0xd3, 0x5d, 0xce, 0x96, 0x57, 0x0a,
    0x9d, 0x2d, 0x97, 0x4b, 0x80, 0x92, 0x6a, 0x43,
    0x1f, 0x9c, 0xd4, 0x62, 0x48, 0x98, 0x0a, 0x26,
    0x3c, 0x6f, 0xce, 0xf6, 0xa8, 0x28, 0x39, 0xa9,
    0x0b, 0x59, 0xac, 0x59, 0x08, 0x48, 0x85, 0x9a,
    0xfa, 0xc8, 0x17, 0xb7, 0xd5, 0x3b, 0xf5, 0x1c,
    0xd3, 0x20, 0x5c, 0x1b, 0x8f, 0x43, 0x04, 0x8b,
    0xe8, 0x25, 0x3c, 0x3b, 0xd2, 0x47, 0x93, 0x7c,
    0x83, 0x7a, 0xca, 0x8b, 0x18, 0xd3, 0xcc, 0x8e,
    0xe8, 0xc8, 0x97, 0x1a, 0xc4, 0xf6, 0x88, 0x81,
    0x3c, 0xf3, 0xd8, 0x55, 0x0d, 0x71, 0x49, 0x69,
    0x85, 0xb7, 0xec, 0x07, 0xff, 0x2d, 0xc7, 0x89,
    0x6d, 0x33, 0x0f, 0xda, 0xb2, 0x63, 0xa0, 0xee,
    0x43, 0x3a, 0x5c, 0x4b, 0xc9, 0x10, 0x43, 0x9d,
    0x1c, 0x61, 0x61, 0x85, 0x3f, 0xeb, 0x03, 0xf5,
    0x50, 0x22, 0x09, 0x50, 0x2e, 0x73, 0x08, 0xbe,
    0xb7, 0x91, 0x94, 0x73, 0xcf, 0xe6, 0x9f, 0x42,
    0x2c, 0x30, 0x50, 0x2d, 0x22, 0x6a, 0x4d, 0x0a,
    0x34, 0xd9, 0x6c, 0x8c, 0x77, 0x95, 0x6c, 0xf6,
    0x9d, 0xb8, 0xef, 0x6c, 0xf9, 0x27, 0xa3, 0xb5,
    0x78, 0x49, 0xd4, 0xaa, 0x8a, 0xd4, 0xb4, 0x42,
    0x66, 0x92, 0x3e, 0x34, 0xb8, 0x2a, 0x39, 0xc8,
    0x14, 0x6b, 0xa3, 0xcd, 0x70, 0x8c, 0x70, 0xdf,
    0xed, 0xb5, 0x0c, 0x2d, 0xe6, 0x1f, 0xeb, 0x45,
    0xb1, 0xd4, 0xf1, 0x95, 0x84, 0x29, 0x72, 0x03,
    0xf5, 0xfd, 0xc8, 0x65, 0x79, 0x5f, 0xec, 0x9d,
    0x64, 0x49, 0xf3, 0xba, 0x9b, 0x6f, 0x1e, 0x4b,
    0xed, 0x69, 0x8e, 0xe1, 0x51, 0xe8, 0x3d, 0x4d,
    0x87, 0x02, 0xf7, 0x6a, 0x40, 0x06, 0xcf, 0xa2,
    0x4d, 0x9b, 0x79, 0x78, 0x88, 0x20, 0x3b, 0x22,
    0x69, 0xf8, 0xa7, 0x7d, 0x52, 0x40, 0x34, 0xac,
    0x32, 0xe4, 0xaf, 0x58, 0xb8, 0x6e, 0xbc, 0x63,
    0x55, 0x2c, 0xb3, 0x5b, 0x12, 0xb2, 0x85, 0x25,
    0x5d, 0xea, 0xf3, 0xa3, 0x2b, 0xf4, 0x6c, 0xdc,
    0x5a, 0xd3, 0xbc, 0x1c, 0x9e, 0xd1, 0xbc, 0xc1,
    0x12, 0xc7, 0x21, 0x43, 0xf9, 0xae, 0xc5, 0x68,
    0xe2, 0xca, 0xcf, 0xa8, 0x9b, 0xa0, 0xc7, 0xbb,
    0x65, 0x59, 0x0d, 0x8b, 0x93, 0xe6, 0x87, 0x1a,
    0x33, 0xc6, 0xc6, 0x98, 0x3c, 0x0a, 0xcd, 0x04,
    0xe7, 0x37, 0xff, 0x55, 0xee, 0xe0, 0x24, 0xca,
    0x6b, 0x9a, 0x48, 0x33, 0x2c, 0x1a, 0x69, 0xa5,
    0xa3, 0xfd, 0xd2, 0x4b, 0x96, 0x4c, 0xf7, 0xe7,
    0xc5, 0x52, 0x29, 0xbb, 0x0b, 0x48, 0xa6, 0xe3,
    0x39, 0xeb, 0x2c, 0x42, 0xd0, 0x7e, 0xc8, 0x50,
    0xa4, 0xee, 0x78, 0x06, 0x60, 0xad, 0x6c, 0x77,
    0xff, 0xa3, 0x02, 0xa6, 0x3b, 0xd1, 0x94, 0x26,
    0x13, 0x4c, 0x45, 0x33, 0xd6, 0xf9, 0x67, 0x44,
    0x11, 0x63, 0xfb, 0x78, 0xb7, 0x35, 0x47, 0xc6,
    0x8a, 0x49, 0x3b, 0x2f, 0x80, 0x0d, 0x3c, 0xda,
    0xb8, 0x27, 0xb1, 0x16, 0x76, 0x27, 0x89, 0x99,
    0x2a, 0xae, 0x3c, 0x8a, 0xb3, 0x45, 0xa4, 0x9e,
    0xdd, 0x31, 0x2d, 0xfd, 0x2a, 0x27, 0xbc, 0x50,
    0x14, 0x27, 0xdc, 0x7f, 0xa0, 0x0a, 0xc3, 0xc5,
    0xc3, 0x65, 0x51, 0xdb, 0xb3, 0xd5, 0xca, 0xd8,
    0xd5, 0xbd, 0x7c, 0xea, 0x37, 0xe5, 0x8a, 0x31,
    0x30, 0x7a, 0x6d, 0x50, 0xe6, 0xae, 0x37, 0x9a,
    0x53, 0xf1, 0x36, 0x66, 0x78, 0xc0, 0x74, 0x1a,
    0x3d, 0x87, 0x2b, 0x8d, 0xcf, 0xef, 0xa7, 0xf6,
    0x31, 0x28, 0xdc, 0x82, 0x45
};
static byte init_sequence_msg5[] = { 0x3e };
static byte init_sequence_msg6[] = {
    0x40, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x10, 0x00, 0x00
};


static dword init_sequence_rsp1[] = {
    0x00, 0x00, 0xf0, 0xb0, 0x5e, 0x54, 0xa4, 0x00,
    0x00, 0x00, 0x06, 0x07, 0x01, 0x30, 0x00, 0x01,
    0x00, 0x00, 0x26, 0x85, 0x88, 0x42, 0x45, 0x3b,
    0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x07
};
static dword init_sequence_rsp2[] = {
    0x00, 0x00, 0x00, 0x03, 0x01, 0x02, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, M(1), M(1), M(1), M(1),
    0x00, 0x00, 0x00, 0x00, M(2), M(2), M(2), M(2),
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00
};
static dword init_sequence_rsp3[] = {
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x00,
    0x98, 0xc9, 0x71, 0x56, 0x01, 0x00, 0x34, 0x46,
    0x02, 0x00, 0x07, 0x00, 0x60, 0x39, 0x00, 0x00,
    0x01, 0x00, 0x84, 0x08, 0x01, 0x00, 0x07, 0x00,
    0xb0, 0x02, 0x00, 0x00, 0x02, 0x00, 0x84, 0x28,
    0x03, 0x00, 0x12, 0x00, 0x10, 0x10, 0x00, 0x00,
    0x02, 0x00, 0x66, 0x37, 0x01, 0x00, 0x0c, 0x00,
    0x40, 0x22, 0x02, 0x00, 0x01, 0x00, 0x86, 0x47,
    0x00, 0x00, 0x01, 0x00, 0x20, 0x5a, 0x00, 0x00,
    0x02, 0x00, 0x23, 0x77, 0x00, 0x00, 0x01, 0x00,
    0xd0, 0x2f, 0x00, 0x00
};
static dword init_sequence_rsp4[] = { 0x00, 0x00 };
static dword init_sequence_rsp5[] = {
    0x00, 0x00, 0xef, 0x00, 0x40, 0x00, 0x00, 0x10,
    0x01, 0x00, 0x00, 0x01, 0x01, 0x00, 0x05, 0x00,
    0x01, 0x04, 0x07, 0x00, 0x00, 0x10, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x02, 0x01, 0x02, 0x00,
    0x00, 0x20, 0x00, 0x00, 0x00, 0xe0, 0x03, 0x00,
    0x05, 0x05, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00,
    0x00, 0x80, 0x00, 0x00, 0x06, 0x06, 0x03, 0x00,
    0x00, 0x80, 0x04, 0x00, 0x00, 0x80, 0x00, 0x00,
    0x04, 0x03, 0x05, 0x00, 0x00, 0x00, 0x05, 0x00,
    0x00, 0x00, 0x03, 0x00
};
static dword init_sequence_rsp6[] = {
    0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x6e, 0x34, 0x0b, 0x9c,
    0xff, 0xb3, 0x7a, 0x98, 0x9c, 0xa5, 0x44, 0xe6,
    0xbb, 0x78, 0x0a, 0x2c, 0x78, 0x90, 0x1d, 0x3f,
    0xb3, 0x37, 0x38, 0x76, 0x85, 0x11, 0xa3, 0x06,
    0x17, 0xaf, 0xa0, 0x1d, 0x00, 0x04, 0x00, 0xa1,
    0x00, 0xc8, 0x38, 0xd8, 0xe1, 0xdb, 0xf5, 0x04,
    0x53, 0x04, 0x1a, 0xc5, 0xa7, 0xb4, 0x0b, 0x2f,
    0x1e, 0xf2, 0x7d, 0x7e, 0x1b, 0xfd, 0x48, 0xda,
    0xa9, 0x42, 0x06, 0x59, 0xf3, 0x3b, 0x07, 0xa7,
    0xe3, 0x02, 0x65, 0x4c, 0x1a, 0xdd, 0xa3, 0x57,
    0x65, 0x13, 0x84, 0xc7, 0x98, 0x38, 0x4e, 0x5e,
    0xd9, 0xc7, 0x33, 0x5c, 0xed, 0x15, 0x55, 0x3c,
    0xf5, 0xf4, 0xde, 0x14, 0xa0, 0xf2, 0x59, 0x68,
    0x00, 0xa2, 0xa0, 0x98, 0x58, 0xc2, 0x06, 0x67,
    0xd5, 0xc1, 0x06, 0xe3, 0xbf, 0xe6, 0x6a, 0xec,
    0x6a, 0xc0, 0x2d, 0xb2, 0xd8, 0x77, 0xd9, 0x0e,
    0xc4, 0x12, 0xe3, 0xab, 0x48, 0xab, 0xaa, 0xb4,
    0xb9, 0x56, 0x75, 0x30, 0x69, 0x9d, 0x0a, 0xc3,
    0xd9, 0xbb, 0xff, 0xde, 0x42, 0x11, 0xbd, 0x34,
    0x03, 0x21, 0xcf, 0xa2, 0x8d, 0x3c, 0x1b, 0xe4,
    0xba, 0xf0, 0x1f, 0xf4, 0x40, 0x69, 0x6f, 0xb4,
    0x78, 0x18, 0xf3, 0x2d, 0x6b, 0x22, 0x80, 0x86,
    0x64, 0x31, 0x14, 0x34, 0x2a, 0x81, 0x2c, 0xcc,
    0xd7, 0xc6, 0x62, 0xf3, 0x9e, 0x5f, 0x78, 0xa6,
    0x39, 0xd3, 0xdb, 0x57, 0xc3, 0x30, 0xd4, 0xdd,
    0x12, 0x8f, 0x12, 0x90, 0x7e, 0x4b, 0x95, 0x09,
    0x0e, 0xfa, 0xa2, 0xe3, 0x17, 0x07, 0xe9, 0x74,
    0xd8, 0x33, 0xa2, 0x42, 0x20, 0x00, 0x9a, 0x33,
    0xca, 0x70, 0x1c, 0xb9, 0x3f, 0x02, 0x6e, 0x78,
    0xa2, 0xca, 0x03, 0x00, 0xb8, 0x00, 0xed, 0x52,
    0xbb, 0x71, 0xb3, 0xd9, 0x0c, 0x00, 0x86, 0xad,
    0x64, 0x0d, 0x45, 0x76, 0xc7, 0x32, 0xb6, 0xd5,
    0xd3, 0x39, 0x2d, 0x89, 0x5e, 0x65, 0x4b, 0x60,
    0x6a, 0x82, 0x6a, 0xe5, 0xbd, 0x0c, 0x17, 0x00,
    0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0xab, 0x9d,
    0xfd, 0xba, 0x74, 0x25, 0x29, 0x93, 0x9d, 0x2d,
    0x5d, 0xf4, 0x77, 0xec, 0x90, 0x2e, 0x13, 0xb8,
    0x21, 0x1a, 0x19, 0x70, 0x1e, 0x50, 0x2f, 0xf5,
    0x6e, 0x6e, 0x25, 0xae, 0x8c, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xdd, 0xf4, 0x04, 0x74, 0xf0, 0x7a,
    0xe4, 0xe0, 0x79, 0xd1, 0xf1, 0x9f, 0xae, 0xbd,
    0xa8, 0xef, 0x1e, 0xfa, 0x18, 0xc2, 0x6a, 0x76,
    0xae, 0xa5, 0xaa, 0xbf, 0xc3, 0x4f, 0x12, 0x94,
    0x8c, 0x8f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa5, 0x58,
    0xed, 0x0f, 0x31, 0x33, 0x45, 0x63, 0xc8, 0x8a,
    0xd5, 0x53, 0xd9, 0xe4, 0x6e, 0x20, 0x5d, 0x54,
    0x3b, 0x83, 0x99, 0xcf, 0x9b, 0xef, 0x9e, 0xa8,
    0xaa, 0xc5, 0xeb, 0xfb, 0x20, 0xa2, 0x05, 0x00,
    0xa4, 0x01, 0xec, 0x5d, 0x90, 0x0e, 0x5a, 0x79,
    0x58, 0x6d, 0x2c, 0xdb, 0xee, 0xc6, 0x22, 0x40,
    0xc6, 0x89, 0x9d, 0x37, 0x47, 0x5e, 0x0f, 0x46,
    0xbb, 0x9e, 0xfd, 0x3f, 0x5a, 0x4f, 0x32, 0xe8,
    0x27, 0xd2, 0x17, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xfc, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x4b, 0x60, 0xd2, 0x27, 0x3e, 0x3c,
    0xce, 0x3b, 0xf6, 0xb0, 0x53, 0xcc, 0xb0, 0x06,
    0x1d, 0x65, 0xbc, 0x86, 0x98, 0x76, 0x55, 0xbd,
    0xeb, 0xb3, 0xe7, 0x93, 0x3a, 0xaa, 0xd8, 0x35,
    0xc6, 0x5a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0xc2,
    0x98, 0xd8, 0x45, 0x39, 0xa1, 0xf4, 0xa0, 0x33,
    0xeb, 0x2d, 0x81, 0x7d, 0x03, 0x77, 0xf2, 0x40,
    0xa4, 0x63, 0xe5, 0xe6, 0xbc, 0xf8, 0x47, 0x42,
    0x2c, 0xe1, 0xf2, 0xd1, 0x17, 0x6b, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xf5, 0x51, 0xbf, 0x37, 0x68, 0x40,
    0xb6, 0xcb, 0xce, 0x5e, 0x31, 0x6b, 0x57, 0x33,
    0xce, 0x2b, 0x16, 0x9e, 0x0f, 0x7c, 0x4a, 0xeb,
    0xe7, 0x8e, 0x9b, 0x7f, 0x1a, 0xfe, 0xe2, 0x42,
    0xe3, 0x4f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x25,
    0x63, 0xfc, 0xc2, 0xca, 0xb9, 0xf3, 0x84, 0x9e,
    0x17, 0xa7, 0xad, 0xfa, 0xe6, 0xbc, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x00, 0x01, 0x53, 0x41, 0xe6, 0xb2, 0x64, 0x69,
    0x79, 0xa7, 0x0e, 0x57, 0x65, 0x30, 0x07, 0xa1,
    0xf3, 0x10, 0x16, 0x94, 0x21, 0xec, 0x9b, 0xdd,
    0x9f, 0x1a, 0x56, 0x48, 0xf7, 0x5a, 0xde, 0x00,
    0x5a, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x53, 0x41,
    0xe6, 0xb2, 0x64, 0x69, 0x79, 0xa7, 0x0e, 0x57,
    0x65, 0x30, 0x07, 0xa1, 0xf3, 0x10, 0x16, 0x94,
    0x21, 0xec, 0x9b, 0xdd, 0x9f, 0x1a, 0x56, 0x48,
    0xf7, 0x5a, 0xde, 0x00, 0x5a, 0xf1, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00,
    0x90, 0x01, 0xd7, 0xb7, 0xf6, 0x53, 0x2b, 0xf4,
    0xa3, 0x4f, 0x4f, 0x41, 0x90, 0xfe, 0xad, 0x55,
    0x1c, 0xe6, 0x2a, 0xba, 0x54, 0x08, 0xe5, 0x30,
    0x60, 0xe6, 0x36, 0x1c, 0x35, 0x6a, 0x77, 0x1d,
    0xc7, 0x7b, 0x20, 0x00, 0x00, 0x00, 0x17, 0x00,
    0x00, 0x00, 0xce, 0xd6, 0xb5, 0xfe, 0xbc, 0x99,
    0x3f, 0x0c, 0x9b, 0x05, 0xfa, 0x6e, 0xf0, 0x9b,
    0x42, 0x6f, 0x18, 0x98, 0xf6, 0x10, 0x53, 0x53,
    0x86, 0xa3, 0x74, 0x55, 0x66, 0x76, 0x6f, 0x17,
    0x71, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xca, 0xce,
    0xf4, 0x5f, 0x49, 0xfd, 0xcc, 0xd0, 0x87, 0xe3,
    0x50, 0x1d, 0x75, 0x26, 0xb8, 0x65, 0x81, 0x67,
    0xbd, 0xac, 0x68, 0x4b, 0x6f, 0x4f, 0xb0, 0x99,
    0x00, 0xab, 0x91, 0x55, 0x61, 0x3e, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x48, 0x00, 0x00, 0x00, 0x30, 0x46,
    0x02, 0x21, 0x00, 0x92, 0xa1, 0xf8, 0x3a, 0xd4,
    0x45, 0x57, 0xcb, 0x82, 0x0f, 0x2f, 0x07, 0x0f,
    0xaf, 0x87, 0xe5, 0x1c, 0x82, 0x9d, 0x85, 0x29,
    0x28, 0xab, 0x9e, 0xaa, 0x0d, 0x23, 0x31, 0x9e,
    0xa8, 0x25, 0x5e, 0x02, 0x21, 0x00, 0x8d, 0x98,
    0x5c, 0xba, 0x0c, 0x62, 0x39, 0xa5, 0x31, 0xcf,
    0x20, 0xc0, 0x14, 0xa9, 0x57, 0x29, 0xb7, 0x62,
    0xd7, 0x75, 0x5a, 0xd6, 0x8c, 0xf8, 0x20, 0xdd,
    0x93, 0xf6, 0x45, 0xa0, 0x59, 0x53, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

static byte tls_client_hello[] = {
    0x44, 0x00, 0x00, 0x00,
    0x16, 0x03, 0x03, 0x00, 0x43, 0x01, 0x00, 0x00,
    0x3f, 0x03, 0x03, 0x95, 0x6c, 0x41, 0xa9, 0x12,
    0x86, 0x8a, 0xda, 0x9b, 0xb2, 0x5b, 0xb4, 0xbb,
    0xd6, 0x1d, 0xde, 0x4f, 0xda, 0x23, 0x2a, 0x74,
    0x7b, 0x2a, 0x93, 0xf8, 0xac, 0xc6, 0x69, 0x24,
    0x70, 0xc4, 0x2a, 0x07, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x04, 0xc0, 0x05, 0x00,
    0x3d, 0x00, 0x00, 0x0a, 0x00, 0x04, 0x00, 0x02,
    0x00, 0x17, 0x00, 0x0b, 0x00, 0x02, 0x01, 0x00
};

static byte tls_certificate[] = {
    0x44, 0x00, 0x00, 0x00,
    0x16, 0x03, 0x03, 0x01, 0x55, 0x0b, 0x00, 0x00,
    0xc0, 0x00, 0x00, 0xb8, 0x00, 0x00, 0xb8, 0x12,
    0x86, 0x17, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00,
    0x00, 0xab, 0x9d, 0xfd, 0xba, 0x74, 0x25, 0x29,
    0x93, 0x9d, 0x2d, 0x5d, 0xf4, 0x77, 0xec, 0x90,
    0x2e, 0x13, 0xb8, 0x21, 0x1a, 0x19, 0x70, 0x1e,
    0x50, 0x2f, 0xf5, 0x6e, 0x6e, 0x25, 0xae, 0x8c,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, 0xf4, 0x04,
    0x74, 0xf0, 0x7a, 0xe4, 0xe0, 0x79, 0xd1, 0xf1,
    0x9f, 0xae, 0xbd, 0xa8, 0xef, 0x1e, 0xfa, 0x18,
    0xc2, 0x6a, 0x76, 0xae, 0xa5, 0xaa, 0xbf, 0xc3,
    0x4f, 0x12, 0x94, 0x8c, 0x8f, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xa5, 0x58, 0xed, 0x0f, 0x31, 0x33, 0x45,
    0x63, 0xc8, 0x8a, 0xd5, 0x53, 0xd9, 0xe4, 0x6e,
    0x20, 0x5d, 0x54, 0x3b, 0x83, 0x99, 0xcf, 0x9b,
    0xef, 0x9e, 0xa8, 0xaa, 0xc5, 0xeb, 0xfb, 0x20,
    0xa2, 0x10, 0x00, 0x00, 0x41, 0x04, 0x1d, 0xd8,
    0x36, 0x68, 0xe9, 0xb0, 0x7b, 0x93, 0x12, 0x38,
    0x31, 0x23, 0x90, 0xc8, 0x87, 0xca, 0xdb, 0x82,
    0x27, 0x39, 0xde, 0x7b, 0x43, 0xd2, 0x23, 0xd7,
    0xcd, 0xd1, 0x3c, 0x77, 0x0e, 0xd2, 0xd1, 0x93,
    0x70, 0x02, 0xaf, 0x3b, 0x18, 0x47, 0xc5, 0x30,
    0x4c, 0x33, 0x60, 0xcf, 0xbf, 0xc5, 0x9b, 0x3c,
    0x67, 0xd9, 0x45, 0x06, 0x38, 0xda, 0x92, 0xbe,
    0x65, 0xbf, 0x81, 0x8c, 0xaa, 0x7e, 0x0f, 0x00,
    0x00, 0x48, 0x30, 0x46, 0x02, 0x21, 0x00, 0xa3,
    0xad, 0xaa, 0x61, 0x00, 0xe6, 0x9d, 0xbd, 0xcf,
    0x48, 0x73, 0xb7, 0xa6, 0xed, 0xe3, 0x62, 0x0a,
    0x79, 0xe4, 0xf8, 0x14, 0x27, 0x4d, 0xeb, 0x73,
    0x91, 0x01, 0x0c, 0xae, 0x08, 0xb9, 0x43, 0x02,
    0x21, 0x00, 0xd3, 0x28, 0xa4, 0x86, 0xcf, 0x8b,
    0xaf, 0x35, 0xc9, 0x04, 0xf7, 0x1f, 0xe2, 0x56,
    0x22, 0xf7, 0x5d, 0xdf, 0x53, 0x13, 0x4f, 0xc6,
    0xdb, 0x6b, 0xc0, 0x0d, 0x57, 0x90, 0xc4, 0x23,
    0xfe, 0x06, 0x14, 0x03, 0x03, 0x00, 0x01, 0x01,
    0x16, 0x03, 0x03, 0x00, 0x50, 0x4b, 0x77, 0x62,
    0xff, 0xa9, 0x03, 0xc1, 0x1e, 0x6f, 0xd8, 0x35,
    0x93, 0x17, 0x2d, 0x54, 0xef, 0x6f, 0xda, 0xdb,
    0xa0, 0x35, 0x1b, 0xe1, 0xb9, 0xca, 0xa3, 0x90,
    0xdf, 0x7e, 0x17, 0xec, 0x0b, 0xe8, 0xcc, 0xf9,
    0xa4, 0x92, 0x1b, 0x77, 0x9c, 0x0f, 0xf3, 0xc6,
    0xdc, 0xf9, 0xb3, 0x7d, 0x3c, 0x41, 0x6c, 0x4c,
    0x80, 0x95, 0x66, 0x7e, 0xb1, 0x7e, 0x37, 0x3d,
    0x28, 0xef, 0xa4, 0xca, 0xfd, 0x3e, 0xfd, 0x8f,
    0xdd, 0x84, 0x10, 0xc5, 0xb2, 0x71, 0x38, 0xab,
    0x8d, 0x9c, 0xe3, 0xac, 0x46
};

#endif // CONSTANTS_H
