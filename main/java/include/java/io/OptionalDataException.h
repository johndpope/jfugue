//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/io/OptionalDataException.java
//

#ifndef _JavaIoOptionalDataException_H_
#define _JavaIoOptionalDataException_H_

#import "JreEmulation.h"
#include "java/io/ObjectStreamException.h"

#define JavaIoOptionalDataException_serialVersionUID -8011121865681257820LL

@interface JavaIoOptionalDataException : JavaIoObjectStreamException {
 @public
  jboolean eof_;
  jint length_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)detailMessage;

@end

__attribute__((always_inline)) inline void JavaIoOptionalDataException_init() {}

J2OBJC_STATIC_FIELD_GETTER(JavaIoOptionalDataException, serialVersionUID, jlong)

#endif // _JavaIoOptionalDataException_H_