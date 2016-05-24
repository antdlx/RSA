#include <antdlx_com_rsa_RSAHelper.h>

/*
 * Class:     antdlx_com_rsa_RSAHelper
 * Method:    GetAPublicKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_antdlx_com_rsa_RSAHelper_GetAPublicKey
        (JNIEnv *env, jobject){
        return env->NewStringUTF("MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCr34T3rs/w8r7LJI8mdda1fyXp\r"
                                         "LBxvix8piI7TiB3u3t4d8M65A2gmt5ScEGoQbN3T2Fnb2dVxKSxrVXq+S8w46IAo\r"
                                         "E2ZVQ4h//mfhK33fBW1yC5y2bkFuPgzcFr1WMMMpMziM1eabjjb6/ivhT05GwuoJ\r"
                                         "qV22/xWQCNuqcorQbwIDAQAB");
}

/*
 * Class:     antdlx_com_rsa_RSAHelper
 * Method:    GetAPrivateKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_antdlx_com_rsa_RSAHelper_GetAPrivateKey
        (JNIEnv *env, jobject){
    return env->NewStringUTF("MIICdQIBADANBgkqhkiG9w0BAQEFAASCAl8wggJbAgEAAoGBAKvfhPeuz/Dyvssk\r"
                                     "jyZ11rV/JeksHG+LHymIjtOIHe7e3h3wzrkDaCa3lJwQahBs3dPYWdvZ1XEpLGtV\r"
                                     "er5LzDjogCgTZlVDiH/+Z+Erfd8FbXILnLZuQW4+DNwWvVYwwykzOIzV5puONvr+\r"
                                     "K+FPTkbC6gmpXbb/FZAI26pyitBvAgMBAAECgYBESnPS1irZWhplLQmUBo5hXzv5\r"
                                     "AgXqbCTdo9zcP+Fk4DjxPJVm/euMNrVdrUf3bspVOkm6CTu90tZLb5NtuUBTVTTD\r"
                                     "K73QUkQRHaYggWP6bpAOfEuAHgoPUDL5Nk9cCPH3kbUVBxs4w2LJ4SYbF6kwYMBk\r"
                                     "7jANP5VLveU365HzAQJBAOD0msqE52jdWcdwSxLbl4cY1Um8kDpOtQxsJpLxEgSu\r"
                                     "7oauiKVpkAhoKOnjmDvtVspox589Oy/BhGE0xyCWGLECQQDDl5TUeLVYOgUWQcUN\r"
                                     "0KTnEMSW1eGvZ4rE6daI02Z1tqH7TIagKp95RJV7O6j4SBWLpe5LCpXst70h8MKY\r"
                                     "P8MfAkAScx1K5NGR4S2e1M/jcQ0hcGD11jhB//iLV0dmn8zpg2tesmvUnS7J8bkB\r"
                                     "TcBLkfCfUy6kGcKD7SwtSMXYH1dRAkAvHA5r0psTIf5hqvu0ZSGiyeYf0momXlEN\r"
                                     "NqlGkWxnQ9Ll/TubzkhU5BEA+pCrJGmUFiY8CtOrjWHPj/a+xvTPAkBfUuJTWhXx\r"
                                     "r28fq12P/0Tct3CWszL282RTkvlB0zEbMzjg3bXkA4kECe/HwGmPXCN8+UgsgQ65\r"
                                     "A/6tgOarGrCF");
}

/*
 * Class:     antdlx_com_rsa_RSAHelper
 * Method:    GetBPublicKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_antdlx_com_rsa_RSAHelper_GetBPublicKey
        (JNIEnv *env, jobject){
    return env->NewStringUTF("MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDJcnSTxRtM6hhA4YgmFkgavh5d\r"
                                     "HU8rTuloq+nRotj7Tau5qE8x7aeftCuT0j07KMEA8QGLvaQfsvDmnjzohjY+YtTp\r"
                                     "DPYY6jDivKUvKkhiHH2YsylLdJqSNfOjVg+hPqsM6dCp2uRXVnIkVTl7VmlAVAqk\r"
                                     "jvRCpN8jwv6u/FwsPQIDAQAB");
}

/*
 * Class:     antdlx_com_rsa_RSAHelper
 * Method:    GetBPrivateKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_antdlx_com_rsa_RSAHelper_GetBPrivateKey
        (JNIEnv *env, jobject){
    return env->NewStringUTF("MIICdQIBADANBgkqhkiG9w0BAQEFAASCAl8wggJbAgEAAoGBAMlydJPFG0zqGEDh\r"
                                     "iCYWSBq+Hl0dTytO6Wir6dGi2PtNq7moTzHtp5+0K5PSPTsowQDxAYu9pB+y8Oae\r"
                                     "POiGNj5i1OkM9hjqMOK8pS8qSGIcfZizKUt0mpI186NWD6E+qwzp0Kna5FdWciRV\r"
                                     "OXtWaUBUCqSO9EKk3yPC/q78XCw9AgMBAAECgYA5pVka2DLBxdN+7YsKayHjFTiX\r"
                                     "KMX4/LHqVBeq99DjyQw1KqbPANUQ7Hvz5xvCjBz+6fipRnFq6MfrFqkTWSS4H3Hz\r"
                                     "9xMPO5+xWjT3qirkmmHKsGtokgwyznfqr5DY9aKzqLJl3ze/zTilXoZi9EgioQtR\r"
                                     "bSjl7FzYFBJTVSnXOQJBAO2LOb5fEq4l2oY9oPArscFA5AXKvDu4QV5vN/ZPVXlm\r"
                                     "u2Q+ZVvCbkjcHvloYS2rdQO1JGlKR3SFEAV8+EYDDTsCQQDZGULaoRgbdebMMyrB\r"
                                     "KWaLeOqz5JfUUxV7ERW9BGeHaGR6DLQ+hDvs2KB+TRUZcCNext/ieOEnafzLiKgB\r"
                                     "DfTnAkBXuq+cy2gOwRQvt9sUWE7R3LFaIkHanHYn9lNouGwM5hAXOaQde3VXm1Ql\r"
                                     "MJOTVltk/yVvbWtucSY1oK3gzYe5AkBPBODOjwAlTp65CI6xTA5lCZfz7mpNAAi7\r"
                                     "iJZu/CFqqdaYjfM1JhBhvt972Taq0aQuJRjsZ68cF3nJ422zJI9VAkAdROCKMroP\r"
                                     "yBVl+oKFIXN0dRq+82GN2N3FmLC+b1F3FC8dOk7UWWMmdS1u/uJdLBMKhmRoHjsK\r"
                                     "tyUhiI5k2mTR");
}