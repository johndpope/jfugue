//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/charset/MalformedInputException.java
//

#ifndef _JavaNioCharsetMalformedInputException_H_
#define _JavaNioCharsetMalformedInputException_H_

#import "JreEmulation.h"
#include "java/nio/charset/CharacterCodingException.h"

#define JavaNioCharsetMalformedInputException_serialVersionUID -3438823399834806194LL

@interface JavaNioCharsetMalformedInputException : JavaNioCharsetCharacterCodingException {
}

- (instancetype)initWithInt:(jint)length;

- (jint)getInputLength;

- (NSString *)getMessage;

@end

__attribute__((always_inline)) inline void JavaNioCharsetMalformedInputException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaNioCharsetMalformedInputException, serialVersionUID, jlong)

#endif // _JavaNioCharsetMalformedInputException_H_
