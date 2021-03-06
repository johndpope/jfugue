//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/SecureRandomSpi.java
//

#ifndef _JavaSecuritySecureRandomSpi_H_
#define _JavaSecuritySecureRandomSpi_H_

@class IOSByteArray;

#import "JreEmulation.h"
#include "java/io/Serializable.h"

#define JavaSecuritySecureRandomSpi_serialVersionUID -2991854161009191830LL

@interface JavaSecuritySecureRandomSpi : NSObject < JavaIoSerializable > {
}

- (void)engineSetSeedWithByteArray:(IOSByteArray *)seed;

- (void)engineNextBytesWithByteArray:(IOSByteArray *)bytes;

- (IOSByteArray *)engineGenerateSeedWithInt:(jint)numBytes;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void JavaSecuritySecureRandomSpi_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaSecuritySecureRandomSpi, serialVersionUID, jlong)

#endif // _JavaSecuritySecureRandomSpi_H_
