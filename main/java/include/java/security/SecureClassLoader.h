//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/security/SecureClassLoader.java
//

#ifndef _JavaSecuritySecureClassLoader_H_
#define _JavaSecuritySecureClassLoader_H_

@class IOSByteArray;
@class IOSClass;
@class JavaNioByteBuffer;
@class JavaSecurityCodeSource;
@class JavaSecurityPermissionCollection;
@class JavaSecurityProtectionDomain;
@class JavaUtilHashMap;

#import "JreEmulation.h"
#include "java/lang/ClassLoader.h"

@interface JavaSecuritySecureClassLoader : JavaLangClassLoader {
}

- (instancetype)init;

- (instancetype)initWithJavaLangClassLoader:(JavaLangClassLoader *)parent;

- (JavaSecurityPermissionCollection *)getPermissionsWithJavaSecurityCodeSource:(JavaSecurityCodeSource *)codesource;

- (IOSClass *)defineClassWithNSString:(NSString *)name
                        withByteArray:(IOSByteArray *)b
                              withInt:(jint)off
                              withInt:(jint)len
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

- (IOSClass *)defineClassWithNSString:(NSString *)name
                withJavaNioByteBuffer:(JavaNioByteBuffer *)b
           withJavaSecurityCodeSource:(JavaSecurityCodeSource *)cs;

@end

__attribute__((always_inline)) inline void JavaSecuritySecureClassLoader_init() {}

#endif // _JavaSecuritySecureClassLoader_H_
