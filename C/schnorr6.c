#include "schnorr6.h"

/* A length-prefixed encoding of the following Simplicity program:
 *     (scribe (toWord256 0xDFF1D77F2A671C5F36183726DB2341BE58FEAE1DA2DECED843240F7B502BA659) &&&
 *      scribe (toWord256 0x243F6A8885A308D313198A2E03707344A4093822299F31D0082EFA98EC4E6C89)) &&&
 *      witness (toWord512 0xF9308A019258C31049344F85F89D5229B531C845836F99B08601F113BCE036F995A579DA959FA739FCE39E8BD16FECB5CDCF97060B2C73CDE60E87ABCA1AA5D9) >>>
 *     Simplicity.Programs.LibSecp256k1.Lib.schnorrAssert
 * with jets.
 */
const unsigned char schnorr6[] = {
  0xeb, 0x36, 0x89, 0x28, 0x41, 0x28, 0x94, 0x54, 0x2c, 0x30, 0x14, 0x0b, 0x1c, 0x44, 0xc4, 0x58, 0x05, 0x80, 0x5a, 0x35,
  0x0b, 0x40, 0x53, 0x40, 0xa0, 0x58, 0x85, 0xc0, 0x37, 0x0b, 0x50, 0x52, 0x0a, 0x05, 0xc0, 0x70, 0x13, 0x50, 0xa8, 0x5c,
  0x1b, 0x80, 0x0b, 0x80, 0x05, 0xc1, 0xb8, 0x30, 0x9c, 0x14, 0x54, 0x2c, 0x82, 0xdc, 0x17, 0x07, 0xe1, 0xa2, 0x6b, 0x17,
  0x00, 0xe1, 0x22, 0xe1, 0x21, 0x50, 0xb1, 0xe1, 0x02, 0xe0, 0x7c, 0x00, 0x50, 0x2c, 0x02, 0xe0, 0xfc, 0x4c, 0x2e, 0x24,
  0x0b, 0x84, 0x6b, 0x14, 0x0b, 0x8a, 0x38, 0x90, 0x4e, 0x24, 0x17, 0x16, 0x70, 0xd1, 0x66, 0x15, 0x0b, 0x20, 0xb5, 0x85,
  0xc1, 0x42, 0xe1, 0x5c, 0x0c, 0x5c, 0x5f, 0x98, 0xa0, 0x5c, 0x49, 0xa4, 0x5c, 0x5f, 0xc6, 0x62, 0x81, 0x60, 0x17, 0x14,
  0x71, 0x48, 0xb8, 0xdf, 0x70, 0xa0, 0x5c, 0x4d, 0xc0, 0x05, 0xc7, 0x5c, 0x38, 0x50, 0x2c, 0x02, 0xd0, 0x17, 0x07, 0xe2,
  0x41, 0x71, 0x97, 0x08, 0x14, 0x0b, 0x8f, 0xb8, 0xf8, 0x4e, 0x40, 0x8b, 0x8f, 0x38, 0x80, 0x50, 0x2c, 0x42, 0xe3, 0x1c,
  0x45, 0xc7, 0x5c, 0x48, 0x28, 0x17, 0x1d, 0xf1, 0xc8, 0xb8, 0xfb, 0x91, 0x62, 0xe3, 0x60, 0xa8, 0x58, 0x85, 0xa4, 0x2e,
  0x04, 0x17, 0x11, 0x05, 0xc6, 0xfc, 0x90, 0x17, 0x03, 0x0b, 0x90, 0x7c, 0x85, 0x17, 0x1c, 0x71, 0xc0, 0xa0, 0x58, 0x05,
  0xc7, 0x7c, 0x82, 0x17, 0x22, 0xb8, 0xf8, 0x50, 0x2e, 0x13, 0xc7, 0xc2, 0xe4, 0xdf, 0x20, 0x45, 0x02, 0xc0, 0x2d, 0x01,
  0x72, 0x6f, 0x90, 0xa2, 0xe4, 0xe7, 0x06, 0x14, 0x0b, 0x90, 0xdc, 0x94, 0x17, 0x25, 0xb8, 0xe8, 0x50, 0x2c, 0x02, 0xe2,
  0x5e, 0x46, 0x0b, 0x94, 0x1c, 0x4c, 0x28, 0x17, 0x28, 0xb9, 0x1e, 0x2e, 0x41, 0xf2, 0x0c, 0x50, 0x2c, 0x02, 0xd0, 0x17,
  0x00, 0x0b, 0x94, 0x3c, 0x88, 0x17, 0x17, 0xf1, 0x30, 0xa0, 0x5c, 0x98, 0xe4, 0xb0, 0xb9, 0x4d, 0xca, 0x61, 0x40, 0xb0,
  0x0b, 0x95, 0x3c, 0x58, 0x2e, 0x2d, 0xe5, 0xb0, 0xa0, 0x5c, 0x9f, 0xe5, 0xa8, 0xb9, 0x75, 0xc7, 0x22, 0x81, 0x60, 0x16,
  0x80, 0xb8, 0x93, 0x85, 0x8b, 0x97, 0xdc, 0xb1, 0x17, 0x1b, 0x72, 0x90, 0x50, 0x2c, 0x02, 0xe4, 0xd7, 0x2c, 0x05, 0xc9,
  0xde, 0x4d, 0x8a, 0x05, 0xcb, 0x6e, 0x59, 0x8b, 0x95, 0x7c, 0x7a, 0x28, 0x16, 0x01, 0x68, 0x0b, 0x70, 0x5c, 0x38, 0x2e,
  0x3d, 0x38, 0xa1, 0x06, 0x24, 0xa1, 0x02, 0x04, 0x08, 0x10, 0x20, 0x41, 0x34, 0x8b, 0x48, 0x5a, 0x42, 0xd2, 0x16, 0x90,
  0xb4, 0x85, 0x96, 0x42, 0xdc, 0x16, 0xe0, 0xae, 0x81, 0x38, 0x00, 0xa8, 0x5c, 0x00, 0x2d, 0x01, 0x70, 0x00, 0xb8, 0x00,
  0x5c, 0x28, 0x81, 0x70, 0x22, 0x12, 0x28, 0x3f, 0x36, 0xa7, 0xe6, 0xd0, 0x30, 0x0c, 0x06, 0x20, 0xc4, 0x18, 0x83, 0x10,
  0x62, 0x0c, 0x41, 0x88, 0x30, 0xdc, 0x18, 0x0e, 0x02, 0x7e, 0x10, 0x07, 0x03, 0x15, 0x03, 0x21, 0xf4, 0x01, 0x45, 0x40,
  0xd8, 0x3e, 0xe0, 0x28, 0xa8, 0x1c, 0x08, 0x7e, 0x08, 0x05, 0x15, 0x03, 0x84, 0x0f, 0xc2, 0x80, 0xa2, 0xa0, 0x70, 0xe1,
  0xf8, 0x80, 0x0a, 0x2a, 0x07, 0x12, 0x0f, 0xc4, 0xc0, 0x51, 0x50, 0x38, 0xa8, 0x7e, 0x2c, 0x02, 0x8a, 0x8e, 0x17, 0x25,
  0x47, 0x0b, 0x8c, 0xc6, 0xe3, 0x23, 0xf1, 0x98, 0xa0, 0xe3, 0x71, 0xf9, 0xb6, 0x1f, 0x68, 0xa0, 0xe1, 0x62, 0x37, 0x1d,
  0x1f, 0x8e, 0xc5, 0x07, 0x1b, 0x91, 0x26, 0xe1, 0x47, 0xe1, 0x62, 0x83, 0x85, 0x88, 0xdc, 0x82, 0x3f, 0x20, 0xc5, 0x07,
  0x1b, 0x92, 0x66, 0xe2, 0x83, 0xf1, 0x48, 0xa0, 0xe1, 0x62, 0xd0, 0x10, 0x2d, 0x23, 0xf2, 0x40, 0xe3, 0x72, 0x78, 0xe3,
  0x72, 0x58, 0x50, 0x06, 0x91, 0x64, 0x3e, 0x47, 0xd2, 0x6e, 0x4d, 0x0a, 0x05, 0x80, 0x19, 0x01, 0xbc, 0x0e, 0x1a, 0x17,
  0x12, 0x0f, 0xca, 0x33, 0x8d, 0xca, 0xf3, 0x8d, 0xca, 0x91, 0x40, 0x1a, 0x45, 0x90, 0xf9, 0x1f, 0x49, 0xb9, 0x5a, 0x28,
  0x16, 0x00, 0x64, 0x06, 0xf0, 0x38, 0xe0, 0x2e, 0x3f, 0x1f, 0x96, 0xc7, 0x1f, 0x8b, 0x4d, 0xcc, 0xf8, 0xa0, 0x0d, 0x02,
  0xc4, 0x7e, 0x32, 0x3e, 0x83, 0x72, 0xfc, 0x50, 0x2c, 0x00, 0xc8, 0x0d, 0xc3, 0x73, 0x0c, 0x7e, 0x6a, 0xc5, 0x00, 0xc0,
  0x0e, 0x4b, 0x01, 0xcc, 0x90, 0x0e, 0x44, 0x83, 0x99, 0x60, 0x9c, 0xcb, 0x1f, 0x9a, 0x83, 0xf3, 0x68, 0x2e, 0x6b, 0x79,
  0xa5, 0x17, 0x35, 0xa1, 0x73, 0x57, 0xcd, 0x98, 0xb9, 0xac, 0xe6, 0xb0, 0x50, 0x29, 0xcd, 0x68, 0xa0, 0x5c, 0xd8, 0xf3,
  0x72, 0x2e, 0x6e, 0x42, 0x73, 0x58, 0x2b, 0xcd, 0x98, 0xb9, 0xb3, 0x0a, 0x85, 0x98, 0x5a, 0xf9, 0xbe, 0x16, 0x8e, 0x6c,
  0xc5, 0xcd, 0xcf, 0x36, 0x82, 0x81, 0x60, 0x17, 0x36, 0xfc, 0xdb, 0x8b, 0x80, 0x85, 0xcd, 0xcf, 0x38, 0xc2, 0x70, 0x41,
  0x50, 0xb2, 0x0b, 0x60, 0x5c, 0x23, 0x9c, 0xa1, 0x70, 0x3e, 0x6f, 0x05, 0x02, 0xe0, 0xdc, 0x18, 0x4e, 0x71, 0x85, 0xbf,
  0x9c, 0x21, 0x40, 0xb1, 0x0b, 0x85, 0x6f, 0x16, 0xee, 0x12, 0x28, 0x17, 0x39, 0x3c, 0x38, 0x5c, 0x1c, 0x20, 0x58, 0x05,
  0xa0, 0x2e, 0x02, 0x17, 0x15, 0x05, 0xc5, 0xa0, 0x38, 0xc8, 0xe0, 0xf1, 0x88, 0x1c, 0x66, 0x13, 0x9c, 0xa2, 0x73, 0xca,
  0x71, 0x79, 0xcd, 0x38, 0x34, 0x0c, 0x87, 0x24, 0xa1, 0x02, 0x04, 0x08, 0x10, 0x20, 0x41, 0x34, 0x8b, 0x48, 0x5a, 0x42,
  0xd2, 0x16, 0x90, 0xb4, 0x85, 0x96, 0x42, 0xdc, 0x16, 0xe0, 0xae, 0x81, 0x38, 0x00, 0xa8, 0x5c, 0x00, 0x2d, 0x01, 0x70,
  0x00, 0xb8, 0x00, 0x5d, 0x00, 0xe0, 0x39, 0x30, 0x27, 0x40, 0x49, 0x38, 0x61, 0xc2, 0xdf, 0xbc, 0x40, 0x81, 0x02, 0x04,
  0x0b, 0x85, 0xf1, 0x18, 0x9c, 0x46, 0x2d, 0x01, 0x68, 0x0b, 0x40, 0x5a, 0x02, 0xd0, 0x16, 0x80, 0xba, 0x06, 0xba, 0x06,
  0x85, 0xc9, 0x3e, 0x49, 0x88, 0x10, 0x20, 0x40, 0x81, 0x02, 0xe8, 0x06, 0x0b, 0x9c, 0x9e, 0x71, 0x45, 0xce, 0x58, 0xc1,
  0x73, 0x9b, 0xce, 0x39, 0x87, 0xe7, 0x34, 0x50, 0x2e, 0x71, 0xb9, 0xc2, 0x17, 0x39, 0x03, 0x05, 0xce, 0x57, 0x38, 0x86,
  0x1f, 0x9c, 0xa1, 0x40, 0xb9, 0xc3, 0xe6, 0xfc, 0x5c, 0xe2, 0x8c, 0x17, 0x38, 0xfc, 0xe0, 0x98, 0x7e, 0x71, 0xc5, 0x1b,
  0x04, 0x1b, 0x9c, 0x63, 0xf3, 0x8e, 0x28, 0x03, 0x11, 0x62, 0x16, 0xc1, 0xba, 0x05, 0x8f, 0xd0, 0x2c, 0x28, 0x30, 0xfc,
  0x00, 0xfd, 0x03, 0xa6, 0x0b, 0x9d, 0x5e, 0x76, 0x4e, 0x15, 0x01, 0xc0, 0x85, 0x98, 0x5a, 0x46, 0xe8, 0x25, 0x17, 0x3c,
  0x1c, 0xf0, 0x9c, 0x2a, 0x03, 0x84, 0x8b, 0x9d, 0xfe, 0x78, 0x0e, 0x15, 0x03, 0x48, 0x1c, 0x1c, 0x0e, 0x27, 0x1b, 0x9e,
  0xe3, 0xf3, 0xde, 0x28, 0x03, 0x11, 0x62, 0x17, 0x18, 0x8f, 0xd0, 0x6a, 0x2e, 0x04, 0x30, 0xfc, 0x68, 0x7e, 0x83, 0xc3,
  0x05, 0xcf, 0xe7, 0x40, 0x01, 0xc2, 0xa0, 0x38, 0x08, 0xb3, 0x0b, 0x48, 0xdd, 0x08, 0x82, 0xe8, 0x07, 0xe8, 0x08, 0x38,
  0x54, 0x07, 0x08, 0x17, 0x40, 0x37, 0x40, 0x39, 0xc2, 0xa0, 0x69, 0x03, 0x83, 0x01, 0xc8, 0xb1, 0xba, 0x05, 0x4f, 0xd0,
  0x2c, 0x28, 0x03, 0x11, 0x62, 0x17, 0x25, 0x47, 0xe8, 0x54, 0x17, 0x02, 0x18, 0x7e, 0x4c, 0x1f, 0xa1, 0xfc, 0xc1, 0x74,
  0x11, 0xf4, 0x13, 0x9c, 0x2a, 0x03, 0x80, 0x8b, 0x30, 0xb4, 0x8d, 0xd1, 0x0e, 0x2e, 0x82, 0xee, 0x82, 0xf3, 0x85, 0x40,
  0x70, 0x81, 0x74, 0x16, 0xf4, 0x17, 0x1c, 0x2a, 0x06, 0x90, 0x38, 0x30, 0x1c, 0xaf, 0x0b, 0xa3, 0x87, 0xa3, 0x84, 0x40,
  0x81, 0x02, 0x05, 0xd1, 0xcd, 0xd2, 0x23, 0x16, 0x41, 0x64, 0x17, 0x48, 0xab, 0xa4, 0x4c, 0x2e, 0x8c, 0x50, 0xb4, 0x85,
  0x80, 0x5a, 0x42, 0xd2, 0x07, 0x44, 0xf0, 0x4e, 0x8a, 0x01, 0x73, 0x05, 0xcf, 0x70, 0xa0, 0x1d, 0x14, 0x59, 0x9b, 0xa0,
  0xf0, 0x50, 0x92, 0x04, 0x08, 0x10, 0x20, 0x40, 0x81, 0x02, 0xe8, 0x8a, 0x01, 0xc9, 0xb0, 0x6c, 0x0b, 0x9f, 0xf1, 0xba,
  0x2d, 0x12, 0x40, 0x81, 0x02, 0x04, 0x08, 0x10, 0x20, 0xfd, 0x13, 0x02, 0x81, 0x6c, 0x03, 0xa2, 0x93, 0xa0, 0x60, 0xfd,
  0x18, 0x40, 0xe7, 0x57, 0x89, 0x44, 0xe8, 0x72, 0x17, 0x39, 0xdd, 0x18, 0xa0, 0x74, 0x16, 0x8b, 0x84, 0x74, 0x50, 0x9c,
  0x5e, 0x22, 0x17, 0x11, 0x05, 0xc4, 0x41, 0x71, 0x10, 0x5c, 0x44, 0x17, 0x11, 0x05, 0xc4, 0x41, 0x71, 0x10, 0x4e, 0x8a,
  0xb3, 0x83, 0xac, 0x0d, 0xc0, 0x70, 0x11, 0xc1, 0xe0, 0xa1, 0x74, 0x99, 0xfa, 0x4c, 0xe2, 0x04, 0x08, 0x10, 0x2c, 0x7a,
  0x47, 0xa2, 0xc4, 0x2e, 0x93, 0x77, 0x49, 0x70, 0x5d, 0x26, 0x3e, 0x93, 0x78, 0xa0, 0x5a, 0x42, 0xc4, 0x2d, 0x21, 0x69,
  0x03, 0x9f, 0x80, 0xba, 0x39, 0xc0, 0x74, 0x1c, 0x89, 0xd1, 0xd2, 0x6e, 0x88, 0x33, 0x74, 0x20, 0x1f, 0xa3, 0xb0, 0x50,
  0x2c, 0x07, 0xe8, 0xee, 0x3f, 0x41, 0xe0, 0x60, 0x18, 0x01, 0xa8, 0x0e, 0x1a, 0x07, 0x1a, 0x01, 0xc6, 0xc0, 0x72, 0x10,
  0x0e, 0x54, 0x01, 0xc9, 0x60, 0x39, 0x52, 0x07, 0x3c, 0x21, 0x74, 0x7e, 0x00, 0xa2, 0xe7, 0x94, 0x7d, 0x82, 0xe8, 0x03,
  0xe7, 0xb8, 0x5c, 0xfa, 0x85, 0xcf, 0xa8, 0x5c, 0xfa, 0x85, 0xd0, 0x0f, 0xd0, 0x28, 0x2e, 0x7e, 0x42, 0xe8, 0x16, 0xe7,
  0xd0, 0x4c, 0xc5, 0x42, 0xe7, 0xec, 0x2c, 0xc2, 0xe7, 0xec, 0x2e, 0x90, 0x60, 0x0e, 0x0e, 0x70, 0x78, 0x00, 0x1c, 0x8f,
  0x0b, 0xa4, 0x23, 0xc1, 0x0f, 0xc1, 0xc5, 0xd2, 0x12, 0x01, 0xc2, 0x85, 0xd0, 0xc2, 0x07, 0x0b, 0xe1, 0x60, 0xe1, 0x81,
  0x74, 0x86, 0x00, 0xe1, 0xf0, 0x10, 0x2e, 0x90, 0xd8, 0x0e, 0x22, 0x38, 0x0d, 0x02, 0xe9, 0x0f, 0x01, 0xc4, 0xba, 0x41,
  0xc4, 0xc0, 0x71, 0x38, 0x1c, 0x50, 0x07, 0x14, 0x81, 0xc5, 0x40, 0x71, 0x58, 0x1c, 0x58, 0x17, 0x48, 0xa0, 0x07, 0x17,
  0x83, 0x8c, 0x00, 0xd8, 0x17, 0x43, 0xc0, 0x1c, 0x65, 0x90, 0x38, 0xcc, 0x0e, 0x34, 0x03, 0x8d, 0x40, 0xe3, 0x60, 0x38,
  0xdc, 0x0e, 0x38, 0x03, 0x8e, 0x40, 0xe3, 0xa0, 0x38, 0xec, 0x0e, 0x3c, 0x0b, 0xa4, 0x70, 0x07, 0x1f, 0x40, 0x71, 0xf8,
  0x1c, 0x80, 0x03, 0x90, 0x20, 0x72, 0x08, 0x0e, 0x41, 0x81, 0xc8, 0x40, 0x39, 0x0a, 0x07, 0x21, 0x80, 0xe4, 0x38, 0x1c,
  0x88, 0x03, 0x91, 0x20, 0x72, 0x28, 0x0e, 0x45, 0x81, 0xc8, 0xc0, 0x39, 0x1a, 0x07, 0x23, 0x80, 0xe4, 0x78, 0x1c, 0x90,
  0x03, 0x92, 0x20, 0x72, 0x48, 0x0e, 0x49, 0x85, 0xd2, 0x4f, 0x03, 0x92, 0xb0, 0x1c, 0x96, 0x03, 0x92, 0xe0, 0x72, 0x60,
  0x0e, 0x4c, 0x81, 0xc9, 0xa0, 0x39, 0x36, 0x07, 0x27, 0x00, 0xe4, 0xe8, 0x1c, 0x9e, 0x03, 0x93, 0xe0, 0x72, 0x80, 0x0e,
  0x50, 0x81, 0xca, 0x20, 0x39, 0x46, 0x07, 0x29, 0x00, 0xe5, 0x28, 0x1c, 0xa6, 0x03, 0x94, 0xe0, 0x72, 0xa0, 0x0e, 0x54,
  0x81, 0xca, 0xa0, 0x39, 0x56, 0x07, 0x2b, 0x00, 0xe5, 0x68, 0x1c, 0xae, 0x03, 0x95, 0xe0, 0x72, 0xc0, 0x0e, 0x58, 0x81,
  0xcb, 0x20, 0x39, 0x66, 0x07, 0x2d, 0x00, 0xe5, 0xa8, 0x1c, 0xb6, 0x03, 0x96, 0xe0, 0x72, 0xe0, 0x0e, 0x5c, 0x81, 0xcb,
  0xa0, 0x39, 0x76, 0x07, 0x2f, 0x00, 0xe5, 0xe8, 0x1c, 0xbe, 0x03, 0x97, 0xe0, 0x73, 0x00, 0x17, 0x49, 0xf0, 0x0e, 0x60,
  0xf8, 0xbc, 0x10, 0x0e, 0x61, 0x40, 0xe3, 0x10, 0xba, 0x50, 0x20, 0x39, 0x88, 0x03, 0x95, 0x80, 0xe6, 0x28, 0x0e, 0x46,
  0x8e, 0x17, 0x4a, 0x18, 0x0e, 0x63, 0xb9, 0x1e, 0x08, 0x17, 0x46, 0xb0, 0x1c, 0xc8, 0xf2, 0xa8, 0x10, 0x0e, 0x50, 0x85,
  0xd2, 0x8d, 0x03, 0x97, 0x40, 0x72, 0xfc, 0x2e, 0x94, 0x88, 0x1c, 0xbe, 0xe5, 0xe1, 0xc2, 0xe8, 0x0d, 0x0b, 0xa2, 0x57,
  0xa2, 0x70, 0x5d, 0x12, 0xe1, 0x74, 0x52, 0x05, 0xd1, 0x38, 0x17, 0x45, 0x20, 0x5d, 0x14, 0x81, 0x3a, 0x53, 0x60, 0x73,
  0x44, 0x60, 0x9c, 0xc6, 0x0b, 0xa0, 0x27, 0xa0, 0x24, 0x1d, 0x16, 0x41, 0x3a, 0x54, 0x26, 0xe9, 0x3a, 0x9f, 0xa4, 0xec,
  0x28, 0x37, 0x49, 0xd8, 0xfd, 0x27, 0x71, 0x41, 0xba, 0x4e, 0xe7, 0xe9, 0x3c, 0x0a, 0x0d, 0xd2, 0x78, 0x3f, 0x49, 0xe4,
  0x50, 0x6e, 0x93, 0xd1, 0xfa, 0x4f, 0x62, 0x83, 0xf4, 0xa4, 0xd0, 0x60, 0xa9, 0x25, 0x12, 0x06, 0x01, 0x88, 0x37, 0x00,
  0x66, 0x0d, 0x03, 0x68, 0xdd, 0x28, 0x83, 0xf4, 0xa2, 0x45, 0x02, 0xc0, 0x92, 0x0e, 0x3e, 0x90, 0xc0, 0x32, 0x03, 0x85,
  0x8d, 0xd2, 0x8f, 0x3f, 0x4a, 0x40, 0x50, 0x2c, 0x09, 0x20, 0xe3, 0xe9, 0x0c, 0x03, 0x20, 0x38, 0xa4, 0x6e, 0x94, 0xb1,
  0xfa, 0x52, 0xe2, 0x81, 0x60, 0x49, 0x07, 0x1f, 0x48, 0x60, 0x19, 0x01, 0xc6, 0xe3, 0x74, 0xa7, 0x4f, 0xd2, 0x9e, 0x14,
  0x0b, 0x02, 0x48, 0x38, 0xfa, 0x43, 0x00, 0xc8, 0x0e, 0x42, 0x8d, 0xd2, 0xa4, 0x3f, 0x4a, 0x94, 0x50, 0x2c, 0x09, 0x20,
  0xe3, 0xe9, 0x0c, 0x03, 0x20, 0x3a, 0x50, 0xa1, 0x3a, 0x50, 0x29, 0x20, 0xe3, 0xe4, 0x18, 0x06, 0x40, 0x74, 0xa5, 0xc2,
  0x74, 0xa4, 0xcf, 0xd0, 0xac, 0x7c, 0x03, 0x00, 0xc0, 0x0e, 0x95, 0x38, 0x4e, 0x95, 0x19, 0xfa, 0x41, 0xa7, 0xc0, 0x30,
  0x0c, 0x00, 0xe5, 0x38, 0x4e, 0x98, 0x48, 0xba, 0x09, 0x3a, 0x61, 0x40, 0x60, 0x71, 0xfa, 0x43, 0xc1, 0x80, 0x64, 0x07,
  0x40, 0x00, 0x1c, 0xb3, 0x09, 0xd2, 0x5e, 0x27, 0x48, 0x94, 0xe2, 0xf4, 0xc5, 0x4e, 0x0d, 0x03, 0x20, 0x39, 0x85, 0x03,
  0x98, 0x90, 0x3a, 0x02, 0xc0, 0xe8, 0x1e, 0x09, 0xd3, 0x1d, 0x49, 0x07, 0xe5, 0x09, 0xc7, 0x1c, 0x71, 0xc2, 0x74, 0xc9,
  0x8f, 0xcc, 0x58, 0x7a, 0x19, 0x80, 0xa3, 0x05, 0xd2, 0x77, 0x14, 0x1d, 0xc0, 0x70, 0x11, 0xc1, 0xe9, 0x12, 0x81, 0xd2,
  0x28, 0x18, 0x62, 0x48, 0x2c, 0x14, 0x0a, 0x41, 0x40, 0xb1, 0xc4, 0x4c, 0x05, 0x42, 0xcf, 0x40, 0x99, 0x8a, 0x62, 0x28,
  0x16, 0x21, 0x6b, 0xd6, 0x2c, 0xb2, 0x14, 0x0b, 0x6e, 0xb1, 0x34, 0x0a, 0x85, 0x98, 0x5b, 0xb5, 0x8b, 0x80, 0x70, 0x21,
  0x6c, 0x0a, 0x85, 0xc0, 0xb8, 0x20, 0xb8, 0x27, 0x01, 0x16, 0xc0, 0xa8, 0x58, 0x85, 0xa8, 0x2e, 0x19, 0xc1, 0x85, 0xc2,
  0xb8, 0x50, 0xa0, 0x5c, 0x27, 0x87, 0x09, 0x80, 0xa8, 0x5c, 0x43, 0xc3, 0x04, 0xe1, 0x02, 0xe1, 0x9c, 0x40, 0x28, 0x16,
  0x21, 0x71, 0x3f, 0x12, 0x0b, 0x86, 0x85, 0xc2, 0xf8, 0x94, 0x50, 0x2d, 0xdc, 0x48, 0x26, 0xc1, 0x50, 0xb4, 0x05, 0xc1,
  0x02, 0xe0, 0x9a, 0x45, 0xc0, 0xb8, 0x94, 0x50, 0x2e, 0x25, 0xe1, 0x82, 0xe3, 0x3e, 0x33, 0x17, 0x1a, 0x71, 0xa8, 0xa0,
  0x58, 0x05, 0x90, 0x5c, 0x65, 0xc6, 0xa2, 0xe2, 0x3e, 0x27, 0x14, 0x0b, 0x8e, 0x33, 0x17, 0x0b, 0xe2, 0x61, 0x40, 0xb0,
  0x0b, 0x40, 0x5c, 0x7f, 0xc5, 0xc2, 0xe2, 0x5e, 0x3e, 0x14, 0x0b, 0x88, 0xb8, 0x94, 0x5c, 0x03, 0x88, 0xc5, 0x02, 0xc0,
  0x2e, 0x40, 0x72, 0x18, 0x5c, 0x5b, 0xc6, 0xc2, 0x81, 0x72, 0x03, 0x83, 0x89, 0xc7, 0x02, 0xa1, 0x66, 0x16, 0xf0, 0xb8,
  0x84, 0x7e, 0x9c, 0x39, 0xba, 0x71, 0x02, 0x81, 0x60, 0xe0, 0x41, 0xba, 0x5b, 0x42, 0xe4, 0x87, 0x1d, 0x8b, 0x8f, 0x38,
  0xf0, 0x50, 0x29, 0x05, 0x02, 0x90, 0x50, 0x29, 0x05, 0x02, 0xe4, 0x27, 0x25, 0x84, 0xd2, 0x2d, 0x01, 0x66, 0x16, 0x41,
  0x64, 0x17, 0x00, 0x0b, 0x81, 0x00, 0xe0, 0x82, 0xe5, 0x70, 0x5d, 0x2b, 0x52, 0x48, 0x41, 0x87, 0x1f, 0xa7, 0x50, 0x71,
  0xba, 0x71, 0xc2, 0x81, 0x62, 0x49, 0x07, 0xe9, 0xd7, 0x1c, 0x6e, 0x8b, 0xe3, 0xf4, 0x0b, 0x0a, 0x0c, 0x48, 0xba, 0x44,
  0x5d, 0x21, 0xd1, 0x74, 0x88, 0x82, 0xe9, 0x11, 0x01, 0x80, 0x59, 0x0f, 0xd2, 0x34, 0x14, 0x1f, 0xa6, 0x12, 0x70, 0xa8,
  0xfc, 0xd8, 0x98, 0x62, 0x05, 0x02, 0xe8, 0xeb, 0xe8, 0xe7, 0x17, 0x47, 0x58, 0x5d, 0x41, 0xa7, 0x50, 0x92, 0x27, 0x50,
  0x4c, 0x2e, 0xa1, 0x67, 0xa8, 0x46, 0x17, 0x50, 0x63, 0xd4, 0x25, 0x0a, 0x05, 0x80, 0x5d, 0x42, 0x7f, 0x50, 0xb8, 0x2e,
  0xa0, 0xdf, 0xa8, 0x42, 0x14, 0x0b, 0xa8, 0x52, 0xea, 0x07, 0xc5, 0xd4, 0x23, 0xf5, 0x07, 0xc2, 0x81, 0x60, 0x16, 0x80,
  0xba, 0x84, 0x2e, 0xa1, 0x90, 0x5d, 0x43, 0x37, 0x50, 0xb2, 0x28, 0x17, 0x50, 0xa7, 0xd4, 0x1f, 0x8b, 0xa8, 0x4d, 0xea,
  0x15, 0x85, 0x02, 0xc0, 0x2e, 0x9f, 0x97, 0x50, 0xa2, 0x2e, 0xa1, 0x17, 0xa8, 0x45, 0x14, 0x0b, 0x00, 0xb6, 0x05, 0xc2,
  0xc0, 0xe9, 0x7a, 0x04, 0xe9, 0xf1, 0x81, 0xce, 0xe9, 0xc1, 0x73, 0xb2, 0x0e, 0x77, 0x87, 0x18, 0x72, 0x4a, 0x38, 0x38,
  0x01, 0xc5, 0x61, 0x38, 0xb4, 0x5c, 0x73, 0xc7, 0x22, 0x74, 0x29, 0x83, 0x41, 0x06, 0x18, 0x2e, 0x37, 0xa6, 0xe8, 0xfd,
  0x17, 0x4b, 0xe7, 0xa5, 0xf6, 0x2e, 0x97, 0xd8, 0x5d, 0x30, 0x80, 0xba, 0x60, 0x01, 0x74, 0xc2, 0x02, 0xe9, 0x84, 0x04,
  0xe9, 0xff, 0x81, 0xd2, 0x06, 0x06, 0x90, 0xba, 0x5e, 0xdd, 0x30, 0x21, 0x74, 0xbd, 0x82, 0xe9, 0x7b, 0x05, 0xd2, 0xf6,
  0x0b, 0xa5, 0xec, 0x17, 0x4b, 0xd8, 0x27, 0x50, 0x10, 0x07, 0x48, 0x3c, 0x1d, 0x1f, 0x01, 0x6a, 0x0b, 0xa8, 0x0b, 0x18,
  0x7e, 0x0c, 0x2e, 0x49, 0x74, 0xa2, 0x00, 0xe9, 0x0b, 0x0a, 0x85, 0xd3, 0x12, 0xe9, 0x06, 0x0b, 0xa6, 0x28, 0x17, 0x4c,
  0x84, 0x2e, 0x98, 0xc8, 0x5d, 0x32, 0x10, 0xba, 0x64, 0x21, 0x3a, 0x81, 0x80, 0x3a, 0x43, 0xe0, 0xe9, 0x04, 0x05, 0xd4,
  0x0d, 0x0e, 0x16, 0xc0, 0xba, 0x64, 0xdd, 0x32, 0xe1, 0x74, 0xc7, 0xc2, 0xe9, 0x90, 0x85, 0xd3, 0x2e, 0x0b, 0xa6, 0x4c,
  0x17, 0x4c, 0xb8, 0x2e, 0x99, 0x70, 0x4e, 0xa0, 0x94, 0x0e, 0x91, 0x61, 0xc2, 0xea, 0x09, 0xc0, 0x74, 0x86, 0x4c, 0x3f,
  0x4d, 0xdc, 0x5d, 0x33, 0x4e, 0x98, 0xd0, 0xba, 0x65, 0xa1, 0x74, 0xcb, 0xc2, 0xe9, 0x9e, 0x05, 0xd3, 0x34, 0x0b, 0xa6,
  0x78, 0x17, 0x4c, 0xf0, 0x27, 0x50, 0x66, 0x07, 0x48, 0xe8, 0xe1, 0x75, 0x06, 0xa0, 0x3a, 0x44, 0xe6, 0x0b, 0x9b, 0x10,
  0x1d, 0x24, 0x01, 0x70, 0x00, 0x1d, 0x22, 0xc1, 0x70, 0x30, 0x38, 0x84, 0x0e, 0x32, 0x1b, 0xa7, 0x18, 0x7e, 0xa1, 0x04,
  0x50, 0x0e, 0x92, 0x4f, 0x1d, 0x02, 0x05, 0x90, 0xe4, 0x81, 0xc9, 0x63, 0x83, 0x80, 0x1c, 0x94, 0x0b, 0x93, 0x03, 0xec,
  0x37, 0x50, 0x64, 0x60, 0x94, 0xdd, 0x42, 0x81, 0xfa, 0x4a, 0xe2, 0x80, 0x3a, 0x4b, 0x47, 0xe9, 0x2c, 0x0b, 0x83, 0x00,
  0xe9, 0x2e, 0x8b, 0x00, 0x34, 0x8d, 0xc2, 0x45, 0x07, 0xdc, 0x28, 0x41, 0xb9, 0x9f, 0x12, 0x1b, 0xa3, 0x10, 0xc3, 0xf5,
  0x0c, 0x46, 0xe2, 0x30, 0x3a, 0x4d, 0x42, 0xa0, 0x3a, 0x4d, 0xa2, 0xc8, 0x07, 0x49, 0x64, 0xdc, 0xdc, 0x18, 0x7e, 0x9d,
  0xc0, 0x34, 0xf4, 0x9c, 0x05, 0x00, 0x74, 0x9d, 0x45, 0x88, 0x0e, 0x93, 0x09, 0xb9, 0x7c, 0x28, 0x16, 0xb1, 0xba, 0x19,
  0x90, 0x28, 0x37, 0x50, 0xf0, 0x7e, 0x38, 0x38, 0x54, 0x07, 0x4a, 0x08, 0x58, 0x8d, 0xd2, 0x83, 0x3f, 0x17, 0x1c, 0x2a,
  0x03, 0xa5, 0x10, 0x6e, 0xa2, 0x0c, 0xfc, 0x84, 0x14, 0x1c, 0x2c, 0x42, 0xd6, 0x37, 0x50, 0xda, 0x6e, 0x8e, 0xd0, 0x3a,
  0x51, 0xc2, 0x73, 0xa2, 0x7e, 0xa1, 0xc4, 0xe1, 0x50, 0xb3, 0x1b, 0xa8, 0x90, 0x3f, 0x2e, 0x45, 0xd4, 0x49, 0x00, 0xe9,
  0x42, 0x18, 0x7e, 0x67, 0x85, 0x00, 0x74, 0xa2, 0x04, 0xe8, 0x0b, 0x17, 0x40, 0x8f, 0x2b, 0xc0, 0xe9, 0x50, 0x8b, 0xa0,
  0x50, 0x2c, 0x06, 0xe9, 0x00, 0x8b, 0xa0, 0x44, 0x07, 0x4a, 0x40, 0x5d, 0x03, 0x20, 0x3a, 0x55, 0x02, 0xe5, 0xc0, 0x0e,
  0x94, 0xa0, 0xba, 0x07, 0x00, 0xd2, 0x38, 0xdd, 0x3f, 0x41, 0x40, 0xb8, 0x48, 0x1c, 0x2c, 0x0e, 0x24, 0x1c, 0x6e, 0x89,
  0xf3, 0xf3, 0x76, 0x28, 0x17, 0x48, 0x4b, 0x9b, 0xf0, 0x72, 0xac, 0x71, 0xf9, 0xab, 0x30, 0x4e, 0x55, 0x9c, 0x1c, 0x40,
  0xd2, 0x38, 0xe0, 0xef, 0x03, 0x90, 0xc0, 0x72, 0x28, 0x72, 0x40, 0xe9, 0x11, 0x1f, 0xa5, 0x9e, 0x2e, 0x81, 0x20, 0x3a,
  0x8c, 0x2e, 0x80, 0xc1, 0x41, 0xc2, 0xc8, 0x70, 0x75, 0x01, 0xca, 0xa0, 0xb9, 0x5a, 0x3f, 0x22, 0x4d, 0xcb, 0xf3, 0x0f,
  0xcc, 0x09, 0xc2, 0xa1, 0x64, 0x3f, 0x12, 0x1f, 0xa8, 0xb8, 0x30, 0x54, 0x2c, 0x40, 0xda, 0x41, 0x82, 0xe0, 0x39, 0x9b,
  0x93, 0x26, 0xe2, 0xe3, 0xf5, 0x18, 0x42, 0x80, 0x34, 0x0b, 0x10, 0x33, 0x1c, 0x2d, 0x43, 0x75, 0x1c, 0xa7, 0x1b, 0x71,
  0xf7, 0x1c, 0x2a, 0x16, 0x23, 0xf3, 0x1c, 0x71, 0xc2, 0xc0, 0x0d, 0x80, 0x70, 0x92, 0x0c, 0x07, 0x05, 0xa2, 0xe1, 0x20,
  0x70, 0xb1, 0xc2, 0xc4, 0x6e, 0xa3, 0xe4, 0xe3, 0x69, 0x3e, 0x93, 0x85, 0x42, 0xc4, 0x7e, 0x67, 0x0e, 0x38, 0x58, 0x01,
  0xb0, 0x0e, 0x08, 0x07, 0x35, 0x21, 0x73, 0x74, 0x37, 0x52, 0x10, 0x7e, 0xa4, 0x24, 0xe1, 0x50, 0x1d, 0x31, 0x23, 0x75,
  0x21, 0xa6, 0xe1, 0x87, 0x0a, 0x8f, 0xc3, 0xce, 0x48, 0x1d, 0x0b, 0x82, 0xa3, 0x75, 0x22, 0xc6, 0x1b, 0x8f, 0xce, 0x30,
  0x58, 0x0f, 0xc8, 0x33, 0x8c, 0x3f, 0x52, 0x3e, 0x28, 0x37, 0x52, 0x0a, 0x71, 0x86, 0xea, 0x49, 0x0c, 0x3f, 0x52, 0x4c,
  0x28, 0x03, 0xa6, 0x5c, 0x2c, 0x87, 0xea, 0x43, 0x8e, 0x30, 0x4c, 0xc5, 0xcf, 0x07, 0x3d, 0xa0, 0x73, 0xae, 0x0a, 0x16,
  0x81, 0xa8, 0x9c, 0x9f, 0x13, 0x9d, 0x00, 0x60, 0x07, 0x06, 0x0b, 0x86, 0x0f, 0xc9, 0xf3, 0x0d, 0xd4, 0x9d, 0x18, 0x7e,
  0xa4, 0xf0, 0xe1, 0x50, 0x1d, 0x34, 0x51, 0x66, 0x03, 0x62, 0x0c, 0x38, 0x58, 0x0d, 0x4f, 0x88, 0xa0, 0xdb, 0x45, 0x00,
  0xc8, 0x0e, 0x0a, 0x07, 0x1c, 0x05, 0xc7, 0xc3, 0xf2, 0x74, 0xc3, 0x75, 0x2a, 0x26, 0x1f, 0xa9, 0x53, 0x38, 0x54, 0x07,
  0x4d, 0x70, 0x59, 0x80, 0xd8, 0x83, 0x0e, 0x16, 0x03, 0x53, 0xe2, 0x28, 0x06, 0x00, 0x70, 0x31, 0x87, 0x0b, 0x93, 0x00,
  0x72, 0x78, 0x0e, 0x81, 0xa0, 0x3a, 0x1c, 0x47, 0xea, 0x5a, 0x0c, 0x37, 0x4a, 0xf0, 0xc3, 0x0c, 0x30, 0xc1, 0x3a, 0x97,
  0x01, 0x75, 0x2e, 0x3d, 0x11, 0xe0, 0xea, 0x30, 0xfa, 0x8c, 0x70, 0x41, 0xc1, 0xe9, 0xd9, 0x81, 0x90, 0x5d, 0x4a, 0xcf,
  0x52, 0xb2, 0x61, 0x82, 0xe9, 0x5e, 0x74, 0xb2, 0xc5, 0x06, 0x1b, 0xa5, 0x7c, 0x7e, 0x96, 0x80, 0xa0, 0xf9, 0x0a, 0x05,
  0x90, 0xc3, 0x74, 0x99, 0x0f, 0xc2, 0xc5, 0x06, 0xda, 0x70, 0xa8, 0xfa, 0x45, 0x02, 0xd2, 0x30, 0xdd, 0x26, 0xd3, 0xf1,
  0x20, 0xa0, 0xda, 0x8e, 0x15, 0x1b, 0x81, 0x9c, 0x2a, 0x3e, 0xc1, 0x40, 0xb6, 0x0c, 0x37, 0x49, 0xe4, 0xfc, 0x60, 0x28,
  0x36, 0xd3, 0x85, 0x46, 0xda, 0x70, 0xa8, 0xdc, 0x24, 0xe1, 0x51, 0xf7, 0x8a, 0x05, 0xbc, 0x61, 0xba, 0x51, 0x07, 0xe3,
  0xf1, 0x41, 0xb8, 0x01, 0xc2, 0xa3, 0x70, 0x03, 0x85, 0x46, 0xe0, 0x07, 0x0a, 0x8d, 0xc3, 0xce, 0x15, 0x1f, 0x81, 0x0a,
  0x05, 0xc0, 0x86, 0x1b, 0xa5, 0x34, 0x7e, 0x48, 0x8a, 0x0d, 0xc0, 0xce, 0x15, 0x1b, 0x81, 0x9c, 0x2a, 0x37, 0x03, 0x38,
  0x54, 0x6e, 0x06, 0x70, 0xa8, 0xdc, 0x4a, 0x70, 0xa8, 0xfc, 0x14, 0x50, 0x2e, 0x0a, 0x17, 0x4a, 0xb8, 0x4e, 0xa3, 0x98,
  0x5d, 0x4e, 0xa8, 0xe3, 0xf4, 0xc0, 0x8e, 0x38, 0xe1, 0x75, 0x3b, 0x63, 0x75, 0x3b, 0x82, 0xe5, 0x37, 0x29, 0x84, 0x08,
  0x10, 0x20, 0x41, 0x86, 0x1b, 0x03, 0x0d, 0x99, 0x86, 0xd4, 0x61, 0xb6, 0x98, 0x6e, 0x00, 0x60, 0x9d, 0x4d, 0xf8, 0xb0,
  0x0b, 0x30, 0xb5, 0x05, 0xb4, 0x2e, 0x00, 0x38, 0x5c, 0x28, 0x07, 0x30, 0xa5, 0xea, 0x72, 0x0e, 0x15, 0x03, 0x88, 0x07,
  0x07, 0x89, 0xc0, 0xe2, 0xb1, 0x88, 0x38, 0x54, 0x6e, 0xa8, 0x0c, 0xc3, 0xe2, 0x6c, 0x45, 0x02, 0xc0, 0x0c, 0xc0, 0xd8,
  0x31, 0x07, 0x0a, 0x8d, 0xd5, 0x07, 0x98, 0x7c, 0x4d, 0x88, 0xa0, 0x58, 0x01, 0x98, 0x1b, 0x06, 0x20, 0xe1, 0x51, 0xba,
  0xa1, 0xb3, 0x0f, 0x89, 0xb1, 0x14, 0x0b, 0x00, 0x33, 0x03, 0x60, 0xc4, 0x1c, 0x2a, 0x37, 0x54, 0x4e, 0x61, 0xf1, 0x36,
  0x22, 0x81, 0x60, 0x06, 0x60, 0x6c, 0x18, 0x83, 0x85, 0x46, 0xea, 0x8c, 0xcc, 0x3e, 0x26, 0xc4, 0x50, 0x2c, 0x00, 0xcc,
  0x0d, 0x83, 0x10, 0x70, 0xa8, 0xdd, 0x51, 0xf9, 0x87, 0xc4, 0xd8, 0x8a, 0x05, 0x80, 0x19, 0x81, 0xb0, 0x62, 0x0e, 0x15,
  0x1b, 0xaa, 0x4b, 0x30, 0xf8, 0x9b, 0x11, 0x40, 0xb0, 0x03, 0x30, 0x36, 0x0c, 0x41, 0xc2, 0xa3, 0x75, 0x4a, 0xe6, 0x1f,
  0x13, 0x62, 0x28, 0x16, 0x00, 0x66, 0x06, 0xc2, 0x0e, 0x05, 0x03, 0x9e, 0xc0, 0x39, 0xfa, 0x1f, 0xaa, 0x64, 0x27, 0x52,
  0xee, 0x2e, 0x65, 0x07, 0x1f, 0xa6, 0xfa, 0x70, 0xb9, 0x98, 0x1b, 0xaa, 0x6b, 0x37, 0x31, 0x06, 0x1b, 0x98, 0x83, 0x0d,
  0xcc, 0x41, 0x86, 0xe6, 0x20, 0xc1, 0x3a, 0xa4, 0x81, 0x60, 0x16, 0x61, 0x6a, 0x01, 0xcd, 0x31, 0xc2, 0xde, 0x03, 0xa0,
  0x24, 0xbd, 0x52, 0x81, 0xc2, 0xa0, 0x70, 0x51, 0xc1, 0xe1, 0x40, 0x74, 0xd7, 0x06, 0x20, 0xe1, 0x51, 0xba, 0xa8, 0x73,
  0x0f, 0x89, 0xb1, 0x14, 0x0b, 0x00, 0x33, 0x03, 0x60, 0xc4, 0x1c, 0x2a, 0x37, 0x55, 0x26, 0x61, 0xf1, 0x36, 0x22, 0x81,
  0x60, 0x06, 0x60, 0x6c, 0x18, 0x83, 0x85, 0x46, 0xea, 0xa7, 0xcc, 0x3e, 0x26, 0xc4, 0x50, 0x2c, 0x00, 0xcc, 0x0d, 0x83,
  0x10, 0x70, 0xa8, 0xdd, 0x55, 0x59, 0x87, 0xc4, 0xd8, 0x8a, 0x05, 0x80, 0x19, 0x81, 0xb0, 0x62, 0x0e, 0x15, 0x1b, 0xaa,
  0xb7, 0x30, 0xf8, 0x9b, 0x11, 0x40, 0xb0, 0x03, 0x30, 0x36, 0x0c, 0x41, 0xc2, 0xa3, 0x75, 0x58, 0x66, 0x1f, 0x13, 0x62,
  0x28, 0x16, 0x00, 0x66, 0x06, 0xc1, 0x88, 0x38, 0x54, 0x6e, 0xab, 0x3c, 0xc3, 0xe2, 0x6c, 0x45, 0x02, 0xc0, 0x0c, 0xc0,
  0xd8, 0x31, 0x07, 0x0a, 0x8d, 0xd5, 0x6d, 0x98, 0x7c, 0x4d, 0x88, 0xa0, 0x58, 0x01, 0x98, 0x1b, 0x08, 0x38, 0x14, 0x0e,
  0x87, 0x00, 0x39, 0x83, 0x0b, 0x98, 0x50, 0xba, 0x20, 0x82, 0xe9, 0x7b, 0x8d, 0xd5, 0x75, 0x98, 0x71, 0xba, 0x5f, 0x48,
  0x30, 0xfc, 0xce, 0x98, 0x71, 0xf8, 0x61, 0xc7, 0x0b, 0x00, 0xb4, 0x0e, 0x16, 0xc1, 0xba, 0x60, 0xe6, 0xda, 0x7e, 0x6d,
  0x4c, 0x38, 0xfc, 0x68, 0x71, 0xc2, 0xc0, 0x2d, 0x03, 0x85, 0xac, 0x6e, 0x98, 0x99, 0xb8, 0x49, 0xf9, 0xcd, 0x30, 0xe3,
  0xf2, 0x30, 0xe3, 0x85, 0x80, 0x5a, 0x07, 0x0b, 0x58, 0xdd, 0x31, 0xf3, 0x71, 0x29, 0xf9, 0xe5, 0x30, 0xe3, 0xf2, 0x90,
  0xe3, 0x85, 0x80, 0x5a, 0x07, 0x0b, 0x58, 0xdd, 0x32, 0xb3, 0x71, 0x89, 0xf9, 0xfd, 0x30, 0xe3, 0xf2, 0xf0, 0xe3, 0x85,
  0x80, 0x5a, 0x07, 0x0b, 0x58, 0xdd, 0x33, 0x73, 0x71, 0xe9, 0xfa, 0x05, 0x4c, 0x38, 0xfc, 0xca, 0x1c, 0x70, 0xb0, 0x0b,
  0x40, 0xe1, 0x6b, 0x1b, 0xa6, 0x86, 0x6e, 0x44, 0x9f, 0xa0, 0xb4, 0xc3, 0x8f, 0xcd, 0x61, 0xc7, 0x0b, 0x00, 0xb4, 0x0e,
  0x16, 0xb1, 0xba, 0x69, 0xe6, 0xe4, 0xa9, 0xfa, 0x11, 0x4c, 0x38, 0xfc, 0xe2, 0x1c, 0x70, 0xb0, 0x0b, 0x40, 0xe1, 0x6b,
  0x1f, 0x9c, 0xb3, 0x8e, 0x37, 0x42, 0x91, 0xc7, 0x1b, 0xa6, 0x14, 0x83, 0x8c, 0x38, 0x58, 0x85, 0x98, 0xdd, 0x36, 0x83,
  0x8f, 0x0d, 0xd5, 0x97, 0x9f, 0x51, 0xc2, 0xa3, 0x75, 0x16, 0xa6, 0xea, 0x29, 0x8d, 0xd5, 0x95, 0x9f, 0x80, 0x0a, 0x05,
  0x80, 0x59, 0x0d, 0xd5, 0x9a, 0x1c, 0x6e, 0xac, 0xe0, 0xe3, 0x75, 0x6a, 0x07, 0xe1, 0x27, 0x0a, 0x8d, 0xd2, 0x19, 0x38,
  0xfd, 0x21, 0xb3, 0x83, 0x40, 0xc8, 0x2d, 0x63, 0x74, 0x8d, 0xce, 0x3f, 0x48, 0xe4, 0xe0, 0xd0, 0x32, 0x0b, 0x82, 0x0f,
  0xd2, 0x5f, 0x3f, 0x49, 0x5c, 0x30, 0x0c, 0x07, 0x07, 0x80, 0x70, 0x20, 0x70, 0x50, 0xb8, 0x50, 0x3b, 0x37, 0x02, 0x05,
  0xc3, 0xc7, 0xe9, 0xec, 0x1c, 0x6e, 0x9e, 0xd1, 0xc1, 0xa0, 0x64, 0x38, 0x3b, 0x80, 0xe2, 0xa0, 0x38, 0xc8, 0x2e, 0x37,
  0x03, 0xa5, 0x99, 0xd2, 0xe7, 0x04, 0x07, 0x8e, 0xc0, 0xe3, 0xe1, 0xb9, 0xaf, 0x38, 0x54, 0x2e, 0x46, 0x0f, 0xd3, 0xa9,
  0x3f, 0x4e, 0xa8, 0xdd, 0x3a, 0xe1, 0x75, 0x82, 0xae, 0xaf, 0x9c, 0x4e, 0xb0, 0x10, 0x2e, 0xb0, 0x47, 0xd6, 0x08, 0xc5,
  0xd6, 0x0b, 0x7a, 0xc0, 0x58, 0xa0, 0x58, 0x05, 0xd6, 0x0d, 0xba, 0xbe, 0xd1, 0x3a, 0x7b, 0xe2, 0xeb, 0x02, 0xdd, 0x60,
  0x58, 0x5d, 0x60, 0xb3, 0xac, 0x13, 0x8a, 0x05, 0x80, 0x59, 0x85, 0xd6, 0x0a, 0x7a, 0xc1, 0x48, 0x9d, 0x3d, 0xf1, 0x75,
  0x83, 0x0e, 0xb0, 0x66, 0x2e, 0xaf, 0xdf, 0xac, 0x16, 0x0a, 0x05, 0x80, 0x5d, 0x60, 0xa3, 0xac, 0x1e, 0x8b, 0xac, 0x06,
  0x05, 0xd6, 0x01, 0x7a, 0xc1, 0x18, 0xba, 0xc0, 0x37, 0x58, 0x40, 0x14, 0x0b, 0x00, 0xb3, 0x0b, 0x70, 0x5d, 0x60, 0x2f,
  0xac, 0x1f, 0x8b, 0xac, 0x01, 0xf5, 0x82, 0xa1, 0x40, 0xba, 0x9e, 0x0e, 0xb0, 0x56, 0x28, 0x17, 0x58, 0x44, 0xeb, 0x0a,
  0x22, 0x75, 0x81, 0x91, 0x75, 0x84, 0x6e, 0xb0, 0x6e, 0x2e, 0xb0, 0xa9, 0xd6, 0x02, 0x85, 0x02, 0xc0, 0x2c, 0xc2, 0xeb,
  0x0a, 0xfd, 0x61, 0x2c, 0x5d, 0x60, 0x38, 0x2e, 0xb0, 0x7d, 0xd6, 0x15, 0x85, 0xd6, 0x11, 0xba, 0xc1, 0xc0, 0xa0, 0x58,
  0x05, 0xd6, 0x16, 0xba, 0xc2, 0x70, 0xba, 0xc2, 0xf7, 0x58, 0x43, 0x14, 0x0b, 0xac, 0x2e, 0xf5, 0x85, 0xa1, 0x3a, 0xbe,
  0x21, 0x50, 0xb3, 0x0b, 0x70, 0x5c, 0x2c, 0x2e, 0xb0, 0x9b, 0xd6, 0x16, 0x45, 0xd4, 0x05, 0x05, 0xd6, 0x1a, 0x7a, 0xc2,
  0xd8, 0xba, 0xc3, 0x1f, 0x58, 0x63, 0x14, 0x0b, 0x00, 0xba, 0xc2, 0x6f, 0x58, 0x15, 0x17, 0x58, 0x5b, 0xeb, 0x08, 0xe2,
  0xeb, 0x0b, 0xfd, 0x61, 0x68, 0x50, 0x2c, 0x02, 0xc8, 0x2e, 0xb0, 0xbd, 0xd6, 0x1c, 0xc4, 0xeb, 0x00, 0xa2, 0xeb, 0x0e,
  0x9d, 0x61, 0x48, 0x4e, 0xa8, 0x1c, 0x54, 0x2e, 0xb0, 0x6f, 0xd6, 0x13, 0xc5, 0xd6, 0x1d, 0x7a, 0xc3, 0xa8, 0xa0, 0x5d,
  0x61, 0xb7, 0xac, 0x2f, 0x8b, 0xac, 0x11, 0x05, 0x42, 0xcc, 0x2d, 0xa1, 0x75, 0x87, 0xfe, 0xb1, 0x00, 0x27, 0x10, 0x0b,
  0xac, 0x2f, 0xf5, 0x85, 0xb1, 0x3a, 0x82, 0x51, 0x50, 0xba, 0xc1, 0xe7, 0x58, 0x2e, 0x17, 0x58, 0x71, 0xeb, 0x0b, 0xe2,
  0x75, 0x82, 0x71, 0x50, 0xb1, 0x0b, 0xac, 0x20, 0x75, 0x87, 0x71, 0x75, 0x86, 0x4e, 0xb1, 0x08, 0x28, 0x17, 0x58, 0x71,
  0xeb, 0x11, 0x82, 0xeb, 0x02, 0x81, 0x50, 0xba, 0xc4, 0x67, 0x58, 0x4f, 0x17, 0x0c, 0x0b, 0xac, 0x49, 0x75, 0x86, 0xb1,
  0x75, 0x87, 0x0e, 0xb0, 0xee, 0x28, 0x16, 0x01, 0x66, 0x16, 0xe0, 0xb8, 0x48, 0x5c, 0x66, 0x03, 0xa8, 0x57, 0x13, 0xa8,
  0x53, 0x30, 0x3c, 0xad, 0x03, 0xab, 0xee, 0x18, 0x2e, 0xaf, 0x68, 0x7e, 0x9e, 0x30, 0x3a, 0x79, 0x7a, 0x45, 0xd3, 0xc8,
  0x01, 0xcb, 0xe3, 0x83, 0x88, 0x19, 0x8c, 0x17, 0x57, 0xbe, 0x37, 0x57, 0xc8, 0x6e, 0xaf, 0x9c, 0xfd, 0x41, 0x40, 0xa0,
  0x0d, 0x02, 0xc4, 0x06, 0xa0, 0x68, 0x18, 0x2e, 0xaf, 0x94, 0x6e, 0xaf, 0xa8, 0xdd, 0x5f, 0x91, 0xfa, 0x83, 0x21, 0x40,
  0x1a, 0x05, 0x88, 0x0d, 0x40, 0xd0, 0x30, 0x5d, 0x5f, 0x58, 0xdd, 0x5f, 0x81, 0xba, 0xbf, 0xe3, 0xf5, 0x07, 0x82, 0x80,
  0x34, 0x0b, 0x10, 0x1a, 0x81, 0xa0, 0x2e, 0xaa, 0xbf, 0xa8, 0x79, 0x03, 0xaa, 0x1e, 0x17, 0x51, 0x12, 0x07, 0x54, 0x7f,
  0xd5, 0x11, 0x82, 0x05, 0xd5, 0x5a, 0x00, 0xea, 0x90, 0x81, 0xd4, 0xd6, 0x01, 0xd3, 0xfd, 0x0b, 0xa7, 0xe2, 0x03, 0xa7,
  0xd0, 0x0d, 0x83, 0x0f, 0xd2, 0xdb, 0x14, 0x01, 0xd3, 0xed, 0x17, 0x34, 0xe0, 0x39, 0xb1, 0x0f, 0x35, 0x40, 0x73, 0x58,
  0x07, 0x3f, 0x83, 0x74, 0x92, 0xcc, 0x38, 0xdd, 0x19, 0x47, 0x1c, 0x2c, 0x02, 0xe8, 0x0e, 0x1c, 0x2d, 0x40, 0x36, 0x03,
  0xa0, 0x50, 0x6e, 0x92, 0x59, 0x87, 0x1b, 0xa3, 0x28, 0xe3, 0x85, 0x80, 0x5d, 0x04, 0xc3, 0x85, 0xa8, 0x06, 0xc0, 0x74,
  0x16, 0x0d, 0xd2, 0x4b, 0x30, 0xe3, 0x74, 0x65, 0x1c, 0x70, 0xb0, 0x0b, 0xa0, 0xf8, 0x70, 0xb5, 0x00, 0xd8, 0x0e, 0x84,
  0x41, 0xba, 0x49, 0x66, 0x1c, 0x6e, 0x8c, 0xa3, 0x8e, 0x16, 0x01, 0x74, 0x2b, 0x0e, 0x16, 0xa0, 0x1b, 0x01, 0xd0, 0xb8,
  0x37, 0x49, 0x2c, 0xc3, 0x8d, 0xd1, 0x94, 0x71, 0xc2, 0xc0, 0x2e, 0x86, 0xe1, 0xc2, 0xd4, 0x03, 0x60, 0x3a, 0x1d, 0x06,
  0xe9, 0x25, 0x98, 0x71, 0xba, 0x32, 0x8e, 0x38, 0x58, 0x05, 0xd1, 0x0c, 0x38, 0x5a, 0x80, 0x6c, 0x07, 0x44, 0x60, 0xdd,
  0x24, 0xb3, 0x0e, 0x37, 0x46, 0x51, 0xc7, 0x0b, 0x00, 0xba, 0x27, 0x87, 0x0b, 0x50, 0x0d, 0x80, 0xe8, 0xa4, 0x1b, 0xa4,
  0x96, 0x61, 0xc6, 0xe8, 0xca, 0x38, 0xe1, 0x60, 0x17, 0x45, 0xb0, 0xe1, 0x6a, 0x01, 0xb0, 0x5d, 0x17, 0xa1, 0x75, 0x05,
  0x1d, 0x41, 0x90, 0x1d, 0x55, 0x90, 0xba, 0x7b, 0xc0, 0x60, 0x07, 0x46, 0x28, 0xe0, 0x75, 0x78, 0x7d, 0x45, 0xf8, 0xba,
  0x33, 0x06, 0xe0, 0x26, 0xe8, 0xc0, 0x3f, 0x51, 0x82, 0x28, 0x37, 0x10, 0x9b, 0xa2, 0xe0, 0xfd, 0x46, 0x28, 0xa0, 0xdc,
  0x62, 0x6e, 0x8b, 0x03, 0xf5, 0x19, 0x22, 0x83, 0x72, 0x04, 0xdd, 0x15, 0x07, 0xea, 0x33, 0x45, 0x06, 0xe4, 0x89, 0xba,
  0x28, 0x0f, 0xd4, 0x68, 0x8a, 0x0d, 0xca, 0x13, 0x74, 0x4c, 0x1f, 0xa8, 0xd5, 0x14, 0x1b, 0x96, 0x26, 0xe8, 0x90, 0x3f,
  0x51, 0xb2, 0x28, 0x37, 0x30, 0x26, 0xe8, 0x88, 0x3f, 0x51, 0xba, 0x28, 0x3f, 0x51, 0x10, 0x6e, 0x64, 0xc5, 0x00, 0x74,
  0x20, 0x07, 0x9c, 0x60, 0x32, 0x0b, 0x50, 0x0a, 0x0d, 0xa1, 0x70, 0x10, 0x14, 0x1c, 0x10, 0x2e, 0x10, 0x02, 0x83, 0x85,
  0x85, 0xc3, 0xc0, 0x50, 0x71, 0x10, 0x5c, 0x4c, 0x02, 0x83, 0x8a, 0x42, 0xe2, 0xd0, 0x14, 0x1c, 0x60, 0x17, 0x1a, 0x00,
  0xa0, 0xe3, 0x70, 0xb8, 0xec, 0x05, 0x07, 0x1f, 0x0e, 0x38, 0x3c, 0x83, 0x03, 0xa9, 0x04, 0x03, 0xa9, 0x36, 0x0b, 0xa9,
  0x46, 0x1f, 0xa8, 0x96, 0x3f, 0x51, 0x4c, 0x27, 0x50, 0xec, 0x07, 0x56, 0x00, 0x2c, 0x00, 0x75, 0x3d, 0x88, 0x14, 0x24,
  0x83, 0x85, 0xd4, 0xa1, 0x75, 0x17, 0x60, 0x75, 0x8e, 0x01, 0x3a, 0x91, 0x02, 0x75, 0x17, 0xc7, 0x0b, 0xa9, 0xed, 0xeb,
  0x03, 0x26, 0xeb, 0x33, 0x46, 0xeb, 0x03, 0x41, 0x80, 0x60, 0x07, 0x56, 0x24, 0x07, 0x51, 0x96, 0x38, 0x3a, 0x40, 0xd8,
  0x38, 0xe0, 0xf0, 0x20, 0x38, 0x30, 0x1c, 0x3c, 0x1e, 0xa5, 0xa0, 0x0e, 0xa5, 0xac, 0x1e, 0xa5, 0xd0, 0x0e, 0xa5, 0xdc,
  0x27, 0x53, 0xcc, 0xce, 0x88, 0x67, 0x39, 0x0b, 0x3c, 0xff, 0xed, 0xf1, 0xa6, 0x7f, 0x35, 0xf4, 0xe6, 0xe6, 0x9c, 0x39,
  0x21, 0x0d, 0x09, 0xfd, 0xdb, 0x91, 0x89, 0xa1, 0x4c, 0x22, 0x5a, 0x77, 0xe6, 0xc2, 0x62, 0xe1, 0x75, 0x4c, 0xe0, 0xa0,
  0x75, 0x91, 0xf7, 0xa4, 0x01, 0xf2, 0x61, 0x14, 0x03, 0x24, 0xb1, 0x86, 0x20, 0x92, 0x68, 0x9f, 0x0b, 0xf1, 0x3a, 0xa4,
  0x53, 0x6a, 0x63, 0x90, 0x8b, 0x06, 0xdf, 0x33, 0x61, 0x0c, 0x03, 0xe2, 0x27, 0x79, 0xc0, 0x6d, 0xf3, 0x2b, 0x4a, 0xf3,
  0xb5, 0x2b, 0x3f, 0x4e, 0x73, 0xf9, 0xc7, 0x3d, 0x17, 0xa2, 0xdf, 0xd9, 0x6b, 0x9b, 0x9f, 0x2e, 0x0c, 0x16, 0x58, 0xe7,
  0x9b, 0xcc, 0x1d, 0x0f, 0x57, 0x94, 0x35, 0x4b, 0xb2
};
const size_t sizeof_schnorr6 = sizeof(schnorr6);

/* The commitment Merkle root of the above schnorr6 Simplicity expression. */
const uint32_t schnorr6_cmr[] = {
  0xab8974afu, 0x8501a819u, 0xd46ad8a4u, 0x632833a1u, 0x9749d17cu, 0x05021a9au, 0x6d4b633fu, 0x7d4beb73u
};

/* The annotated Merkle root of the above schnorr6 Simplicity expression. */
const uint32_t schnorr6_amr[] = {
  0x7a726368u, 0x4cfdd4b6u, 0x93149851u, 0xd4f00023u, 0x880125aeu, 0x4c354269u, 0x1d48db48u, 0x20b892c9u
};
