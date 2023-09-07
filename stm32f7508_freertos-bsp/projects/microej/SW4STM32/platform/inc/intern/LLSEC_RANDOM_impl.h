/*
 * C
 *
 * Copyright 2018-2019 IS2T. All rights reserved.
 * For demonstration purpose only.
 * IS2T PROPRIETARY/CONFIDENTIAL. Use is subject to license terms.
 */

/**
 * @file
 * @brief MicroEJ Security low level API
 * @author MicroEJ Developer Team
 * @version 1.5.0
 * @date 20 December 2020
 */

#define LLSEC_RANDOM_IMPL_init							Java_com_is2t_support_security_securerandom_NativeSecureRandomSpi_nativeInit
#define LLSEC_RANDOM_IMPL_close							Java_com_is2t_support_security_securerandom_NativeSecureRandomSpi_nativeClose
#define LLSEC_RANDOM_IMPL_next_bytes					Java_com_is2t_support_security_securerandom_NativeSecureRandomSpi_nativeNextBytes
#define LLSEC_RANDOM_IMPL_set_seed						Java_com_is2t_support_security_securerandom_NativeSecureRandomSpi_nativeSetSeed
#define LLSEC_RANDOM_IMPL_generate_seed					Java_com_is2t_support_security_securerandom_NativeSecureRandomSpi_nativeGenerateSeed
