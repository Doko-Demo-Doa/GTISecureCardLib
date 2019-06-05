/* pkcs11f_gt.h include file for GOTrust vendor-specific functions. */

#ifdef __ANDROID__	// only for Android platforms

/**
 * C_SetAppDir.
 * Assign the application own directory located on the secure microSD.
 * For Android 4.4.2 (Kitkat) or newer versions, the I/O file path must be under the application directory located in secure microSD, because that's the only accessible directory on microSD.
 * The application own directory is named by its package name and can be queried by using ContextWrapper.getExternalFilesDirs().
 * For Example, if an application's package name is com.gotrust, its own directory is "<microSD root>/Android/data/com.gotrust".
 *
 * @param[in] pAppDir A null-terminated string pointing to the application own directory on the device.
 * @return Returns CKR_OK on success; otherwise, returns an error code.
 * @note This function is only for Android platforms.
 */
CK_PKCS11_FUNCTION_INFO(C_SetAppDir)
#ifdef CK_NEED_ARG_LIST
(
  CK_UTF8CHAR_PTR   pAppDir    /* A null-terminated string pointing to the application own directory on the device. */
);
#endif

/**
 * C_SetAppDirs.
 * The function is similar with C_SetAppDir, but the function can accept multiple application directory paths in multi-string format. The feature enables applications to assign multiple device paths at a time.
 * The multi-string format is made of multiple null-terminated strings with double null characters at the end. For example: "A" concatenated "B" is represented as "\x41\x00\x42\x00\x00".
 *
 * @param[in] pAppDirs One or more application own directories on the devices in multi-string format.
 * @param[in] ulAppDirsLen The length of pAppDirs.
 * @param[out] pulFailedIndex If the function fails, the parameter receives the index of the failed application directory.
 * @return Returns CKR_OK on success; otherwise, returns an error code.
 * @note This function is only for Android platforms.
 */
CK_PKCS11_FUNCTION_INFO(C_SetAppDirs)
#ifdef CK_NEED_ARG_LIST
(
  CK_UTF8CHAR_PTR   pAppDirs,         /* A multi-string pointing to the application own directories on the devices. */
  CK_ULONG          ulAppDirsLen,     /* The length of pAppDirs. */
  CK_ULONG_PTR      pulFailedIndex  /* If the function fails, the parameter receives the index of the failed application directory. */
);
#endif

/**
 * C_CreateIoFile.
 * Create an I/O file under the specified directory.
 * The function blocks the caller until the file creation process completes.
 *
 * @param[in] pAppDir A null-terminated string pointing to the application own directory on the device.
 * @param[out] pulExtraSpaceNeeded When the function fails with CKR_DEVICE_OUT_OF_SPACE error, this parameter receives the extra space (in MB) needed; otherwise, it is set to zero.
 * @return Returns CKR_OK on success; otherwise, returns an error code.
 * @note This function is only for Android platforms.
 */
CK_PKCS11_FUNCTION_INFO(C_CreateIoFile)
#ifdef CK_NEED_ARG_LIST
(
  CK_UTF8CHAR_PTR   pAppDir,             /* A null-terminated string pointing to the application own directory on the device. */
  CK_ULONG_PTR      pulExtraSpaceNeeded  /* Receives the extra space (in MB) needed. */
);
#endif

/**
 * C_GetCreateIoFileProgress.
 * Get the progress of I/O file creation.
 *
 * @param[in] pAppDir A null-terminated string pointing to the application own directory on the device.
 * @param[out] pulProgress Receives the progress ranging from 0 to 100 of the I/O file creation.
 * @return Returns CKR_OK on success; otherwise, returns an error code.
 * @note This function is only for Android platforms.
 */
CK_PKCS11_FUNCTION_INFO(C_GetCreateIoFileProgress)
#ifdef CK_NEED_ARG_LIST
(
  CK_UTF8CHAR_PTR   pAppDir,       /* A null-terminated string pointing to the application own directory on the device. */
  CK_ULONG_PTR      pulProgress    /* The progress of I/O file creation */
);
#endif

#endif

/**
 * C_SetSCMK.
 * Set the customized SCMK (Secure Channel Master Key).
 * The function should be called right after C_Initialize(). If not, the library uses the default SCMK to access tokens.
 *
 * @param[in] pSCMK The SCMK.
 * @param[in] ulSCMKLen The length of SCMK in bytes.
 * @return Returns CKR_OK on success; otherwise, returns an error code.
 */
CK_PKCS11_FUNCTION_INFO(C_SetSCMK)
#ifdef CK_NEED_ARG_LIST
(
  CK_BYTE_PTR       pSCMK,         /* The SCMK value. */
  CK_ULONG          ulSCMKLen      /* The length of SCMK in bytes. */
);
#endif