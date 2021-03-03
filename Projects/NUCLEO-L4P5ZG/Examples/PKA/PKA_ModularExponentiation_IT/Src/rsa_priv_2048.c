/**
  ******************************************************************************
  * @file    PKA/PKA_ModularExponentiation_IT/Src/rsa_priv_2048.c
  * @author  MCD Application Team
  * @brief   This file contains buffers reflecting the content of the file
  *          rsa_priv_2048.pem provided as an example of private key to 
  *          demonstrate functionality of PKA.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics. 
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the 
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
  
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* 
This file reflect the content of rsa_priv_2048.pem

rsa_priv_2048.pem has been created using openssl 1.0.2k  26 Jan 2017:
  openssl genrsa -out rsa_priv_2048.pem 2048
  
Buffer have been adapted from the output of the command: 
  openssl rsa -in rsa_priv_2048.pem -text

Private-Key: (2048 bit)
modulus:
    00:d7:59:df:92:03:12:5a:8b:ea:06:e2:6d:20:cf:
    50:4f:45:e6:3d:04:7e:0b:ed:8b:d7:3d:74:a1:2e:
    a7:b6:2a:dc:a4:22:bb:ac:c8:e7:61:2c:5a:bb:01:
    0d:a0:66:94:53:e9:01:cf:3f:b3:03:05:31:00:77:
    bc:b8:1d:1e:45:e4:2b:95:f1:35:a5:80:c8:eb:3e:
    5d:5f:93:70:6e:5f:ad:2c:34:f0:b2:d5:ec:31:19:
    3e:5f:c7:c1:06:9f:91:30:ea:2b:be:23:ed:71:b7:
    3f:04:d2:b5:33:8d:5d:48:84:39:59:c9:d4:98:bb:
    7a:5c:d1:90:58:07:68:fa:ec:02:92:5a:e3:97:6d:
    ca:39:7c:80:34:a5:51:b8:3d:15:7a:82:85:02:54:
    ab:6d:55:6a:fd:06:f5:46:38:2e:70:3e:63:19:72:
    f1:a3:a4:8e:a0:f1:45:a1:6f:79:d8:ff:3c:5b:51:
    83:06:3b:11:2c:95:e3:12:4f:39:3a:c9:12:3c:39:
    7b:5c:af:34:58:c4:17:57:f1:7f:77:e0:94:6a:57:
    16:47:64:ea:7e:d8:d3:95:5b:e4:7e:93:9e:ef:47:
    8c:0b:2e:3a:7f:79:4e:c8:a7:5a:b8:41:d4:a8:9b:
    de:52:f7:53:d3:a3:6e:23:bb:c4:10:4f:32:9a:03:
    3c:31
publicExponent: 65537 (0x10001)
privateExponent:
    00:a9:60:9c:c1:a0:fc:dc:8e:d3:60:da:d2:6e:4d:
    e0:a2:99:1d:bf:bc:3a:cf:72:e4:dc:44:0f:e9:7e:
    62:96:9b:1b:b3:55:46:3b:5e:40:ee:63:0e:71:ab:
    20:66:9a:87:eb:7f:86:d6:d5:09:1d:45:06:07:92:
    25:b2:c1:e4:3f:a0:78:cf:94:4a:57:83:f5:83:61:
    27:db:b6:81:65:ae:86:ec:10:2f:88:d9:4c:ce:49:
    46:8f:da:f2:ed:1c:af:fb:c3:12:e8:98:25:77:9d:
    63:49:8d:d8:cb:55:52:9b:68:b4:1a:f4:ed:eb:ba:
    f9:40:eb:eb:15:f1:ae:16:3b:fc:7e:89:90:86:66:
    37:a3:db:cd:73:68:3f:6d:9c:85:45:5c:21:c6:fe:
    2d:41:67:5c:2f:97:3b:03:17:81:11:d7:1c:f6:6e:
    f2:d8:90:89:9d:bb:75:a7:9f:09:0d:83:13:28:f1:
    88:e1:48:37:1b:20:8c:86:2f:27:17:0b:e6:70:83:
    1e:69:88:8f:72:18:d7:83:2b:ca:ab:fe:3c:65:23:
    fe:d0:ea:d3:2c:c7:9a:2a:54:ef:0b:12:cd:4d:ab:
    f9:9b:a7:66:88:3c:7c:fa:2f:19:62:8b:1b:b1:bf:
    18:b2:1b:c7:64:0e:00:dd:f1:01:83:42:9b:0c:e7:
    57:c9
prime1:
    00:fb:e4:71:f9:77:3d:aa:8d:c5:38:db:2d:a8:9a:
    4b:94:db:f5:99:f4:89:02:94:bb:c5:74:55:1b:a4:
    03:62:5d:c5:f0:1b:49:a3:f3:1b:47:ec:59:f5:1f:
    01:6b:8a:72:e8:78:9c:c7:a1:12:cc:c1:b3:5c:cb:
    ad:a0:ca:f5:66:30:2b:01:e9:14:93:f9:d2:b3:d1:
    50:3d:da:47:be:a9:45:61:52:6c:3d:5a:ee:83:72:
    92:bb:52:22:b5:f8:ad:03:4d:d1:b4:e0:5a:d3:c4:
    28:ff:1d:cc:67:4e:f3:55:d6:0e:d9:0b:d5:72:cc:
    c0:8e:0e:ad:50:d8:93:d6:f3
prime2:
    00:da:dc:e1:d1:34:4e:ec:e4:be:4b:74:a7:bb:48:
    ee:e0:31:ad:de:ac:04:3c:69:35:b9:53:51:7f:8c:
    ff:3a:75:9e:9b:78:b6:ae:81:fb:e1:7c:f3:a2:38:
    cd:d3:48:70:55:60:1a:e7:06:b5:c7:6c:ec:3d:97:
    e9:de:e3:c4:b4:ad:3d:50:32:75:9a:0c:e0:46:c0:
    13:3f:2c:56:7d:ca:ae:a8:0c:b1:60:b0:5c:be:b8:
    0a:a9:4c:37:93:59:78:19:b6:3c:0a:60:51:7f:eb:
    ca:46:e5:24:3c:11:a9:32:4b:5c:4f:32:23:99:3e:
    33:0b:de:ab:04:c0:66:71:4b
exponent1:
    00:80:b0:43:72:59:f3:0d:51:84:b2:f9:77:28:2e:
    3b:f2:ff:35:48:c4:5f:c3:0b:cd:aa:a1:36:61:fa:
    b7:27:e8:14:9a:08:b6:e4:a5:ed:08:1f:be:0d:b7:
    1b:78:9f:b0:f9:07:b5:c1:5f:8f:45:40:a8:ab:fd:
    fa:e4:ad:0c:16:7b:01:5d:e6:80:76:e1:29:3e:68:
    ef:7f:ca:26:e1:47:85:84:a5:21:5b:6f:3b:6f:b8:
    77:32:70:51:ff:79:de:9a:53:85:91:cd:15:5a:1f:
    5b:7a:8a:f4:c4:ca:d7:12:c1:5b:b0:93:95:27:23:
    68:34:ab:56:ec:78:d9:7e:f5
exponent2:
    12:02:95:2e:93:00:5f:ac:1f:20:b4:73:cd:0c:9e:
    63:a2:92:ed:3c:f8:88:44:1c:20:a9:03:8e:dc:7a:
    70:44:17:8e:31:ab:ce:c6:71:84:c7:b4:80:c7:ed:
    e0:12:18:f4:5d:99:39:23:ab:37:c2:f5:d9:c7:b3:
    7e:1c:fe:25:e4:0f:a4:96:d2:68:9f:e0:a0:d1:d3:
    83:a2:51:67:be:93:0a:cf:28:95:8d:4d:c4:7f:fe:
    98:99:e6:04:e1:1a:e9:fa:be:0c:18:8a:fc:5c:d9:
    e3:65:9d:ca:b7:a5:55:b7:2f:dc:70:82:cf:6c:77:
    e4:e5:28:eb:96:2d:97:eb
coefficient:
    00:94:26:76:23:e9:0e:73:cc:d5:3b:18:a9:aa:3c:
    b4:1d:71:69:7a:8d:5f:b2:fe:90:46:55:4f:71:78:
    11:90:5f:e5:7f:5b:b3:c3:56:f5:9a:eb:09:c2:7f:
    4c:91:a8:11:60:28:04:ce:f7:34:06:c9:22:d1:3c:
    9b:99:72:8c:fb:74:1a:12:9a:f7:9f:59:30:e9:63:
    7e:05:21:03:4c:82:20:58:bc:b3:28:a6:16:b1:99:
    41:81:e4:32:de:1e:a4:2e:2b:ff:f5:1b:e3:89:c5:
    1e:a6:74:8d:a1:49:68:8d:8a:c0:7e:87:6c:2d:74:
    36:4f:36:76:be:3d:c6:50:7a

Remark: 00 at beginning of buffers are removed to ease the usage with PKA 

*/

#include "main.h"

const uint8_t rsa_priv_2048_modulus[] = {
/*0x00,*/ 0xd7, 0x59, 0xdf, 0x92, 0x03, 0x12, 0x5a, 0x8b, 0xea, 0x06, 0xe2, 0x6d, 0x20, 0xcf,
    0x50, 0x4f, 0x45, 0xe6, 0x3d, 0x04, 0x7e, 0x0b, 0xed, 0x8b, 0xd7, 0x3d, 0x74, 0xa1, 0x2e,
    0xa7, 0xb6, 0x2a, 0xdc, 0xa4, 0x22, 0xbb, 0xac, 0xc8, 0xe7, 0x61, 0x2c, 0x5a, 0xbb, 0x01,
    0x0d, 0xa0, 0x66, 0x94, 0x53, 0xe9, 0x01, 0xcf, 0x3f, 0xb3, 0x03, 0x05, 0x31, 0x00, 0x77,
    0xbc, 0xb8, 0x1d, 0x1e, 0x45, 0xe4, 0x2b, 0x95, 0xf1, 0x35, 0xa5, 0x80, 0xc8, 0xeb, 0x3e,
    0x5d, 0x5f, 0x93, 0x70, 0x6e, 0x5f, 0xad, 0x2c, 0x34, 0xf0, 0xb2, 0xd5, 0xec, 0x31, 0x19,
    0x3e, 0x5f, 0xc7, 0xc1, 0x06, 0x9f, 0x91, 0x30, 0xea, 0x2b, 0xbe, 0x23, 0xed, 0x71, 0xb7,
    0x3f, 0x04, 0xd2, 0xb5, 0x33, 0x8d, 0x5d, 0x48, 0x84, 0x39, 0x59, 0xc9, 0xd4, 0x98, 0xbb,
    0x7a, 0x5c, 0xd1, 0x90, 0x58, 0x07, 0x68, 0xfa, 0xec, 0x02, 0x92, 0x5a, 0xe3, 0x97, 0x6d,
    0xca, 0x39, 0x7c, 0x80, 0x34, 0xa5, 0x51, 0xb8, 0x3d, 0x15, 0x7a, 0x82, 0x85, 0x02, 0x54,
    0xab, 0x6d, 0x55, 0x6a, 0xfd, 0x06, 0xf5, 0x46, 0x38, 0x2e, 0x70, 0x3e, 0x63, 0x19, 0x72,
    0xf1, 0xa3, 0xa4, 0x8e, 0xa0, 0xf1, 0x45, 0xa1, 0x6f, 0x79, 0xd8, 0xff, 0x3c, 0x5b, 0x51,
    0x83, 0x06, 0x3b, 0x11, 0x2c, 0x95, 0xe3, 0x12, 0x4f, 0x39, 0x3a, 0xc9, 0x12, 0x3c, 0x39,
    0x7b, 0x5c, 0xaf, 0x34, 0x58, 0xc4, 0x17, 0x57, 0xf1, 0x7f, 0x77, 0xe0, 0x94, 0x6a, 0x57,
    0x16, 0x47, 0x64, 0xea, 0x7e, 0xd8, 0xd3, 0x95, 0x5b, 0xe4, 0x7e, 0x93, 0x9e, 0xef, 0x47,
    0x8c, 0x0b, 0x2e, 0x3a, 0x7f, 0x79, 0x4e, 0xc8, 0xa7, 0x5a, 0xb8, 0x41, 0xd4, 0xa8, 0x9b,
    0xde, 0x52, 0xf7, 0x53, 0xd3, 0xa3, 0x6e, 0x23, 0xbb, 0xc4, 0x10, 0x4f, 0x32, 0x9a, 0x03,
    0x3c, 0x31
};
const uint32_t rsa_priv_2048_modulus_len = 256;

const uint32_t rsa_priv_2048_publicExponent = 65537; /*(0x10001)*/

const uint8_t rsa_priv_2048_privateExponent[] = {
/*0x00,*/ 0xa9, 0x60, 0x9c, 0xc1, 0xa0, 0xfc, 0xdc, 0x8e, 0xd3, 0x60, 0xda, 0xd2, 0x6e, 0x4d,
    0xe0, 0xa2, 0x99, 0x1d, 0xbf, 0xbc, 0x3a, 0xcf, 0x72, 0xe4, 0xdc, 0x44, 0x0f, 0xe9, 0x7e,
    0x62, 0x96, 0x9b, 0x1b, 0xb3, 0x55, 0x46, 0x3b, 0x5e, 0x40, 0xee, 0x63, 0x0e, 0x71, 0xab,
    0x20, 0x66, 0x9a, 0x87, 0xeb, 0x7f, 0x86, 0xd6, 0xd5, 0x09, 0x1d, 0x45, 0x06, 0x07, 0x92,
    0x25, 0xb2, 0xc1, 0xe4, 0x3f, 0xa0, 0x78, 0xcf, 0x94, 0x4a, 0x57, 0x83, 0xf5, 0x83, 0x61,
    0x27, 0xdb, 0xb6, 0x81, 0x65, 0xae, 0x86, 0xec, 0x10, 0x2f, 0x88, 0xd9, 0x4c, 0xce, 0x49,
    0x46, 0x8f, 0xda, 0xf2, 0xed, 0x1c, 0xaf, 0xfb, 0xc3, 0x12, 0xe8, 0x98, 0x25, 0x77, 0x9d,
    0x63, 0x49, 0x8d, 0xd8, 0xcb, 0x55, 0x52, 0x9b, 0x68, 0xb4, 0x1a, 0xf4, 0xed, 0xeb, 0xba,
    0xf9, 0x40, 0xeb, 0xeb, 0x15, 0xf1, 0xae, 0x16, 0x3b, 0xfc, 0x7e, 0x89, 0x90, 0x86, 0x66,
    0x37, 0xa3, 0xdb, 0xcd, 0x73, 0x68, 0x3f, 0x6d, 0x9c, 0x85, 0x45, 0x5c, 0x21, 0xc6, 0xfe,
    0x2d, 0x41, 0x67, 0x5c, 0x2f, 0x97, 0x3b, 0x03, 0x17, 0x81, 0x11, 0xd7, 0x1c, 0xf6, 0x6e,
    0xf2, 0xd8, 0x90, 0x89, 0x9d, 0xbb, 0x75, 0xa7, 0x9f, 0x09, 0x0d, 0x83, 0x13, 0x28, 0xf1,
    0x88, 0xe1, 0x48, 0x37, 0x1b, 0x20, 0x8c, 0x86, 0x2f, 0x27, 0x17, 0x0b, 0xe6, 0x70, 0x83,
    0x1e, 0x69, 0x88, 0x8f, 0x72, 0x18, 0xd7, 0x83, 0x2b, 0xca, 0xab, 0xfe, 0x3c, 0x65, 0x23,
    0xfe, 0xd0, 0xea, 0xd3, 0x2c, 0xc7, 0x9a, 0x2a, 0x54, 0xef, 0x0b, 0x12, 0xcd, 0x4d, 0xab,
    0xf9, 0x9b, 0xa7, 0x66, 0x88, 0x3c, 0x7c, 0xfa, 0x2f, 0x19, 0x62, 0x8b, 0x1b, 0xb1, 0xbf,
    0x18, 0xb2, 0x1b, 0xc7, 0x64, 0x0e, 0x00, 0xdd, 0xf1, 0x01, 0x83, 0x42, 0x9b, 0x0c, 0xe7,
    0x57, 0xc9
};
const uint32_t rsa_priv_2048_privateExponent_len = 256;

const uint8_t rsa_priv_2048_prime1[] = {
/*0x00,*/ 0xfb, 0xe4, 0x71, 0xf9, 0x77, 0x3d, 0xaa, 0x8d, 0xc5, 0x38, 0xdb, 0x2d, 0xa8, 0x9a,
    0x4b, 0x94, 0xdb, 0xf5, 0x99, 0xf4, 0x89, 0x02, 0x94, 0xbb, 0xc5, 0x74, 0x55, 0x1b, 0xa4,
    0x03, 0x62, 0x5d, 0xc5, 0xf0, 0x1b, 0x49, 0xa3, 0xf3, 0x1b, 0x47, 0xec, 0x59, 0xf5, 0x1f,
    0x01, 0x6b, 0x8a, 0x72, 0xe8, 0x78, 0x9c, 0xc7, 0xa1, 0x12, 0xcc, 0xc1, 0xb3, 0x5c, 0xcb,
    0xad, 0xa0, 0xca, 0xf5, 0x66, 0x30, 0x2b, 0x01, 0xe9, 0x14, 0x93, 0xf9, 0xd2, 0xb3, 0xd1,
    0x50, 0x3d, 0xda, 0x47, 0xbe, 0xa9, 0x45, 0x61, 0x52, 0x6c, 0x3d, 0x5a, 0xee, 0x83, 0x72,
    0x92, 0xbb, 0x52, 0x22, 0xb5, 0xf8, 0xad, 0x03, 0x4d, 0xd1, 0xb4, 0xe0, 0x5a, 0xd3, 0xc4,
    0x28, 0xff, 0x1d, 0xcc, 0x67, 0x4e, 0xf3, 0x55, 0xd6, 0x0e, 0xd9, 0x0b, 0xd5, 0x72, 0xcc,
    0xc0, 0x8e, 0x0e, 0xad, 0x50, 0xd8, 0x93, 0xd6, 0xf3
};
const uint32_t rsa_priv_2048_prime1_len = 128;

const uint8_t rsa_priv_2048_prime2[] = {
/*0x00,*/ 0xda, 0xdc, 0xe1, 0xd1, 0x34, 0x4e, 0xec, 0xe4, 0xbe, 0x4b, 0x74, 0xa7, 0xbb, 0x48,
    0xee, 0xe0, 0x31, 0xad, 0xde, 0xac, 0x04, 0x3c, 0x69, 0x35, 0xb9, 0x53, 0x51, 0x7f, 0x8c,
    0xff, 0x3a, 0x75, 0x9e, 0x9b, 0x78, 0xb6, 0xae, 0x81, 0xfb, 0xe1, 0x7c, 0xf3, 0xa2, 0x38,
    0xcd, 0xd3, 0x48, 0x70, 0x55, 0x60, 0x1a, 0xe7, 0x06, 0xb5, 0xc7, 0x6c, 0xec, 0x3d, 0x97,
    0xe9, 0xde, 0xe3, 0xc4, 0xb4, 0xad, 0x3d, 0x50, 0x32, 0x75, 0x9a, 0x0c, 0xe0, 0x46, 0xc0,
    0x13, 0x3f, 0x2c, 0x56, 0x7d, 0xca, 0xae, 0xa8, 0x0c, 0xb1, 0x60, 0xb0, 0x5c, 0xbe, 0xb8,
    0x0a, 0xa9, 0x4c, 0x37, 0x93, 0x59, 0x78, 0x19, 0xb6, 0x3c, 0x0a, 0x60, 0x51, 0x7f, 0xeb,
    0xca, 0x46, 0xe5, 0x24, 0x3c, 0x11, 0xa9, 0x32, 0x4b, 0x5c, 0x4f, 0x32, 0x23, 0x99, 0x3e,
    0x33, 0x0b, 0xde, 0xab, 0x04, 0xc0, 0x66, 0x71, 0x4b
};
const uint32_t rsa_priv_2048_prime2_len = 128;

const uint8_t rsa_priv_2048_exponent1[] = {
/*0x00,*/ 0x80, 0xb0, 0x43, 0x72, 0x59, 0xf3, 0x0d, 0x51, 0x84, 0xb2, 0xf9, 0x77, 0x28, 0x2e,
    0x3b, 0xf2, 0xff, 0x35, 0x48, 0xc4, 0x5f, 0xc3, 0x0b, 0xcd, 0xaa, 0xa1, 0x36, 0x61, 0xfa,
    0xb7, 0x27, 0xe8, 0x14, 0x9a, 0x08, 0xb6, 0xe4, 0xa5, 0xed, 0x08, 0x1f, 0xbe, 0x0d, 0xb7,
    0x1b, 0x78, 0x9f, 0xb0, 0xf9, 0x07, 0xb5, 0xc1, 0x5f, 0x8f, 0x45, 0x40, 0xa8, 0xab, 0xfd,
    0xfa, 0xe4, 0xad, 0x0c, 0x16, 0x7b, 0x01, 0x5d, 0xe6, 0x80, 0x76, 0xe1, 0x29, 0x3e, 0x68,
    0xef, 0x7f, 0xca, 0x26, 0xe1, 0x47, 0x85, 0x84, 0xa5, 0x21, 0x5b, 0x6f, 0x3b, 0x6f, 0xb8,
    0x77, 0x32, 0x70, 0x51, 0xff, 0x79, 0xde, 0x9a, 0x53, 0x85, 0x91, 0xcd, 0x15, 0x5a, 0x1f,
    0x5b, 0x7a, 0x8a, 0xf4, 0xc4, 0xca, 0xd7, 0x12, 0xc1, 0x5b, 0xb0, 0x93, 0x95, 0x27, 0x23,
    0x68, 0x34, 0xab, 0x56, 0xec, 0x78, 0xd9, 0x7e, 0xf5
};
const uint32_t rsa_priv_2048_exponent1_len = 128;

const uint8_t rsa_priv_2048_exponent2[] = {
    0x12, 0x02, 0x95, 0x2e, 0x93, 0x00, 0x5f, 0xac, 0x1f, 0x20, 0xb4, 0x73, 0xcd, 0x0c, 0x9e,
    0x63, 0xa2, 0x92, 0xed, 0x3c, 0xf8, 0x88, 0x44, 0x1c, 0x20, 0xa9, 0x03, 0x8e, 0xdc, 0x7a,
    0x70, 0x44, 0x17, 0x8e, 0x31, 0xab, 0xce, 0xc6, 0x71, 0x84, 0xc7, 0xb4, 0x80, 0xc7, 0xed,
    0xe0, 0x12, 0x18, 0xf4, 0x5d, 0x99, 0x39, 0x23, 0xab, 0x37, 0xc2, 0xf5, 0xd9, 0xc7, 0xb3,
    0x7e, 0x1c, 0xfe, 0x25, 0xe4, 0x0f, 0xa4, 0x96, 0xd2, 0x68, 0x9f, 0xe0, 0xa0, 0xd1, 0xd3,
    0x83, 0xa2, 0x51, 0x67, 0xbe, 0x93, 0x0a, 0xcf, 0x28, 0x95, 0x8d, 0x4d, 0xc4, 0x7f, 0xfe,
    0x98, 0x99, 0xe6, 0x04, 0xe1, 0x1a, 0xe9, 0xfa, 0xbe, 0x0c, 0x18, 0x8a, 0xfc, 0x5c, 0xd9,
    0xe3, 0x65, 0x9d, 0xca, 0xb7, 0xa5, 0x55, 0xb7, 0x2f, 0xdc, 0x70, 0x82, 0xcf, 0x6c, 0x77,
    0xe4, 0xe5, 0x28, 0xeb, 0x96, 0x2d, 0x97, 0xeb
};
const uint32_t rsa_priv_2048_exponent2_len = 128;

const uint8_t rsa_priv_2048_coefficient[] = {
/*0x00,*/ 0x94, 0x26, 0x76, 0x23, 0xe9, 0x0e, 0x73, 0xcc, 0xd5, 0x3b, 0x18, 0xa9, 0xaa, 0x3c,
    0xb4, 0x1d, 0x71, 0x69, 0x7a, 0x8d, 0x5f, 0xb2, 0xfe, 0x90, 0x46, 0x55, 0x4f, 0x71, 0x78,
    0x11, 0x90, 0x5f, 0xe5, 0x7f, 0x5b, 0xb3, 0xc3, 0x56, 0xf5, 0x9a, 0xeb, 0x09, 0xc2, 0x7f,
    0x4c, 0x91, 0xa8, 0x11, 0x60, 0x28, 0x04, 0xce, 0xf7, 0x34, 0x06, 0xc9, 0x22, 0xd1, 0x3c,
    0x9b, 0x99, 0x72, 0x8c, 0xfb, 0x74, 0x1a, 0x12, 0x9a, 0xf7, 0x9f, 0x59, 0x30, 0xe9, 0x63,
    0x7e, 0x05, 0x21, 0x03, 0x4c, 0x82, 0x20, 0x58, 0xbc, 0xb3, 0x28, 0xa6, 0x16, 0xb1, 0x99,
    0x41, 0x81, 0xe4, 0x32, 0xde, 0x1e, 0xa4, 0x2e, 0x2b, 0xff, 0xf5, 0x1b, 0xe3, 0x89, 0xc5,
    0x1e, 0xa6, 0x74, 0x8d, 0xa1, 0x49, 0x68, 0x8d, 0x8a, 0xc0, 0x7e, 0x87, 0x6c, 0x2d, 0x74,
    0x36, 0x4f, 0x36, 0x76, 0xbe, 0x3d, 0xc6, 0x50, 0x7a
};
const uint32_t rsa_priv_2048_coefficient_len = 128;

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
