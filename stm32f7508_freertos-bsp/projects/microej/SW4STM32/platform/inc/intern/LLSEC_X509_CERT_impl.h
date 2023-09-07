/*
 * C
 *
 * Copyright 2015-2020 IS2T. All rights reserved.
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

#define LLSEC_X509_CERT_IMPL_parse						Java_com_is2t_support_security_natives_X509CertSupportNatives_parse
#define LLSEC_X509_CERT_IMPL_get_key_size				Java_com_is2t_support_security_natives_X509CertSupportNatives_getKeyDataSize
#define LLSEC_X509_CERT_IMPL_get_key					Java_com_is2t_support_security_natives_X509CertSupportNatives_getKeyData
#define LLSEC_X509_CERT_IMPL_verify						Java_com_is2t_support_security_natives_X509CertSupportNatives_verify
#define LLSEC_X509_CERT_IMPL_get_x500_principal_data	Java_com_is2t_support_security_natives_X509CertSupportNatives_getX500PrincipalData
