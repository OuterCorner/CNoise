
#ifndef CNoise_Shim_h
#define CNoise_Shim_h

#include <noise/protocol.h>

/**
  Swift won't expose "complex" C Macros to Swift:
    "C macros that are more complex than simple constant definitions have no counterpart in Swift. "
    in [Using Imported C Macros in Swift](https://developer.apple.com/documentation/swift/imported_c_and_objective-c_apis/using_imported_c_macros_in_swift)
 So we define these enums to get around that limitation and expose all these constants to Swift.
 */


enum CNoiseCipher {
    CNoiseCipherNone        = NOISE_CIPHER_NONE,
    CNoiseCipherCategory    = NOISE_CIPHER_CATEGORY,
    CNoiseCipherChaChaPoly  = NOISE_CIPHER_CHACHAPOLY,
    CNoiseCipherAESGCM      = NOISE_CIPHER_AESGCM
};

enum CNoiseHash {
    CNoiseHashNone      = NOISE_HASH_NONE,
    CNoiseHashCategory  = NOISE_HASH_CATEGORY,
    CNoiseHashBlake2s   = NOISE_HASH_BLAKE2s,
    CNoiseHashBlake2b   = NOISE_HASH_BLAKE2b,
    CNoiseHashSHA256    = NOISE_HASH_SHA256,
    CNoiseHashSHA512    = NOISE_HASH_SHA512
};

enum CNoiseDH {
    CNoiseDHNone        = NOISE_DH_NONE,
    CNoiseDHCategory    = NOISE_DH_CATEGORY,
    CNoiseDHCurve25519  = NOISE_DH_CURVE25519,
    CNoiseDHCurvs448    = NOISE_DH_CURVE448,
    CNoiseDHNewHope     = NOISE_DH_NEWHOPE,
};

enum CNoisePattern {
    CNoisePatternNone           = NOISE_PATTERN_NONE,
    CNoisePatternCategory       = NOISE_PATTERN_CATEGORY,
    CNoisePatternN              = NOISE_PATTERN_N,
    CNoisePatternX              = NOISE_PATTERN_X,
    CNoisePatternK              = NOISE_PATTERN_K,
    CNoisePatternNN             = NOISE_PATTERN_NN,
    CNoisePatternNK             = NOISE_PATTERN_NK,
    CNoisePatternNX             = NOISE_PATTERN_NX,
    CNoisePatternXN             = NOISE_PATTERN_XN,
    CNoisePatternXK             = NOISE_PATTERN_XK,
    CNoisePatternXX             = NOISE_PATTERN_XX,
    CNoisePatternKN             = NOISE_PATTERN_KN,
    CNoisePatternKK             = NOISE_PATTERN_KK,
    CNoisePatternKX             = NOISE_PATTERN_KX,
    CNoisePatternIN             = NOISE_PATTERN_IN,
    CNoisePatternIK             = NOISE_PATTERN_IK,
    CNoisePatternIX             = NOISE_PATTERN_IX,
    CNoisePatternXX_Fallback    = NOISE_PATTERN_XX_FALLBACK,
    CNoisePatternX_NOIDH        = NOISE_PATTERN_X_NOIDH,
    CNoisePatternNX_NOIDH       = NOISE_PATTERN_NX_NOIDH,
    CNoisePatternXX_NOIDH       = NOISE_PATTERN_XX_NOIDH,
    CNoisePatternKX_NOIDH       = NOISE_PATTERN_KX_NOIDH,
    CNoisePatternIK_NOIDH       = NOISE_PATTERN_IK_NOIDH,
    CNoisePatternIX_NOIDH       = NOISE_PATTERN_IX_NOIDH,
    CNoisePatternNN_HFS         = NOISE_PATTERN_NN_HFS,
    CNoisePatternNK_HFS         = NOISE_PATTERN_NK_HFS,
    CNoisePatternNX_HFS         = NOISE_PATTERN_NX_HFS,
    CNoisePatternXN_HFS         = NOISE_PATTERN_XN_HFS,
    CNoisePatternXK_HFS         = NOISE_PATTERN_XK_HFS,
    CNoisePatternXX_HFS         = NOISE_PATTERN_XX_HFS,
    CNoisePatternKN_HFS         = NOISE_PATTERN_KN_HFS,
    CNoisePatternKK_HFS         = NOISE_PATTERN_KK_HFS,
    CNoisePatternKX_HFS         = NOISE_PATTERN_KX_HFS,
    CNoisePatternIN_HFS         = NOISE_PATTERN_IN_HFS,
    CNoisePatternIK_HFS         = NOISE_PATTERN_IK_HFS,
    CNoisePatternIX_HFS         = NOISE_PATTERN_IX_HFS,
    CNoisePatternXX_Fallback_HFS= NOISE_PATTERN_XX_FALLBACK_HFS,
    CNoisePatternNX_NODIH_HFS   = NOISE_PATTERN_NX_NOIDH_HFS,
    CNoisePatternXX_NODIH_HFS   = NOISE_PATTERN_XX_NOIDH_HFS,
    CNoisePatternKX_NODIH_HFS   = NOISE_PATTERN_KX_NOIDH_HFS,
    CNoisePatternIK_NODIH_HFS   = NOISE_PATTERN_IK_NOIDH_HFS,
    CNoisePatternIX_NODIH_HFS   = NOISE_PATTERN_IX_NOIDH_HFS
};

enum CNoisePrefix {
    CNoisePrefixNone        = NOISE_PREFIX_NONE,
    CNoisePrefixCategory    = NOISE_PREFIX_CATEGORY,
    CNoisePrefixStandard    = NOISE_PREFIX_STANDARD,
    CNoisePrefixPSK         = NOISE_PREFIX_PSK
};

enum CNoiseSignature {
    CNoiseSignatureNone     = NOISE_SIGN_NONE,
    CNoiseSignatureCategory = NOISE_SIGN_CATEGORY,
    CNoiseSignatureED25519  = NOISE_SIGN_ED25519
};

enum CNoiseRole {
    CNoiseRoleInitiator = NOISE_ROLE_INITIATOR,
    CNoiseRoleResponder = NOISE_ROLE_RESPONDER
};

enum CNoiseAction {
    CNoiseActionNone        = NOISE_ACTION_NONE,
    CNoiseActionWrite       = NOISE_ACTION_WRITE_MESSAGE,
    CNoiseActionRead        = NOISE_ACTION_READ_MESSAGE,
    CNoiseActionFailed      = NOISE_ACTION_FAILED,
    CNoiseActionSplit       = NOISE_ACTION_SPLIT,
    CNoiseActionComplete    = NOISE_ACTION_COMPLETE
};

enum CNoisePadding {
    CNoisePaddingZero   = NOISE_PADDING_ZERO,
    CNoisePaddingRandom = NOISE_PADDING_RANDOM
};

enum CNoiseFingerprint {
    CNoiseFingerprintBasic  = NOISE_FINGERPRINT_BASIC,
    CNoiseFingerprintFull   = NOISE_FINGERPRINT_FULL
};

enum CNoiseErrorCode {
    CNoiseErrorNone = NOISE_ERROR_NONE,
    CNoiseErrorNoMemory = NOISE_ERROR_NO_MEMORY,
    CNoiseErrorUnknownID = NOISE_ERROR_UNKNOWN_ID,
    CNoiseErrorUnknownName = NOISE_ERROR_UNKNOWN_NAME,
    CNoiseErrorMacFailure = NOISE_ERROR_MAC_FAILURE,
    CNoiseErrorNotApplicable = NOISE_ERROR_NOT_APPLICABLE,
    CNoiseErrorSystem = NOISE_ERROR_SYSTEM,
    CNoiseErrorRemoteKeyRequired = NOISE_ERROR_REMOTE_KEY_REQUIRED,
    CNoiseErrorLocalKeyRequired = NOISE_ERROR_LOCAL_KEY_REQUIRED,
    CNoiseErrorPSKRequired = NOISE_ERROR_PSK_REQUIRED,
    CNoiseErrorInvalidLength = NOISE_ERROR_INVALID_LENGTH,
    CNoiseErrorInvalidParam = NOISE_ERROR_INVALID_PARAM,
    CNoiseErrorInvalidState = NOISE_ERROR_INVALID_STATE,
    CNoiseErrorInvalidNonce = NOISE_ERROR_INVALID_NONCE,
    CNoiseErrorInvalidPrivateKey = NOISE_ERROR_INVALID_PRIVATE_KEY,
    CNoiseErrorInvalidPublicKey = NOISE_ERROR_INVALID_PUBLIC_KEY,
    CNoiseErrorInvalidFormat = NOISE_ERROR_INVALID_FORMAT,
    CNoiseErrorInvalidSignature = NOISE_ERROR_INVALID_SIGNATURE
};

#endif
