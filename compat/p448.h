#if defined(__arm__)
#include "crypto/goldilocks/src/p448/arch_arm_32/p448.h"
#elif defined(__x86_64__)
#include "crypto/goldilocks/src/p448/arch_x86_64/p448.h"
#elif defined(__LP64__)
#include "crypto/goldilocks/src/p448/arch_ref64/p448.h"
#else
#include "crypto/goldilocks/src/p448/arch_32/p448.h"
#endif

