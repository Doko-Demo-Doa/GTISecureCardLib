/* pkcs11t_gt.h include file for GOTrust vendor-specific types and #define'd values. */

#ifndef _PKCS11T_GT_H_
#define _PKCS11T_GT_H_ 1

/* The I/O file is incomplete. The application have to call C_CreateIoFile() to complete the I/O file creation. */
#define CKR_IO_FILE_INCOMPLETE	(CKR_VENDOR_DEFINED + 0x1)

/* The I/O file is fragmented. The application have to format microSD and re-create I/O file again. */
#define CKR_IO_FILE_FRAGMENTED	(CKR_VENDOR_DEFINED + 0x2)

/* The device does not have sufficient space to perform the requested function. */
#define CKR_DEVICE_OUT_OF_SPACE	(CKR_VENDOR_DEFINED + 0x3)

/* Failed to verify the challenge response from the device while trying to open secure channel. This error usually happens when SCMK is incorrect. */
#define CKR_SC_CHALLENGE_RESPONSE_ERROR		(CKR_VENDOR_DEFINED + 0x4)

#endif	// #define _PKCS11T_GT_H_