//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/cert/CertificateNotYetValidException.java
//

#ifndef _JavaSecurityCertCertificateNotYetValidException_H_
#define _JavaSecurityCertCertificateNotYetValidException_H_

#import "JreEmulation.h"
#include "java/security/cert/CertificateException.h"

#define JavaSecurityCertCertificateNotYetValidException_serialVersionUID 4355919900041064702LL

@interface JavaSecurityCertCertificateNotYetValidException : JavaSecurityCertCertificateException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecurityCertCertificateNotYetValidException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityCertCertificateNotYetValidException, serialVersionUID, jlong)

#endif // _JavaSecurityCertCertificateNotYetValidException_H_
