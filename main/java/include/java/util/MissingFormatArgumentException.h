//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/util/MissingFormatArgumentException.java
//

#ifndef _JavaUtilMissingFormatArgumentException_H_
#define _JavaUtilMissingFormatArgumentException_H_

#import "JreEmulation.h"
#include "java/util/IllegalFormatException.h"

#define JavaUtilMissingFormatArgumentException_serialVersionUID 19190115LL

@interface JavaUtilMissingFormatArgumentException : JavaUtilIllegalFormatException {
}

- (instancetype)initWithNSString:(NSString *)s;

- (NSString *)getFormatSpecifier;

- (NSString *)getMessage;

@end

__attribute__((always_inline)) inline void JavaUtilMissingFormatArgumentException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaUtilMissingFormatArgumentException, serialVersionUID, jlong)

#endif // _JavaUtilMissingFormatArgumentException_H_
