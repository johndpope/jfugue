//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/NoSuchProviderException.java
//

#ifndef _JavaSecurityNoSuchProviderException_H_
#define _JavaSecurityNoSuchProviderException_H_

#import "JreEmulation.h"
#include "java/security/GeneralSecurityException.h"

#define JavaSecurityNoSuchProviderException_serialVersionUID 8488111756688534474LL

@interface JavaSecurityNoSuchProviderException : JavaSecurityGeneralSecurityException {
}

- (instancetype)initWithNSString:(NSString *)msg;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecurityNoSuchProviderException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecurityNoSuchProviderException, serialVersionUID, jlong)

#endif // _JavaSecurityNoSuchProviderException_H_
