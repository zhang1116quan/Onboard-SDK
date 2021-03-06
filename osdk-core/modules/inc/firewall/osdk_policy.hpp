/**
 ********************************************************************
 * @file    osdk_policy.h
 * @version V1.0.0
 * @date    2019/09/15
 * @brief   Define the osdk policy binary array
 *
 * @copyright (c) 2018-2019 DJI. All rights reserved.
 *
 * All information contained herein is, and remains, the property of DJI.
 * The intellectual and technical concepts contained herein are proprietary
 * to DJI and may be covered by U.S. and foreign patents, patents in process,
 * and protected by trade secret or copyright law.  Dissemination of this
 * information, including but not limited to data and other proprietary
 * material(s) incorporated within the information, in any form, is strictly
 * prohibited without the express written consent of DJI.
 *
 * If you receive this source code without DJI’s authorization, you may not
 * further disseminate the information, and you must immediately remove the
 * source code and notify DJI of its removal. DJI reserves the right to pursue
 * legal actions against you for any loss(es) or damage(s) caused by your
 * failure to do so.
 *
 *********************************************************************
 */


#ifndef _OSDK_POLICY_H_
#define _OSDK_POLICY_H_

#include <stdint.h>

#define OSDK_IDENTITY_VERIFY_CALMD5_MAX_NUM          (33 + 17)
#define OSDK_POLICY_FILE_VERSION_OFFSET              (256)
/*!
 * OSDK Policy
 * Creator  : DJI
 * Date     : 2020-05-07
 * OSDK Ver : OSDK 4.0
 * */

static const uint8_t s_osdkPolicyFileBinaryArray[] = {
  0xB0, 0xBD, 0xD9, 0x11, 0xD8, 0xAA, 0x8B, 0x32, 0xFA, 0xCE, 0xC4, 0x40, 0xC6,
  0x2E, 0xAD, 0x1F, 0xA2, 0xA1, 0xC2, 0x2B, 0x8A, 0xA3, 0x27, 0x32, 0x7F, 0xFB,
  0x16, 0xFF, 0x58, 0xB6, 0x85, 0x2A, 0xCB, 0x05, 0xB3, 0xAF, 0x79, 0x8B, 0x09,
  0x93, 0xFD, 0xFE, 0xD1, 0x52, 0x2A, 0xDB, 0xF2, 0xA5, 0xA8, 0x9A, 0xCD, 0x15,
  0x08, 0x19, 0x8C, 0x82, 0xD0, 0xA6, 0xC6, 0x1E, 0x38, 0x41, 0x21, 0xF4, 0x68,
  0xC2, 0x80, 0x96, 0x77, 0x32, 0x72, 0x0B, 0xA8, 0x39, 0xAB, 0x22, 0xD6, 0x15,
  0x3A, 0x45, 0xCC, 0xA3, 0xA6, 0x08, 0x75, 0xFA, 0x7A, 0x2A, 0xF2, 0x3F, 0x56,
  0xE0, 0x1B, 0xDB, 0x28, 0x2D, 0x0B, 0xD1, 0x98, 0x9F, 0xA7, 0xC6, 0xF3, 0xC2,
  0xF9, 0x25, 0xB0, 0xCD, 0xC1, 0x99, 0x8C, 0x98, 0xC3, 0x35, 0x16, 0x2C, 0x17,
  0x15, 0x67, 0x60, 0xA4, 0x29, 0x9C, 0x93, 0x3E, 0x16, 0xEF, 0x52, 0x8F, 0xBE,
  0x0B, 0x39, 0x6C, 0x1C, 0x03, 0x61, 0xEE, 0xC3, 0xDE, 0xEB, 0xD2, 0xB3, 0x4A,
  0x4D, 0x8C, 0xA6, 0x63, 0x16, 0xCF, 0xBB, 0x35, 0xE9, 0xE6, 0x73, 0x91, 0xAE,
  0x2F, 0x7D, 0xC2, 0x03, 0x74, 0x22, 0x03, 0x59, 0x83, 0xE4, 0x81, 0xDC, 0x7E,
  0xB0, 0x27, 0xA9, 0xE6, 0x08, 0x49, 0xA9, 0x7A, 0x09, 0xF2, 0x93, 0x21, 0x81,
  0x95, 0xBE, 0x0B, 0x5A, 0xD6, 0x18, 0xA6, 0xD0, 0x58, 0x63, 0x57, 0xF3, 0x1F,
  0xD2, 0x30, 0xB2, 0x5E, 0xB7, 0xF8, 0x9B, 0x23, 0xEA, 0x88, 0xF6, 0xB5, 0x84,
  0x10, 0xE7, 0xB4, 0x3E, 0xBF, 0x7F, 0x83, 0xA6, 0x5A, 0x93, 0xA0, 0xE1, 0x0E,
  0x94, 0x61, 0x01, 0x3F, 0xC5, 0x21, 0x13, 0x85, 0x29, 0x59, 0x0C, 0x5F, 0x82,
  0x5E, 0x73, 0xEC, 0x70, 0x81, 0xD4, 0x74, 0x32, 0x37, 0xB7, 0x2B, 0xA5, 0xF3,
  0xB9, 0x64, 0xC0, 0xAA, 0x0A, 0x95, 0x9F, 0x70, 0x8E, 0x00, 0x00, 0x6C, 0x00,
  0x01, 0x00, 0x68, 0x00, 0x01, 0x00, 0x02, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x04,
  0x00, 0x00, 0x05, 0x26, 0x27, 0x02, 0x04, 0x14, 0x00, 0x01, 0x02, 0x09, 0x10,
  0x11, 0x1E, 0x1F, 0x22, 0x2B, 0x2E, 0x2F, 0x30, 0x31, 0x34, 0x35, 0x6A, 0x6B,
  0xC4, 0xC6, 0x00, 0xB8, 0x80, 0xEB, 0xEC, 0x03, 0x01, 0x00, 0x00, 0x1B, 0x04,
  0x02, 0x00, 0x00, 0x0A, 0x4C, 0x05, 0x01, 0x00, 0x00, 0x0B, 0x08, 0x01, 0x02,
  0x00, 0x67, 0x68, 0x65, 0x0B, 0x01, 0x00, 0x00, 0x04, 0x21, 0x00, 0x02, 0x00,
  0x05, 0x06, 0x22, 0x01, 0x04, 0x00, 0x01, 0x0E, 0x17, 0x1E, 0x27, 0x24, 0x01,
  0x02, 0x00, 0x11, 0x12, 0x32, 0x3C, 0x02, 0x00, 0x00, 0x37, 0x40, 0x49, 0x02,
  0x00, 0x00, 0x20, 0x30
};

#endif    /* _OSDK_POLICY_H_ */
