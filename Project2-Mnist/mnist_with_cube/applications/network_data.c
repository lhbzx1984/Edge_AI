#include "network_data.h"

ai_handle ai_network_data_weights_get(void)
{

  AI_ALIGNED(4)
  static const ai_u8 s_network_weights[ 2448 ] = {
    0x6c, 0x2c, 0xff, 0x3d, 0x39, 0x2a, 0xd2, 0x3e, 0xb9, 0x15,
    0xa4, 0x3e, 0x4a, 0x67, 0x4e, 0x3f, 0xcf, 0xc8, 0xa5, 0x3e,
    0xca, 0xda, 0xc0, 0x3e, 0x86, 0x0b, 0xaf, 0x3e, 0x5f, 0xb2,
    0x17, 0x3f, 0x75, 0xb2, 0x1c, 0x3f, 0xdf, 0xe1, 0x85, 0xbe,
    0xd2, 0xa9, 0xc2, 0x3e, 0xb0, 0x4c, 0x27, 0x3f, 0xd0, 0x6a,
    0x8a, 0xbe, 0x38, 0x6d, 0x53, 0x3e, 0x48, 0x6a, 0xf2, 0x3e,
    0xc3, 0xcf, 0x0a, 0xbe, 0x29, 0xc7, 0xbc, 0x3e, 0x39, 0x74,
    0x87, 0x3d, 0xc4, 0x3c, 0x89, 0x3e, 0xd6, 0xbe, 0x2a, 0x3f,
    0xa8, 0xd0, 0x0e, 0x3f, 0x3d, 0x13, 0x4d, 0x3f, 0x4c, 0x57,
    0x32, 0x3e, 0x85, 0x6b, 0xbb, 0x3e, 0xaf, 0xf1, 0x7a, 0xbc,
    0x0e, 0xc0, 0x0a, 0x3e, 0x36, 0x3a, 0x1c, 0xbe, 0xab, 0xab,
    0x21, 0xbf, 0x0c, 0x75, 0xe8, 0xbe, 0x8f, 0xb0, 0xab, 0x3e,
    0x32, 0x95, 0x1e, 0xbf, 0x79, 0x2f, 0x53, 0x3d, 0xc5, 0x4d,
    0xcc, 0x3e, 0xa8, 0x6f, 0xb8, 0xbe, 0x48, 0x91, 0x19, 0x3e,
    0x56, 0x3f, 0x06, 0x3f, 0x55, 0xb7, 0xc1, 0x3d, 0x09, 0xe0,
    0x29, 0xbe, 0x5a, 0x58, 0x81, 0x3d, 0x77, 0x8b, 0x3d, 0xbe,
    0xb0, 0x99, 0x44, 0x3e, 0x7b, 0xcd, 0x19, 0x3e, 0xc0, 0x53,
    0xaa, 0x3e, 0x1e, 0x3b, 0x8d, 0x3c, 0xe8, 0xf7, 0xce, 0x3d,
    0xad, 0xd0, 0x04, 0x3e, 0x33, 0xcb, 0xe5, 0x3e, 0xd1, 0xe6,
    0x78, 0x3d, 0xfd, 0xcb, 0xc3, 0x3e, 0x42, 0x9d, 0x61, 0x3e,
    0xbe, 0x18, 0x6a, 0x3e, 0x25, 0x03, 0x2c, 0x3e, 0xae, 0xf4,
    0x8d, 0xbe, 0xd8, 0x60, 0x27, 0xbe, 0xf3, 0x20, 0x1a, 0xbe,
    0x2b, 0x58, 0x50, 0xbe, 0x27, 0xe1, 0x80, 0xbd, 0x45, 0xbc,
    0x9b, 0x3b, 0x7a, 0xef, 0x32, 0x3e, 0x95, 0xd3, 0x1b, 0xbd,
    0xff, 0xaa, 0xee, 0xbe, 0x4e, 0x5d, 0xf1, 0xbe, 0x55, 0xa4,
    0x99, 0xbe, 0x83, 0xf9, 0xbe, 0xbd, 0x94, 0xcc, 0xa8, 0xbe,
    0x4a, 0xca, 0xe8, 0x3c, 0x7b, 0x57, 0xd9, 0xbe, 0xb9, 0xef,
    0x35, 0xbe, 0xd9, 0xeb, 0x88, 0xbd, 0xd0, 0x8f, 0x9f, 0xbe,
    0x97, 0x2a, 0x8b, 0xbd, 0x7c, 0x22, 0x18, 0x3e, 0x92, 0x02,
    0x9f, 0xbd, 0xac, 0xb2, 0x54, 0xbe, 0x29, 0x06, 0xb4, 0xbe,
    0x42, 0x7f, 0x10, 0x3e, 0x5b, 0x9a, 0x94, 0xbe, 0x12, 0x81,
    0x55, 0xbc, 0x4f, 0xd7, 0xa1, 0xbe, 0x17, 0xa2, 0x9a, 0x3d,
    0xb9, 0x18, 0xe3, 0x3d, 0xcc, 0xe7, 0xa4, 0x3e, 0x6a, 0x85,
    0x31, 0x3d, 0x38, 0xf1, 0x7e, 0x3e, 0xf0, 0xe9, 0x0a, 0x3e,
    0xcb, 0xcf, 0x55, 0x3c, 0xac, 0x70, 0x37, 0x3d, 0xcc, 0xa1,
    0x07, 0x3c, 0x21, 0xfc, 0x18, 0xbe, 0xf4, 0x19, 0x6f, 0x3d,
    0x67, 0xf0, 0x50, 0xbe, 0x22, 0xbd, 0xc9, 0x3e, 0x8e, 0x23,
    0x67, 0x3e, 0x16, 0xc1, 0x00, 0x3f, 0xb0, 0xa3, 0xd2, 0xbd,
    0x40, 0xb9, 0x71, 0x3e, 0xd3, 0x00, 0x96, 0xbe, 0xee, 0x86,
    0xa7, 0x3b, 0x76, 0x3f, 0x39, 0xbd, 0x0b, 0xc7, 0x74, 0xbe,
    0x87, 0xef, 0x6b, 0x3c, 0x5a, 0x54, 0xf9, 0x3d, 0xc0, 0xec,
    0xde, 0xbd, 0x63, 0x19, 0x5c, 0x3e, 0x27, 0x3c, 0x4c, 0x3e,
    0xf5, 0x6a, 0xc4, 0x3e, 0xdb, 0x6e, 0xd0, 0x3d, 0x69, 0x3b,
    0xf8, 0x3e, 0x85, 0x8a, 0xa3, 0xbe, 0x9e, 0x7f, 0x81, 0xbe,
    0xc2, 0xf6, 0x98, 0xbd, 0x73, 0xbc, 0xf1, 0xbe, 0xb9, 0xff,
    0xc6, 0xbd, 0x8a, 0xc1, 0x4c, 0xbd, 0xc3, 0x52, 0x78, 0xbe,
    0x33, 0x4a, 0x5f, 0x3d, 0x5b, 0x8c, 0x50, 0x3e, 0x14, 0xc4,
    0x5b, 0xbe, 0xa0, 0x4e, 0xb8, 0x3d, 0x96, 0x51, 0x2a, 0x3e,
    0xdf, 0x26, 0x70, 0x3d, 0x28, 0xfd, 0x6f, 0xbe, 0x2b, 0x5e,
    0xe4, 0x3d, 0x84, 0x09, 0xab, 0xbe, 0xe0, 0x0a, 0x47, 0x3e,
    0xa7, 0xad, 0x1b, 0xbe, 0x8f, 0x29, 0x54, 0x3e, 0x16, 0x42,
    0xc2, 0xbe, 0xdf, 0x20, 0x9c, 0x3e, 0x87, 0x64, 0x9b, 0x3e,
    0x4f, 0x53, 0x64, 0xbc, 0xe2, 0x3e, 0x13, 0xbe, 0x27, 0x3f,
    0x3c, 0x3e, 0x23, 0x8e, 0xcc, 0x3e, 0x68, 0xca, 0x9b, 0xbd,
    0xa6, 0xae, 0x49, 0xbe, 0x1f, 0x51, 0xec, 0xbe, 0x6a, 0x12,
    0x90, 0xbe, 0xa9, 0x1d, 0x97, 0xbd, 0x29, 0xfb, 0x3c, 0xbe,
    0xc9, 0x16, 0x54, 0xbe, 0x82, 0xe8, 0xef, 0x3d, 0x9c, 0x25,
    0x7d, 0xbe, 0x0a, 0x0a, 0xb1, 0xbe, 0xcb, 0x47, 0x28, 0x3e,
    0x6f, 0xa6, 0xb6, 0x3e, 0x56, 0xcb, 0xa6, 0xbd, 0xf2, 0x63,
    0x02, 0xbe, 0x5a, 0xc3, 0xc5, 0xbe, 0xb5, 0x26, 0x83, 0xbe,
    0x78, 0xef, 0x29, 0xbe, 0xa5, 0x50, 0x0e, 0xbe, 0x60, 0xc6,
    0xb1, 0xbd, 0xe7, 0x02, 0xe8, 0x3d, 0x32, 0xfe, 0x17, 0xbe,
    0xc7, 0x18, 0xda, 0xbe, 0x5a, 0x54, 0xa4, 0xbe, 0xc5, 0x89,
    0x73, 0xbe, 0x6a, 0xe9, 0x8b, 0x3e, 0x48, 0x1c, 0x0b, 0xbf,
    0x15, 0x71, 0xef, 0x3c, 0x4a, 0xeb, 0x8a, 0xbc, 0xb3, 0x08,
    0x81, 0xbe, 0xcd, 0x43, 0xbd, 0xbe, 0xe7, 0x7d, 0x4b, 0xbe,
    0x67, 0xaf, 0x85, 0xbe, 0xf1, 0x08, 0xd5, 0xbb, 0x31, 0xf4,
    0xad, 0xbd, 0xc9, 0x8f, 0x75, 0xbd, 0x94, 0x47, 0x02, 0xbd,
    0x08, 0xcc, 0x99, 0xbe, 0x3b, 0x63, 0xad, 0xbd, 0xb2, 0x4d,
    0x27, 0x3e, 0xa1, 0x94, 0x4f, 0x3d, 0x9c, 0xea, 0x9a, 0x3e,
    0x82, 0xfc, 0x2f, 0x3e, 0x8c, 0x37, 0x5b, 0x3e, 0x34, 0x82,
    0x89, 0x3d, 0x54, 0x0d, 0x8f, 0x3e, 0x07, 0xda, 0x18, 0x3e,
    0x56, 0x09, 0x60, 0x3e, 0x12, 0x67, 0x30, 0x3e, 0x57, 0x2d,
    0x8c, 0x3e, 0x5a, 0xac, 0x47, 0xbe, 0x43, 0xd3, 0xc2, 0xbe,
    0x74, 0xb6, 0xa2, 0xbe, 0x77, 0x57, 0x24, 0xbf, 0x0e, 0x4f,
    0x87, 0x3e, 0x26, 0xf4, 0xdc, 0xbd, 0xa1, 0xde, 0x83, 0xbe,
    0x2f, 0x7d, 0xdd, 0xbe, 0x53, 0x84, 0xb5, 0x3d, 0x54, 0xc5,
    0x13, 0xbe, 0x20, 0x5f, 0xa5, 0xbe, 0x81, 0x3f, 0x4d, 0xbe,
    0x63, 0x80, 0x7f, 0xbe, 0xba, 0x92, 0xb2, 0x3e, 0x91, 0x28,
    0x30, 0x3e, 0xb9, 0x28, 0xed, 0x3d, 0xe6, 0x7a, 0x08, 0xbe,
    0x52, 0x64, 0xc1, 0xbc, 0x18, 0x73, 0x43, 0x3e, 0x32, 0x4e,
    0x6b, 0x3e, 0x3b, 0xa6, 0x17, 0xbe, 0x69, 0x4d, 0x98, 0x3e,
    0xe7, 0x4b, 0x42, 0xbe, 0x8b, 0x34, 0x9d, 0x3d, 0xa3, 0x0d,
    0xca, 0xbc, 0xe5, 0x15, 0x22, 0x3e, 0xb1, 0xa8, 0x96, 0xbe,
    0x69, 0xbc, 0x30, 0x3e, 0x9a, 0x18, 0x4e, 0xbd, 0xb8, 0x44,
    0x59, 0xbd, 0xa8, 0x88, 0x3e, 0xbe, 0xa5, 0x66, 0x25, 0x3e,
    0x77, 0x24, 0x49, 0x3d, 0xa1, 0x7e, 0xa6, 0xbd, 0x00, 0x25,
    0xf4, 0xbd, 0x70, 0x39, 0xb2, 0x3e, 0xfe, 0xe5, 0x91, 0xbc,
    0x67, 0xea, 0x92, 0x3c, 0x14, 0x4a, 0xf2, 0xbd, 0x26, 0xa2,
    0xf7, 0xbb, 0x90, 0xf9, 0x6d, 0xbd, 0x28, 0xf9, 0x43, 0x3e,
    0x38, 0x13, 0x9b, 0xbe, 0xce, 0x3f, 0x64, 0x3d, 0xce, 0xa5,
    0xaa, 0xbe, 0xcd, 0x79, 0x36, 0x3d, 0x10, 0xf9, 0xf6, 0xbe,
    0x77, 0x43, 0xe7, 0x3d, 0x3e, 0x09, 0x8f, 0xbe, 0x50, 0xbc,
    0x5b, 0xbd, 0x24, 0x2f, 0x6d, 0x3e, 0xf9, 0xc3, 0x06, 0x3e,
    0x70, 0x0b, 0x47, 0xbe, 0xa6, 0xe5, 0x60, 0x3e, 0xa1, 0xac,
    0x98, 0x3e, 0x28, 0x45, 0x58, 0x3e, 0x2a, 0x7c, 0x06, 0xbf,
    0x4d, 0xc7, 0xee, 0x3d, 0xae, 0x5e, 0xe1, 0x3e, 0x1f, 0x7a,
    0xb6, 0x3e, 0x36, 0xd8, 0xb0, 0xbe, 0xa7, 0x97, 0xfa, 0xbe,
    0x4d, 0x90, 0x63, 0x3c, 0xf8, 0xe1, 0xd2, 0xbe, 0xf7, 0xe1,
    0xb4, 0xbd, 0x90, 0xec, 0x5c, 0xbe, 0xea, 0x1f, 0xd2, 0xbd,
    0x7e, 0xc5, 0x06, 0xbb, 0xf3, 0x38, 0x15, 0xbe, 0xa4, 0xda,
    0x40, 0xbe, 0x11, 0xa8, 0x99, 0x3d, 0xb6, 0x8d, 0xc6, 0xbd,
    0x50, 0x66, 0xd7, 0x3d, 0x48, 0x1e, 0xac, 0x3e, 0x3e, 0x68,
    0x26, 0xbd, 0xb2, 0x15, 0xe8, 0x3e, 0x68, 0xe5, 0x66, 0xbe,
    0xa3, 0xf3, 0xf7, 0xbe, 0xb7, 0x86, 0xb4, 0xbe, 0xe9, 0xe2,
    0x15, 0xbf, 0x00, 0xef, 0xa1, 0x3d, 0xd0, 0x23, 0xec, 0xbb,
    0x76, 0x5c, 0x70, 0x3d, 0x25, 0xa2, 0x4d, 0xbe, 0xc1, 0x80,
    0x65, 0x3e, 0x24, 0xe8, 0x84, 0xbe, 0x95, 0x59, 0x24, 0xbf,
    0xf3, 0xf9, 0xeb, 0xbb, 0xf1, 0x47, 0xe7, 0xbd, 0xff, 0x17,
    0x54, 0xbe, 0x6d, 0x4d, 0x0d, 0x3e, 0x74, 0x07, 0x49, 0xbe,
    0x95, 0xbf, 0xb7, 0x3d, 0x23, 0x7e, 0x86, 0x3e, 0xb5, 0xb9,
    0xb9, 0x3d, 0x73, 0x1c, 0x9a, 0x3d, 0xd1, 0xcc, 0xaa, 0x3e,
    0x60, 0x0f, 0x97, 0xbe, 0x8b, 0x69, 0xad, 0xbe, 0xe1, 0xbf,
    0x96, 0xbe, 0x1d, 0xf8, 0xac, 0x3e, 0x1c, 0xe1, 0x1a, 0xbe,
    0xe7, 0x66, 0x9d, 0x3e, 0x75, 0xb9, 0x41, 0xbd, 0x4f, 0xbe,
    0xe4, 0x3e, 0x3a, 0x63, 0x3d, 0xbd, 0xcf, 0x45, 0x5a, 0x3d,
    0xf5, 0xd6, 0xf7, 0x3d, 0x20, 0x7e, 0x02, 0x3f, 0x64, 0x2d,
    0xab, 0xbd, 0x60, 0x11, 0x25, 0x3e, 0x68, 0xea, 0x90, 0x3e,
    0x52, 0x56, 0x65, 0xbe, 0x1c, 0xde, 0xce, 0xbd, 0x29, 0x40,
    0xe2, 0xbd, 0xe7, 0xa8, 0x9c, 0x3d, 0x17, 0x41, 0xf1, 0xbd,
    0xed, 0x08, 0xc4, 0xbd, 0x6d, 0x6b, 0x4f, 0x3e, 0x86, 0x54,
    0x92, 0xbd, 0xed, 0x78, 0x82, 0xba, 0x83, 0xba, 0xc6, 0xbe,
    0x6a, 0xc8, 0x05, 0xbe, 0x7a, 0xd0, 0x37, 0xbe, 0x8a, 0x3b,
    0xb4, 0xbd, 0xbd, 0x95, 0x48, 0x3e, 0xd6, 0x1f, 0x83, 0xbc,
    0x5b, 0x98, 0xa4, 0xbd, 0xd8, 0x88, 0xe1, 0x3e, 0x81, 0x35,
    0x17, 0x3b, 0xf2, 0x0c, 0xc5, 0x3e, 0x40, 0x5b, 0x1f, 0x3e,
    0x78, 0x01, 0x7c, 0x3e, 0x55, 0xfa, 0xad, 0x3d, 0x7e, 0xf0,
    0x1f, 0x3e, 0xba, 0xdb, 0xa1, 0x3d, 0x1b, 0x3f, 0x0c, 0x3f,
    0x75, 0x9b, 0xf2, 0xbd, 0x97, 0xca, 0xc2, 0x3e, 0xc5, 0x9b,
    0x9a, 0x3e, 0xc8, 0x88, 0x91, 0x3e, 0x88, 0xfd, 0x57, 0xbe,
    0xf1, 0x2d, 0x9b, 0xbe, 0x7f, 0x8e, 0x3d, 0xbd, 0x5a, 0x75,
    0x11, 0x3e, 0x84, 0xfb, 0x72, 0x3d, 0x16, 0x35, 0xeb, 0xbe,
    0x05, 0x14, 0xbf, 0xbe, 0x9c, 0x56, 0xc0, 0x3c, 0x17, 0x7a,
    0x8f, 0xbb, 0x0a, 0x0c, 0xc1, 0xbc, 0x85, 0x49, 0xf5, 0x3c,
    0x9e, 0xcd, 0xea, 0xbe, 0xda, 0xe2, 0x4e, 0xbf, 0xd7, 0x29,
    0x32, 0xbf, 0x42, 0x45, 0x1c, 0xbf, 0x78, 0x97, 0x0a, 0xbf,
    0x6e, 0x43, 0xe6, 0xbe, 0xeb, 0xd2, 0xba, 0xbe, 0x70, 0x2e,
    0x8a, 0xbe, 0xfd, 0x5d, 0x38, 0xbe, 0x29, 0x3d, 0xbb, 0xbd,
    0x48, 0x1f, 0x52, 0xbc, 0x8c, 0x44, 0x63, 0x3d, 0xcb, 0x21,
    0xf0, 0x3d, 0x85, 0x6c, 0x41, 0x3e, 0x62, 0x81, 0x85, 0x3e,
    0x4b, 0xf6, 0xaf, 0x3e, 0x68, 0x5d, 0xf1, 0x3e, 0x76, 0x89,
    0x95, 0x98, 0x8b, 0x9a, 0x96, 0xa9, 0x6a, 0xb9, 0xa8, 0xaa,
    0x48, 0xa9, 0xb8, 0x99, 0x38, 0x9a, 0xa7, 0x56, 0x6a, 0xab,
    0x97, 0xaa, 0x7a, 0x8a, 0xa6, 0xab, 0xaa, 0x89, 0x99, 0x89,
    0xa9, 0xb8, 0x9c, 0x76, 0x68, 0xca, 0x9c, 0x77, 0x5b, 0xb9,
    0xa8, 0xbb, 0x7a, 0x99, 0xa6, 0x9b, 0xaa, 0x65, 0x77, 0x66,
    0xbb, 0xa6, 0x2a, 0xcb, 0x5c, 0xc7, 0x6c, 0x9b, 0x3b, 0xb7,
    0x68, 0xab, 0x4a, 0x98, 0x68, 0x9a, 0x56, 0x49, 0x93, 0xb9,
    0x4b, 0x8c, 0xb5, 0xcc, 0xbb, 0xb8, 0x9a, 0xbc, 0x8a, 0xa5,
    0x4b, 0x9a, 0x8a, 0xba, 0x8a, 0x76, 0x87, 0x9b, 0xb9, 0x58,
    0xab, 0x9b, 0xc9, 0x89, 0xab, 0xa8, 0xbb, 0xcb, 0xc8, 0x66,
    0x79, 0x76, 0xb7, 0xb9, 0x8a, 0xa7, 0xad, 0xf9, 0x9a, 0xb9,
    0xbc, 0x99, 0xa5, 0xec, 0x7e, 0x49, 0x94, 0xbc, 0xa7, 0x79,
    0x89, 0x88, 0x86, 0x96, 0x5a, 0x96, 0x7a, 0xcb, 0x7a, 0xa9,
    0x4b, 0x4c, 0xa3, 0xdb, 0x8b, 0x53, 0x44, 0xb5, 0xca, 0x86,
    0x87, 0x87, 0xa6, 0xaa, 0x98, 0x96, 0x9b, 0xb9, 0xaa, 0xcc,
    0x99, 0x66, 0x95, 0x65, 0x88, 0x76, 0x66, 0x97, 0xa5, 0x7a,
    0x76, 0x98, 0x98, 0x8a, 0xa6, 0xb9, 0xbc, 0xc8, 0x9a, 0xd9,
    0xa4, 0x49, 0x86, 0xe3, 0x88, 0x7a, 0x95, 0x88, 0x79, 0x8c,
    0xa7, 0xaa, 0xab, 0x99, 0xc8, 0xb9, 0x9c, 0xc8, 0x8b, 0xea,
    0x86, 0xa8, 0x7b, 0xc3, 0x78, 0xac, 0xda, 0x17, 0x9a, 0x99,
    0x9a, 0x8b, 0xcb, 0xaa, 0x9d, 0xa9, 0xa9, 0xd9, 0x9d, 0x89,
    0x76, 0xd8, 0xab, 0x57, 0x65, 0xa8, 0x9a, 0x32, 0xd9, 0x8a,
    0x9a, 0x99, 0xc9, 0x9a, 0x9b, 0x89, 0xb8, 0xa9, 0x9c, 0x87,
    0x8a, 0xa9, 0x8b, 0xaa, 0x4a, 0x88, 0x88, 0x79, 0xd7, 0x7c,
    0xd9, 0xaa, 0xb7, 0x8c, 0xc9, 0x8a, 0xa8, 0x7b, 0xa7, 0xab,
    0x8a, 0x8a, 0x86, 0xbb, 0x8d, 0x5a, 0x85, 0xaa, 0x7a, 0x9b,
    0xd7, 0xbd, 0x79, 0x8a, 0xc6, 0xbc, 0x79, 0x88, 0x98, 0xaa,
    0x9a, 0x8b, 0xb9, 0x99, 0xb7, 0xac, 0xcb, 0xa8, 0x9b, 0xa9,
    0x8a, 0xac, 0xaa, 0xa9, 0x99, 0xa8, 0xa8, 0x98, 0x89, 0x77,
    0xa7, 0xba, 0xab, 0x66, 0xa5, 0xbf, 0xed, 0x47, 0x7a, 0x9a,
    0xb9, 0x8a, 0xa8, 0xaa, 0x9c, 0x98, 0x97, 0xd9, 0xad, 0x88,
    0x45, 0xb9, 0xa9, 0x56, 0x45, 0x89, 0xa7, 0x35, 0xda, 0x89,
    0xab, 0x89, 0xd7, 0x9a, 0xac, 0x89, 0xa7, 0xaa, 0xab, 0x7b,
    0x69, 0x98, 0x99, 0x6d, 0x79, 0x58, 0x87, 0x79, 0xd7, 0x7a,
    0xa8, 0x76, 0xa7, 0xaa, 0xb9, 0xaa, 0xa9, 0xaa, 0xba, 0xad,
    0xa8, 0xa8, 0x9b, 0x49, 0xa8, 0x8b, 0xa8, 0xb4, 0x87, 0x7c,
    0xd7, 0x88, 0xa8, 0x9b, 0xca, 0x88, 0xa8, 0xaa, 0x8b, 0x77,
    0x89, 0xab, 0x9b, 0x8b, 0x68, 0x79, 0xa8, 0x79, 0xa8, 0xae,
    0xcc, 0x99, 0x97, 0x9d, 0xe9, 0x98, 0x98, 0x8c, 0xb8, 0x9c,
    0x9a, 0x9a, 0xba, 0x8b, 0x99, 0x76, 0x89, 0xcb, 0x98, 0xba,
    0xbc, 0xa9, 0x8d, 0xba, 0x9b, 0xa8, 0x6d, 0xc8, 0x87, 0xaa,
    0x5c, 0xc8, 0x98, 0xeb, 0x5e, 0x89, 0x94, 0xfe, 0x6a, 0xa9,
    0xa9, 0xa9, 0x4a, 0x9a, 0x98, 0xbb, 0x2a, 0x59, 0x91, 0xa9,
    0x3d, 0x89, 0x95, 0xdd, 0x5d, 0x59, 0x93, 0xde, 0x6a, 0xaa,
    0xa8, 0xbb, 0x6a, 0xa8, 0x8a, 0x8a, 0x58, 0x9a, 0x98, 0x86,
    0x4b, 0xab, 0x96, 0xaa, 0x7b, 0x69, 0xa7, 0x68, 0xcb, 0xb6,
    0x7c, 0x9b, 0xb9, 0xa8, 0x7c, 0x78, 0xb8, 0xb9, 0xab, 0x89,
    0xba, 0xb9, 0xbb, 0x57, 0xc6, 0xa7, 0x8c, 0xa4, 0xb8, 0x77,
    0x78, 0x76, 0xba, 0x87, 0x78, 0xa9, 0xab, 0x94, 0x68, 0xcc,
    0x9b, 0xa4, 0x1a, 0xb9, 0x88, 0x79, 0x69, 0x78, 0xc7, 0xb8,
    0x88, 0x88, 0x7c, 0x9a, 0x96, 0x98, 0xaa, 0x89, 0x97, 0x88,
    0xe7, 0x89, 0xaa, 0x88, 0xd8, 0xba, 0xad, 0xec, 0x59, 0x97,
    0x67, 0xa7, 0x49, 0x99, 0x98, 0xa9, 0xb9, 0x7a, 0xa8, 0x99,
    0xd5, 0x9b, 0xac, 0x66, 0xe3, 0xdb, 0xae, 0xd5, 0x98, 0x98,
    0x79, 0xa7, 0x99, 0xb8, 0x7a, 0x99, 0xa9, 0x9b, 0xba, 0x37,
    0xc3, 0xac, 0xba, 0x43, 0xd2, 0x9b, 0xcc, 0x30, 0xc8, 0x9c,
    0xba, 0x97, 0xb8, 0x9b, 0xbb, 0x78, 0xa7, 0xa9, 0x8b, 0x98,
    0x89, 0x9b, 0xaa, 0x9a, 0x48, 0x7a, 0x98, 0x58, 0xa7, 0xad,
    0xab, 0xa8, 0xa7, 0xad, 0xda, 0x98, 0xa9, 0x9c, 0xb8, 0x8a,
    0x9a, 0x8b, 0xb8, 0xcb, 0x8a, 0x7b, 0x97, 0xad, 0x7a, 0xc8,
    0x7a, 0xab, 0x9e, 0xa8, 0x87, 0xa9, 0xac, 0xa8, 0x95, 0xbb,
    0xed, 0x87, 0xa9, 0xec, 0xfb, 0xd7, 0x9c, 0xc8, 0x6a, 0xa8,
    0x87, 0xaa, 0x6b, 0x89, 0x84, 0xba, 0x9a, 0x59, 0x93, 0xba,
    0xda, 0x5b, 0xa7, 0xcb, 0xe4, 0x8c, 0x9c, 0xe9, 0x4a, 0xa8,
    0x98, 0xc9, 0x4a, 0xa8, 0x86, 0x9b, 0x6a, 0x6b, 0x85, 0x9b,
    0x96, 0x9d, 0xc8, 0x8a, 0x78, 0xcd, 0xdb, 0x68, 0x5a, 0xa5,
    0x49, 0xa8, 0x2a, 0xb7, 0x69, 0x9a, 0x6a, 0x87, 0x77, 0x88,
    0x69, 0x9b, 0xa9, 0x8a, 0x8b, 0xa9, 0xa9, 0x9c, 0x87, 0x95,
    0x38, 0x87, 0xaa, 0xc5, 0x4a, 0x86, 0x96, 0xa9, 0x8a, 0x14,
    0xa8, 0xb9, 0xcc, 0x37, 0xaa, 0xb6, 0xab, 0xc9, 0x86, 0xaa,
    0xbb, 0x88, 0x97, 0x8a, 0x99, 0x97, 0xc5, 0x69, 0x97, 0x56,
    0x97, 0x19, 0x95, 0x78, 0x8a, 0x49, 0x98, 0x99, 0xc8, 0x9a,
    0xbc, 0x98, 0xd9, 0xaa, 0xbd, 0x99, 0xb7, 0xab, 0xbc, 0x67,
    0x79, 0xbc, 0xbb, 0x59, 0x78, 0x8b, 0xb7, 0x87, 0xc9, 0x9a,
    0xaa, 0xa8, 0xb9, 0x8c, 0x99, 0x79, 0xc9, 0x99, 0x79, 0xdb,
    0x9b, 0xa7, 0x6b, 0xdc, 0x8b, 0x7b, 0x87, 0x98, 0xba, 0x87,
    0x79, 0x98, 0xa7, 0x8a, 0xd9, 0xb9, 0x7a, 0x99, 0xa7, 0xca,
    0xac, 0x88, 0xa8, 0xca, 0xc8, 0xa7, 0x8c, 0xa8, 0xa8, 0x59,
    0x86, 0x99, 0xaa, 0x79, 0x96, 0xa9, 0x8b, 0x96, 0x86, 0xcc,
    0x9a, 0x64, 0x47, 0xc8, 0x97, 0x43, 0x38, 0xa3, 0x98, 0xb9,
    0x97, 0x9a, 0x5c, 0x9b, 0xa8, 0xba, 0x6b, 0xb9, 0xa9, 0xab,
    0x57, 0xc9, 0xbb, 0x89, 0x49, 0xaa, 0xaa, 0x88, 0x7a, 0xaa,
    0xa9, 0xaa, 0x5a, 0xba, 0xa9, 0xab, 0x89, 0x99, 0xaa, 0x78,
    0x99, 0xa9, 0x9a, 0x7d, 0x9b, 0xba, 0x9b, 0xad, 0xa8, 0xa8,
    0x7b, 0xa9, 0x78, 0xc9, 0x7b, 0x89, 0x59, 0x9a, 0x99, 0x5a,
    0x99, 0x8a, 0xa8, 0x7b, 0xdb, 0xc7, 0x9d, 0xcb, 0xa9, 0x9b,
    0xb9, 0xbb, 0x8a, 0x9a, 0xb9, 0xbd, 0x8b, 0xa4, 0x89, 0x5a,
    0xa7, 0xa8, 0x8b, 0x68, 0xb7, 0x9a, 0xba, 0xa8, 0x7a, 0xa7,
    0x69, 0xbb, 0x7b, 0xb5, 0x69, 0xa9, 0x59, 0x99, 0x88, 0x5a,
    0x7a, 0x99, 0xa7, 0x6c, 0x7a, 0x79, 0xa7, 0x8b, 0xc3, 0x78,
    0x85, 0x76, 0xc5, 0x4a, 0x94, 0x98, 0x13, 0x49, 0xa3, 0x9b,
    0x31, 0x29, 0xb6, 0x58, 0x73, 0x39, 0xa5, 0x43, 0x4c, 0x9a,
    0xa5, 0xaa, 0x7a, 0x8a, 0xa6, 0xac, 0xb9, 0xaa, 0xab, 0x8b,
    0x98, 0xaa, 0xab, 0x6c, 0x66, 0x8a, 0xa8, 0x49, 0x6a, 0xa6,
    0x88, 0xb8, 0x8a, 0xb7, 0x6a, 0x99, 0x97, 0x9a, 0x89, 0x8a,
    0x7a, 0xaa, 0xa8, 0x9b, 0x8c, 0x66, 0x96, 0x97, 0xa9, 0xa5,
    0x2b, 0x87, 0xb8, 0xab, 0x8c, 0x55, 0xb9, 0xba, 0xbb, 0x9b,
    0xba, 0xb6, 0x9a, 0x8a, 0xb8, 0x72, 0x27, 0xc7, 0xb7, 0x7a,
    0x77, 0x87, 0xc9, 0x8b, 0xb9, 0xaa, 0xac, 0x88, 0x98, 0xcc,
    0x9b, 0x96, 0x69, 0xd9, 0x6a, 0x89, 0x57, 0xa9, 0x38, 0x0c,
    0xc8, 0xbd, 0x91, 0xda, 0xdb, 0x3e, 0x60, 0xbd, 0x1d, 0xbe,
    0x99, 0xf7, 0x24, 0xbe, 0x0d, 0xf3, 0xc9, 0xbd, 0xcc, 0xfe,
    0x82, 0x3c, 0xf5, 0xf5, 0x6a, 0xbd, 0xfd, 0x41, 0x6f,
    0xbd, 0xbc, 0xc7, 0x20, 0x3c, 0x9b, 0xb9, 0xd0, 0x3d
  };

  return AI_HANDLE_PTR(s_network_weights);

}
