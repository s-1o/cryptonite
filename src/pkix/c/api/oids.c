/*
 * Copyright (c) 2016 PrivatBank IT <acsk@privatbank.ua>. All rights reserved.
 * Redistribution and modifications are permitted subject to BSD license.
 */

#include "oids.h"

#include "pkix_macros_internal.h"
#include "asn1_utils.h"

/* PKI. */
/**
 * Таблиця 1.
 * Об'єктний ідентифікатор інфраструктури відкритих ключів.
 */

#define GET_ARR_CNT(x) (sizeof(x) / sizeof(x[0]))
#define CREATE_OID_LONG(x) {x, GET_ARR_CNT(x)}
#define CREATE_OID_VARS(name, ...) long name[] = __VA_ARGS__; \
    const OidNumbers name##_ST = CREATE_OID_LONG(name)

/* Інфраструктура відкритих ключів. */
CREATE_OID_VARS(OID_PKI, {1, 2, 804, 2, 1, 1, 1});

/* Криптографічні алгоритми. */
CREATE_OID_VARS(OID_PKI_ALG, {1, 2, 804, 2, 1, 1, 1, 1});

/* Геш-функції. */
CREATE_OID_VARS(OID_PKI_HASH, {1, 2, 804, 2, 1, 1, 1, 1, 2});
CREATE_OID_VARS(OID_PKI_SHA224, {2, 16, 840, 1, 101, 3, 4, 2, 4});
CREATE_OID_VARS(OID_PKI_SHA256, {2, 16, 840, 1, 101, 3, 4, 2, 1});
CREATE_OID_VARS(OID_PKI_SHA384, {2, 16, 840, 1, 101, 3, 4, 2, 2});
CREATE_OID_VARS(OID_PKI_SHA512, {2, 16, 840, 1, 101, 3, 4, 2, 3});
CREATE_OID_VARS(OID_PKI_SHA1, {1, 3, 14, 3, 2, 26});
CREATE_OID_VARS(OID_PKI_GOST3411, {1, 2, 804, 2, 1, 1, 1, 1, 2, 1});
CREATE_OID_VARS(OID_PKI_HMAC_GOST3411, {1, 2, 804, 2, 1, 1, 1, 1, 1, 2});
CREATE_OID_VARS(OID_PKI_ASYM, {1, 2, 804, 2, 1, 1, 1, 1, 3});
CREATE_OID_VARS(OID_PKI_DSTU4145_WITH_GOST3411, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1});
CREATE_OID_VARS(OID_PKI_DSTU4145_PB_LE, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1});
CREATE_OID_VARS(OID_PKI_SPECIAL_CURVES_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 1});
CREATE_OID_VARS(OID_PKI_DSTU4145_PB_BE, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 1, 1});
CREATE_OID_VARS(OID_PKI_NAMED_CURVES_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2});
CREATE_OID_VARS(OID_PKI_M163_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 0});
CREATE_OID_VARS(OID_PKI_M167_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 1});
CREATE_OID_VARS(OID_PKI_M173_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 2});
CREATE_OID_VARS(OID_PKI_M179_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 3});
CREATE_OID_VARS(OID_PKI_M191_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 4});
CREATE_OID_VARS(OID_PKI_M233_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 5});
CREATE_OID_VARS(OID_PKI_M257_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 6});
CREATE_OID_VARS(OID_PKI_M307_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 7});
CREATE_OID_VARS(OID_PKI_M367_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 8});
CREATE_OID_VARS(OID_PKI_M431_PB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 1, 2, 9});
CREATE_OID_VARS(OID_PKI_DSTU4145_ONB_LE, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2});
CREATE_OID_VARS(OID_PKI_SPECIAL_CURVES_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 1});
CREATE_OID_VARS(OID_PKI_DSTU4145_ONB_BE, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 1, 1});
CREATE_OID_VARS(OID_PKI_NAMED_CURVES_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2});
CREATE_OID_VARS(OID_PKI_M173_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2, 0});
CREATE_OID_VARS(OID_PKI_M179_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2, 1});
CREATE_OID_VARS(OID_PKI_M191_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2, 2});
CREATE_OID_VARS(OID_PKI_M233_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2, 3});
CREATE_OID_VARS(OID_PKI_M431_ONB, {1, 2, 804, 2, 1, 1, 1, 1, 3, 1, 2, 2, 4});
CREATE_OID_VARS(OID_GOST34310_WITH_GOST34311, {1, 2, 804, 2, 1, 1, 1, 1, 3, 2});
CREATE_OID_VARS(OID_GOST28147_DSTU, {1, 2, 804, 2, 1, 1, 1, 1, 1, 1});
CREATE_OID_VARS(OID_GOST28147_GOST, {1, 2, 643, 2, 2, 21});
CREATE_OID_VARS(OID_GOST28147_OFB, {1, 2, 804, 2, 1, 1, 1, 1, 1, 1, 2});
CREATE_OID_VARS(OID_GOST28147_CFB, {1, 2, 804, 2, 1, 1, 1, 1, 1, 1, 3});
CREATE_OID_VARS(OID_GOST28147_WRAP, {1, 2, 804, 2, 1, 1, 1, 1, 1, 1, 5});
CREATE_OID_VARS(OID_DH_SINGLE_PASS_COFACTOR_DH_GOST34311KDF_SCHEME, {1, 2, 804, 2, 1, 1, 1, 1, 3, 4});


/* EC params. */
CREATE_OID_VARS(OID_EC_PUBLIC_KEY_TYPE, {1, 2, 840, 10045, 2, 1});
CREATE_OID_VARS(OID_ECDSA_WITH_SHA1, {1, 2, 840, 10045, 4, 1});
CREATE_OID_VARS(OID_ECDSA_WITH_SHA224, {1, 2, 840, 10045, 4, 3, 1});
CREATE_OID_VARS(OID_ECDSA_WITH_SHA256, {1, 2, 840, 10045, 4, 3, 2});
CREATE_OID_VARS(OID_ECDSA_WITH_SHA384, {1, 2, 840, 10045, 4, 3, 3});
CREATE_OID_VARS(OID_ECDSA_WITH_SHA512, {1, 2, 840, 10045, 4, 3, 4});
CREATE_OID_VARS(OID_ECDSA_SECP_192_R1, {1, 2, 840, 10045, 3, 1, 1});
CREATE_OID_VARS(OID_ECDSA_SECP_256_R1, {1, 2, 840, 10045, 3, 1, 7});
CREATE_OID_VARS(OID_ECDSA_SECP_224_R1, {1, 3, 132, 0, 33});
CREATE_OID_VARS(OID_ECDSA_SECP_384_R1, {1, 3, 132, 0, 34});
CREATE_OID_VARS(OID_ECDSA_SECP_521_R1, {1, 3, 132, 0, 35});
CREATE_OID_VARS(OID_ECDSA_SECP_256_K1, {1, 3, 132, 0, 10});

/* PBE Params*/
CREATE_OID_VARS(OID_PBE_WITH_SHA1_TDES_CBC, {1, 2, 840, 113549, 1, 12, 1, 3});

/* DES params*/
CREATE_OID_VARS(OID_DES_EDE3_CBC, {1, 2, 840, 113549, 3, 7});

/* AES params*/
CREATE_OID_VARS(OID_AES256_CBC, {2, 16, 840, 1, 101, 3, 4, 1, 42});

/* Політики сертифікації,  */
CREATE_OID_VARS(OID_PKI_CP, {1, 2, 804, 2, 1, 1, 1, 2});

/* Ознака відповідності Закону України "Про електронний цифровий підпис". */
CREATE_OID_VARS(OID_PKI_UKR_EDS_CP, {1, 2, 804, 2, 1, 1, 1, 2, 1});

/* Політика формування позначок часу. */
CREATE_OID_VARS(OID_PKI_TSP_POLICY, {1, 2, 804, 2, 1, 1, 1, 2, 3});

/* Відповідь TSP з ЕЦП за ДСТУ 4145-2002 (поліноміальний базис). */
CREATE_OID_VARS(OID_PKI_TSP_POLICY_DSTU_PB, {1, 2, 804, 2, 1, 1, 1, 2, 3, 1});

/* Відповідь TSP з ЕЦП за ГОСТ 34.310-95. */
CREATE_OID_VARS(OID_PKI_TSP_POLICY_GOST, {1, 2, 804, 2, 1, 1, 1, 2, 3, 2});

/* Відповідь TSP з ЕЦП за ДСТУ 4145-2002 (оптимальний нормальний базис). */
CREATE_OID_VARS(OID_PKI_TSP_POLICY_DSTU_ONB, {1, 2, 804, 2, 1, 1, 1, 2, 3, 3});

/* Уточнене призначення відкритого ключа. */
CREATE_OID_VARS(OID_PKI_EKU, {1, 2, 804, 2, 1, 1, 1, 3});

CREATE_OID_VARS(OID_PKI_EKU_STAMP, {1, 2, 804, 2, 1, 1, 1, 3, 9});

/* Розробники PKI. */
CREATE_OID_VARS(OID_PKI_DEV, {1, 2, 804, 2, 1, 1, 1, 11});

/** Причина відкликання сертифікату. */
CREATE_OID_VARS(OID_CE_CRL_REASON, {2, 5, 29, 21});

CREATE_OID_VARS(OID_DATA, {1, 2, 840, 113549, 1, 7, 1});
CREATE_OID_VARS(OID_SIGNED_DATA, {1, 2, 840, 113549, 1, 7, 2});
CREATE_OID_VARS(OID_ENVELOPED_DATA, {1, 2, 840, 113549, 1, 7, 3});
CREATE_OID_VARS(OID_EMAIL, {1, 2, 840, 113549, 1, 9, 1});
CREATE_OID_VARS(OID_UNSTRUCTURED_NAME, {1, 2, 840, 113549, 1, 9, 2});
CREATE_OID_VARS(OID_CONTENT_TYPE, {1, 2, 840, 113549, 1, 9, 3});
CREATE_OID_VARS(OID_MESSAGE_DIGEST, {1, 2, 840, 113549, 1, 9, 4});
CREATE_OID_VARS(OID_SIGNING_TIME, {1, 2, 840, 113549, 1, 9, 5});
CREATE_OID_VARS(OID_COUNTER_SIGNATURE, {1, 2, 840, 113549, 1, 9, 6});
CREATE_OID_VARS(OID_CHALLENGE_PASSWORD, {1, 2, 840, 113549, 1, 9, 7});
CREATE_OID_VARS(OID_UNSTRUCTURED_ADDRESS, {1, 2, 840, 113549, 1, 9, 8});
CREATE_OID_VARS(OID_EXTENDED_CERT_ATTR, {1, 2, 840, 113549, 1, 9, 9});
CREATE_OID_VARS(OID_SIGNING_DESCRIPTION, {1, 2, 840, 113549, 1, 9, 13});
CREATE_OID_VARS(OID_EXTENSION_REQUEST, {1, 2, 840, 113549, 1, 9, 14});
CREATE_OID_VARS(OID_CAPABILITIES, {1, 2, 840, 113549, 1, 9, 15});
CREATE_OID_VARS(OID_OID_REGISTRY, {1, 2, 840, 113549, 1, 9, 16});
CREATE_OID_VARS(OID_FRIENDLYNAME, {1, 2, 840, 113549, 1, 9, 20});
CREATE_OID_VARS(OID_LOCALKEY, {1, 2, 840, 113549, 1, 9, 21});
CREATE_OID_VARS(OID_CERT_TYPES, {1, 2, 840, 113549, 1, 9, 22});
CREATE_OID_VARS(OID_CRL_TYPES, {1, 2, 840, 113549, 1, 9, 22});
CREATE_OID_VARS(OID_AA_SIGNING_CERTIFICATE, {1, 2, 840, 113549, 1, 9, 16, 2, 12});
CREATE_OID_VARS(OID_AA_SIGNING_CERTIFICATE_V2, {1, 2, 840, 113549, 1, 9, 16, 2, 47});
CREATE_OID_VARS(OID_AA_ETS_SIG_POLICY, {1, 2, 840, 113549, 1, 9, 16, 2, 15});
CREATE_OID_VARS(OID_SPQ_ETS_URI, {1, 2, 840, 113549, 1, 9, 16, 5, 1});
CREATE_OID_VARS(OID_SPQ_ETS_UNITICE, {1, 2, 840, 113549, 1, 9, 16, 5, 2});

/* content-time-stamp */
CREATE_OID_VARS(OID_AA_ETS_CONTENT_TIME_STAMP, {1, 2, 840, 113549, 1, 9, 16, 2, 20});

/* signature-time-stamp */
CREATE_OID_VARS(OID_AA_SIGNATURE_TIME_STAMP_TOKEN, {1, 2, 840, 113549, 1, 9, 16, 2, 14});

/* Об’єктний ідентифікатор даних в полі “eContentType” для позначки часу. */
CREATE_OID_VARS(OID_CT_TST_INFO, {1, 2, 840, 113549, 1, 9, 16, 1, 4});

/* complete-certificate-references */
CREATE_OID_VARS(OID_AA_ETS_CERTIFICATE_REFS, {1, 2, 840, 113549, 1, 9, 16, 2, 21});

/* complete-revocation-references */
CREATE_OID_VARS(OID_AA_ETS_REVOCATION_REFS, {1, 2, 840, 113549, 1, 9, 16, 2, 22});

/* certificate-values */
CREATE_OID_VARS(OID_AA_ETS_CERT_VALUES, {1, 2, 840, 113549, 1, 9, 16, 2, 23});

/* revocation-values */
CREATE_OID_VARS(OID_AA_ETS_REVOCATION_VALUES, {1, 2, 840, 113549, 1, 9, 16, 2, 24});

/* Розширення. */
CREATE_OID_VARS(OID_SUBJECT_DIRECTORY_ATTRIBUTES_EXTENSION, {2, 5, 29, 9});
CREATE_OID_VARS(OID_SUBJECT_KEY_IDENTIFIER_EXTENSION, {2, 5, 29, 14});
CREATE_OID_VARS(OID_KEY_USAGE_EXTENSION, {2, 5, 29, 15});
CREATE_OID_VARS(OID_PRIVATE_KEY_USAGE_PERIOD_EXTENSION, {2, 5, 29, 16});
CREATE_OID_VARS(OID_SUBJECT_ALT_NAME_EXTENSION, {2, 5, 29, 17});
CREATE_OID_VARS(OID_ISSUER_ALT_NAME_EXTENSION, {2, 5, 29, 18});
CREATE_OID_VARS(OID_BASIC_CONSTRAINTS_EXTENSION, {2, 5, 29, 19});
CREATE_OID_VARS(OID_CRL_NUMBER_EXTENSION, {2, 5, 29, 20});
CREATE_OID_VARS(OID_CRL_REASON_EXTENSION, {2, 5, 29, 21});
CREATE_OID_VARS(OID_HOLD_INSTRUCTION_CODE_EXTENSION, {2, 5, 29, 23});
CREATE_OID_VARS(OID_INVALIDITY_DATE_EXTENSION, {2, 5, 29, 24});
CREATE_OID_VARS(OID_DELTA_CRL_INDICATOR_EXTENSION, {2, 5, 29, 27});
CREATE_OID_VARS(OID_CERTIFICATE_ISSUER_EXTENSION, {2, 5, 29, 29});
CREATE_OID_VARS(OID_CRL_DISTRIBUTION_POINTS_EXTENSION, {2, 5, 29, 31});
CREATE_OID_VARS(OID_CERTIFICATE_POLICIES_EXTENSION, {2, 5, 29, 32});
CREATE_OID_VARS(OID_AUTHORITY_KEY_IDENTIFIER_EXTENSION, {2, 5, 29, 35});
CREATE_OID_VARS(OID_EXT_KEY_USAGE_EXTENSION, {2, 5, 29, 37});
CREATE_OID_VARS(OID_FRESHEST_CRL_EXTENSION, {2, 5, 29, 46});
CREATE_OID_VARS(OID_AUTHORITY_INFO_ACCESS_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 1, 1});
CREATE_OID_VARS(OID_QC_STATEMENTS_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 1, 3});
CREATE_OID_VARS(OID_SUBJECT_INFO_ACCESS_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 1, 11});
CREATE_OID_VARS(OID_NONCE_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 48, 1, 2});
CREATE_OID_VARS(OID_CRL_ID_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 48, 1, 3});
CREATE_OID_VARS(OID_ACCEPTABLE_RESPONSES_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 48, 1, 4});
CREATE_OID_VARS(OID_ARCHIVE_CUTOFF_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 48, 1, 6});
CREATE_OID_VARS(OID_SERVICE_LOCATOR_EXTENSION, {1, 3, 6, 1, 5, 5, 7, 48, 1, 7});

CREATE_OID_VARS(OID_OCSP_OID, {1, 3, 6, 1, 5, 5, 7, 48, 1});
CREATE_OID_VARS(OID_CAISSUERS_OID, {1, 3, 6, 1, 5, 5, 7, 48, 2});
CREATE_OID_VARS(OID_TSP_OID, {1, 3, 6, 1, 5, 5, 7, 48, 3});
CREATE_OID_VARS(OID_BASIC_RESPONSE, {1, 3, 6, 1, 5, 5, 7, 48, 1, 1});
CREATE_OID_VARS(OID_DIG_OID, {1, 2, 840, 113549, 1, 7, 5});
CREATE_OID_VARS(OID_ENC_OID, {1, 2, 840, 113549, 1, 7, 6});
CREATE_OID_VARS(OID_KNOWLEDGE_INFORMATION, {2, 5, 4, 2});
CREATE_OID_VARS(OID_COMMON_NAME, {2, 5, 4, 3});
CREATE_OID_VARS(OID_SURNAME, {2, 5, 4, 4});
CREATE_OID_VARS(OID_SERIAL_NUMBER, {2, 5, 4, 5});
CREATE_OID_VARS(OID_COUNTRY_NAME, {2, 5, 4, 6});
CREATE_OID_VARS(OID_LOCALITY_NAME, {2, 5, 4, 7});
CREATE_OID_VARS(OID_STATE_NAME, {2, 5, 4, 8});
CREATE_OID_VARS(OID_STREET_NAME, {2, 5, 4, 9});
CREATE_OID_VARS(OID_ORGANIZATION_NAME, {2, 5, 4, 10});
CREATE_OID_VARS(OID_ORGANIZATION_UNIT, {2, 5, 4, 11});
CREATE_OID_VARS(OID_TITLE, {2, 5, 4, 12});
CREATE_OID_VARS(OID_DESCRIPTION, {2, 5, 4, 13});
CREATE_OID_VARS(OID_BUSINESS_CATEGORY, {2, 5, 4, 15});
CREATE_OID_VARS(OID_POSTAL_CODE, {2, 5, 4, 17});
CREATE_OID_VARS(OID_POST_OFFICE_BOX, {2, 5, 4, 18});
CREATE_OID_VARS(OID_DELIVERY_NAME, {2, 5, 4, 19});
CREATE_OID_VARS(OID_GIVEN_NAME, {2, 5, 4, 42});
CREATE_OID_VARS(OID_OCSP_KEY_PURPOSE, {1, 3, 6, 1, 5, 5, 7, 3, 9});

/*OID Hmac hash func*/
CREATE_OID_VARS(OID_PKI_HMAC_SHA1, {1, 2, 840, 113549, 2, 7});

/** OID сховища закритого ключа (PKCS #5: Password-Based RFC2898). */
CREATE_OID_VARS(OID_PBES2, {1, 2, 840, 113549, 1, 5, 13});

/** OID Key Derivation Function (PKCS #5: Password-Based RFC2898). */
CREATE_OID_VARS(OID_KDF, {1, 2, 840, 113549, 1, 5, 12});

CREATE_OID_VARS(OID_ETSI_QCS, {0, 4, 0, 1862, 1});
CREATE_OID_VARS(OID_ETSI_QCS_QC_LIMIT_VALUE, {0, 4, 0, 1862, 1, 2});

OidId SUPPORTED_EXTENSIONS[] = {
    OID_SUBJECT_DIRECTORY_ATTRIBUTES_EXTENSION_ID,
    OID_SUBJECT_KEY_IDENTIFIER_EXTENSION_ID,
    OID_KEY_USAGE_EXTENSION_ID,
    OID_PRIVATE_KEY_USAGE_PERIOD_EXTENSION_ID,
    OID_SUBJECT_ALT_NAME_EXTENSION_ID,
    OID_ISSUER_ALT_NAME_EXTENSION_ID,
    OID_BASIC_CONSTRAINTS_EXTENSION_ID,
    OID_CRL_NUMBER_EXTENSION_ID,
    OID_CRL_REASON_EXTENSION_ID,
    OID_HOLD_INSTRUCTION_CODE_EXTENSION_ID,
    OID_INVALIDITY_DATE_EXTENSION_ID,
    OID_DELTA_CRL_INDICATOR_EXTENSION_ID,
    OID_CERTIFICATE_ISSUER_EXTENSION_ID,
    OID_CRL_DISTRIBUTION_POINTS_EXTENSION_ID,
    OID_CERTIFICATE_POLICIES_EXTENSION_ID,
    OID_AUTHORITY_KEY_IDENTIFIER_EXTENSION_ID,
    OID_EXT_KEY_USAGE_EXTENSION_ID,
    OID_FRESHEST_CRL_EXTENSION_ID,
    OID_AUTHORITY_INFO_ACCESS_EXTENSION_ID,
    OID_QC_STATEMENTS_EXTENSION_ID,
    OID_SUBJECT_INFO_ACCESS_EXTENSION_ID,
    OID_NONCE_EXTENSION_ID,
    OID_CRL_ID_EXTENSION_ID,
    OID_ACCEPTABLE_RESPONSES_EXTENSION_ID,
    OID_ARCHIVE_CUTOFF_EXTENSION_ID,
    OID_SERVICE_LOCATOR_EXTENSION_ID,
};

const OidNumbers *oids_get_supported_extention(int ind)
{
    int size = sizeof(SUPPORTED_EXTENSIONS) / sizeof(SUPPORTED_EXTENSIONS[0]);
    if (ind < size) {
        return oids_get_oid_numbers_by_id(SUPPORTED_EXTENSIONS[ind]);
    } else {
        return NULL;
    }
}

const NameAttr SUPPORTED_NAME_ATTRS[] = {
    {"C", OID_COUNTRY_NAME_ID},
    {"SN", OID_SERIAL_NUMBER_ID},
    {"KI", OID_KNOWLEDGE_INFORMATION_ID},
    {"CN", OID_COMMON_NAME_ID},
    {"SRN", OID_SURNAME_ID},
    {"L", OID_LOCALITY_NAME_ID},
    {"ST", OID_STATE_NAME_ID},
    {"STR", OID_STREET_NAME_ID},
    {"O", OID_ORGANIZATION_NAME_ID},
    {"OU", OID_ORGANIZATION_UNIT_ID},
    {"T", OID_TITLE_ID},
    {"DE", OID_DESCRIPTION_ID},
    {"BC", OID_BUSINESS_CATEGORY_ID},
    {"PC", OID_POSTAL_CODE_ID},
    {"PB", OID_POST_OFFICE_BOX_ID},
    {"PDON", OID_DELIVERY_NAME_ID},
    {"GN", OID_GIVEN_NAME_ID},
    {"E", OID_EMAIL_ID},
};

const NameAttr *oids_get_supported_name_attr(int ind)
{
    int size = GET_ARR_CNT(SUPPORTED_NAME_ATTRS);
    if (ind < size) {
        return &SUPPORTED_NAME_ATTRS[ind];
    } else {
        return NULL;
    }
}

#define CASE_GET_OID_ST(exp) case exp##_ID:  return &exp##_ST

const OidNumbers *oids_get_oid_numbers_by_id(OidId oid_id)
{
    switch (oid_id) {
        CASE_GET_OID_ST(OID_PKI);
        CASE_GET_OID_ST(OID_PKI_ALG);
        CASE_GET_OID_ST(OID_PKI_HASH);
        CASE_GET_OID_ST(OID_PKI_GOST3411);
        CASE_GET_OID_ST(OID_PKI_SHA224);
        CASE_GET_OID_ST(OID_PKI_SHA256);
        CASE_GET_OID_ST(OID_PKI_SHA384);
        CASE_GET_OID_ST(OID_PKI_SHA512);
        CASE_GET_OID_ST(OID_PKI_SHA1);
        CASE_GET_OID_ST(OID_PKI_HMAC_GOST3411);
        CASE_GET_OID_ST(OID_PKI_ASYM);
        CASE_GET_OID_ST(OID_PKI_DSTU4145_WITH_GOST3411);
        CASE_GET_OID_ST(OID_PKI_DSTU4145_PB_LE);
        CASE_GET_OID_ST(OID_PKI_SPECIAL_CURVES_PB);
        CASE_GET_OID_ST(OID_PKI_DSTU4145_PB_BE);
        CASE_GET_OID_ST(OID_PKI_NAMED_CURVES_PB);
        CASE_GET_OID_ST(OID_PKI_M163_PB);
        CASE_GET_OID_ST(OID_PKI_M167_PB);
        CASE_GET_OID_ST(OID_PKI_M173_PB);
        CASE_GET_OID_ST(OID_PKI_M179_PB);
        CASE_GET_OID_ST(OID_PKI_M191_PB);
        CASE_GET_OID_ST(OID_PKI_M233_PB);
        CASE_GET_OID_ST(OID_PKI_M257_PB);
        CASE_GET_OID_ST(OID_PKI_M307_PB);
        CASE_GET_OID_ST(OID_PKI_M367_PB);
        CASE_GET_OID_ST(OID_PKI_M431_PB);
        CASE_GET_OID_ST(OID_PKI_DSTU4145_ONB_LE);
        CASE_GET_OID_ST(OID_PKI_SPECIAL_CURVES_ONB);
        CASE_GET_OID_ST(OID_PKI_DSTU4145_ONB_BE);
        CASE_GET_OID_ST(OID_PKI_NAMED_CURVES_ONB);
        CASE_GET_OID_ST(OID_PKI_M173_ONB);
        CASE_GET_OID_ST(OID_PKI_M179_ONB);
        CASE_GET_OID_ST(OID_PKI_M191_ONB);
        CASE_GET_OID_ST(OID_PKI_M233_ONB);
        CASE_GET_OID_ST(OID_PKI_M431_ONB);
        CASE_GET_OID_ST(OID_GOST34310_WITH_GOST34311);
        CASE_GET_OID_ST(OID_GOST28147_DSTU);
        CASE_GET_OID_ST(OID_GOST28147_GOST);
        CASE_GET_OID_ST(OID_GOST28147_OFB);
        CASE_GET_OID_ST(OID_GOST28147_CFB);
        CASE_GET_OID_ST(OID_GOST28147_WRAP);
        CASE_GET_OID_ST(OID_DH_SINGLE_PASS_COFACTOR_DH_GOST34311KDF_SCHEME);
        CASE_GET_OID_ST(OID_PKI_CP);
        CASE_GET_OID_ST(OID_PKI_TSP_POLICY);
        CASE_GET_OID_ST(OID_PKI_UKR_EDS_CP);
        CASE_GET_OID_ST(OID_PKI_TSP_POLICY_DSTU_PB);
        CASE_GET_OID_ST(OID_PKI_TSP_POLICY_GOST);
        CASE_GET_OID_ST(OID_PKI_TSP_POLICY_DSTU_ONB);
        CASE_GET_OID_ST(OID_PKI_EKU);
        CASE_GET_OID_ST(OID_PKI_EKU_STAMP);
        CASE_GET_OID_ST(OID_PKI_DEV);
        CASE_GET_OID_ST(OID_CE_CRL_REASON);
        CASE_GET_OID_ST(OID_DATA);
        CASE_GET_OID_ST(OID_SIGNED_DATA);
        CASE_GET_OID_ST(OID_ENVELOPED_DATA);
        CASE_GET_OID_ST(OID_EMAIL);
        CASE_GET_OID_ST(OID_UNSTRUCTURED_NAME);
        CASE_GET_OID_ST(OID_CONTENT_TYPE);
        CASE_GET_OID_ST(OID_MESSAGE_DIGEST);
        CASE_GET_OID_ST(OID_SIGNING_TIME);
        CASE_GET_OID_ST(OID_COUNTER_SIGNATURE);
        CASE_GET_OID_ST(OID_CHALLENGE_PASSWORD);
        CASE_GET_OID_ST(OID_UNSTRUCTURED_ADDRESS);
        CASE_GET_OID_ST(OID_EXTENDED_CERT_ATTR);
        CASE_GET_OID_ST(OID_SIGNING_DESCRIPTION);
        CASE_GET_OID_ST(OID_EXTENSION_REQUEST);
        CASE_GET_OID_ST(OID_CAPABILITIES);
        CASE_GET_OID_ST(OID_OID_REGISTRY);
        CASE_GET_OID_ST(OID_FRIENDLYNAME);
        CASE_GET_OID_ST(OID_LOCALKEY);
        CASE_GET_OID_ST(OID_CERT_TYPES);
        CASE_GET_OID_ST(OID_CRL_TYPES);
        CASE_GET_OID_ST(OID_AA_SIGNING_CERTIFICATE);
        CASE_GET_OID_ST(OID_AA_SIGNING_CERTIFICATE_V2);
        CASE_GET_OID_ST(OID_AA_ETS_SIG_POLICY);
        CASE_GET_OID_ST(OID_SPQ_ETS_URI);
        CASE_GET_OID_ST(OID_SPQ_ETS_UNITICE);
        CASE_GET_OID_ST(OID_AA_ETS_CONTENT_TIME_STAMP);
        CASE_GET_OID_ST(OID_AA_SIGNATURE_TIME_STAMP_TOKEN);
        CASE_GET_OID_ST(OID_CT_TST_INFO);
        CASE_GET_OID_ST(OID_AA_ETS_CERTIFICATE_REFS);
        CASE_GET_OID_ST(OID_AA_ETS_REVOCATION_REFS);
        CASE_GET_OID_ST(OID_AA_ETS_CERT_VALUES);
        CASE_GET_OID_ST(OID_AA_ETS_REVOCATION_VALUES);
        CASE_GET_OID_ST(OID_SUBJECT_DIRECTORY_ATTRIBUTES_EXTENSION);
        CASE_GET_OID_ST(OID_SUBJECT_KEY_IDENTIFIER_EXTENSION);
        CASE_GET_OID_ST(OID_KEY_USAGE_EXTENSION);
        CASE_GET_OID_ST(OID_PRIVATE_KEY_USAGE_PERIOD_EXTENSION);
        CASE_GET_OID_ST(OID_SUBJECT_ALT_NAME_EXTENSION);
        CASE_GET_OID_ST(OID_ISSUER_ALT_NAME_EXTENSION);
        CASE_GET_OID_ST(OID_BASIC_CONSTRAINTS_EXTENSION);
        CASE_GET_OID_ST(OID_CRL_NUMBER_EXTENSION);
        CASE_GET_OID_ST(OID_CRL_REASON_EXTENSION);
        CASE_GET_OID_ST(OID_HOLD_INSTRUCTION_CODE_EXTENSION);
        CASE_GET_OID_ST(OID_INVALIDITY_DATE_EXTENSION);
        CASE_GET_OID_ST(OID_DELTA_CRL_INDICATOR_EXTENSION);
        CASE_GET_OID_ST(OID_CERTIFICATE_ISSUER_EXTENSION);
        CASE_GET_OID_ST(OID_CRL_DISTRIBUTION_POINTS_EXTENSION);
        CASE_GET_OID_ST(OID_CERTIFICATE_POLICIES_EXTENSION);
        CASE_GET_OID_ST(OID_AUTHORITY_KEY_IDENTIFIER_EXTENSION);
        CASE_GET_OID_ST(OID_EXT_KEY_USAGE_EXTENSION);
        CASE_GET_OID_ST(OID_FRESHEST_CRL_EXTENSION);
        CASE_GET_OID_ST(OID_AUTHORITY_INFO_ACCESS_EXTENSION);
        CASE_GET_OID_ST(OID_QC_STATEMENTS_EXTENSION);
        CASE_GET_OID_ST(OID_SUBJECT_INFO_ACCESS_EXTENSION);
        CASE_GET_OID_ST(OID_NONCE_EXTENSION);
        CASE_GET_OID_ST(OID_CRL_ID_EXTENSION);
        CASE_GET_OID_ST(OID_ACCEPTABLE_RESPONSES_EXTENSION);
        CASE_GET_OID_ST(OID_ARCHIVE_CUTOFF_EXTENSION);
        CASE_GET_OID_ST(OID_SERVICE_LOCATOR_EXTENSION);
        CASE_GET_OID_ST(OID_OCSP_OID);
        CASE_GET_OID_ST(OID_CAISSUERS_OID);
        CASE_GET_OID_ST(OID_TSP_OID);
        CASE_GET_OID_ST(OID_BASIC_RESPONSE);
        CASE_GET_OID_ST(OID_DIG_OID);
        CASE_GET_OID_ST(OID_ENC_OID);
        CASE_GET_OID_ST(OID_KNOWLEDGE_INFORMATION);
        CASE_GET_OID_ST(OID_COMMON_NAME);
        CASE_GET_OID_ST(OID_SURNAME);
        CASE_GET_OID_ST(OID_SERIAL_NUMBER);
        CASE_GET_OID_ST(OID_COUNTRY_NAME);
        CASE_GET_OID_ST(OID_LOCALITY_NAME);
        CASE_GET_OID_ST(OID_STATE_NAME);
        CASE_GET_OID_ST(OID_STREET_NAME);
        CASE_GET_OID_ST(OID_ORGANIZATION_NAME);
        CASE_GET_OID_ST(OID_ORGANIZATION_UNIT);
        CASE_GET_OID_ST(OID_TITLE);
        CASE_GET_OID_ST(OID_DESCRIPTION);
        CASE_GET_OID_ST(OID_BUSINESS_CATEGORY);
        CASE_GET_OID_ST(OID_POSTAL_CODE);
        CASE_GET_OID_ST(OID_POST_OFFICE_BOX);
        CASE_GET_OID_ST(OID_DELIVERY_NAME);
        CASE_GET_OID_ST(OID_GIVEN_NAME);
        CASE_GET_OID_ST(OID_OCSP_KEY_PURPOSE);
        CASE_GET_OID_ST(OID_PBES2);
        CASE_GET_OID_ST(OID_KDF);
        CASE_GET_OID_ST(OID_EC_PUBLIC_KEY_TYPE);
        CASE_GET_OID_ST(OID_ECDSA_WITH_SHA1);
        CASE_GET_OID_ST(OID_ECDSA_WITH_SHA224);
        CASE_GET_OID_ST(OID_ECDSA_WITH_SHA256);
        CASE_GET_OID_ST(OID_ECDSA_WITH_SHA384);
        CASE_GET_OID_ST(OID_ECDSA_WITH_SHA512);
        CASE_GET_OID_ST(OID_ECDSA_SECP_192_R1);
        CASE_GET_OID_ST(OID_ECDSA_SECP_224_R1);
        CASE_GET_OID_ST(OID_ECDSA_SECP_256_R1);
        CASE_GET_OID_ST(OID_ECDSA_SECP_384_R1);
        CASE_GET_OID_ST(OID_ECDSA_SECP_521_R1);
        CASE_GET_OID_ST(OID_ECDSA_SECP_256_K1);
        CASE_GET_OID_ST(OID_AES256_CBC);
        CASE_GET_OID_ST(OID_DES_EDE3_CBC);
        CASE_GET_OID_ST(OID_PKI_HMAC_SHA1);
        CASE_GET_OID_ST(OID_PBE_WITH_SHA1_TDES_CBC);
        CASE_GET_OID_ST(OID_ETSI_QCS);
        CASE_GET_OID_ST(OID_ETSI_QCS_QC_LIMIT_VALUE);
    }

    return NULL;
}

OidNumbers *oids_get_oid_numbers_by_oid(const OBJECT_IDENTIFIER_t *oid)
{
    OidNumbers *oid_numbers = NULL;
    int ret;

    CHECK_PARAM(oid != NULL);

    CALLOC_CHECKED(oid_numbers, sizeof(OidNumbers));
    DO(asn_get_oid_arcs(oid, &oid_numbers->numbers, &oid_numbers->numbers_len));

cleanup:

    if (ret != RET_OK) {
        oids_oid_numbers_free(oid_numbers);
    }

    return oid_numbers;
}

OidNumbers *oids_get_oid_numbers_by_str(const char *oid_str)
{
    OBJECT_IDENTIFIER_t *oid = NULL;
    OidNumbers *oid_numbers = NULL;
    int ret;

    CHECK_PARAM(oid_str != NULL);

    CALLOC_CHECKED(oid_numbers, sizeof(OidNumbers));
    DO(asn_create_oid_from_text(oid_str, &oid));
    DO(asn_get_oid_arcs(oid, &oid_numbers->numbers, &oid_numbers->numbers_len));

cleanup:

    if (ret != RET_OK) {
        oids_oid_numbers_free(oid_numbers);
    }
    ASN_FREE(&OBJECT_IDENTIFIER_desc, oid);
    return oid_numbers;
}

void oids_oid_numbers_free(OidNumbers *oid)
{
    if (oid) {
        free(oid->numbers);
        free(oid);
    }
}

OBJECT_IDENTIFIER_t *oids_get_oid_by_id(OidId oid_id)
{
    int ret = RET_OK;
    OBJECT_IDENTIFIER_t *oid = NULL;
    const OidNumbers *oid_num;

    CHECK_NOT_NULL(oid_num = oids_get_oid_numbers_by_id(oid_id));
    DO(asn_create_oid(oid_num->numbers, oid_num->numbers_len, &oid));

cleanup:

    return oid;
}
