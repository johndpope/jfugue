//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/OutOfMemoryError.java
//

#ifndef _JavaLangOutOfMemoryError_H_
#define _JavaLangOutOfMemoryError_H_

#import "JreEmulation.h"
#include "java/lang/VirtualMachineError.h"

#define JavaLangOutOfMemoryError_serialVersionUID 8228564086184010517LL

@interface JavaLangOutOfMemoryError : JavaLangVirtualMachineError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaLangOutOfMemoryError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaLangOutOfMemoryError, serialVersionUID, jlong)

#endif // _JavaLangOutOfMemoryError_H_
