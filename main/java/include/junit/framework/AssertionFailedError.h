//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/junit/framework/AssertionFailedError.java
//

#ifndef _JunitFrameworkAssertionFailedError_H_
#define _JunitFrameworkAssertionFailedError_H_

#import "JreEmulation.h"
#include "java/lang/AssertionError.h"

#define JunitFrameworkAssertionFailedError_serialVersionUID 1LL

@interface JunitFrameworkAssertionFailedError : JavaLangAssertionError {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

+ (NSString *)defaultStringWithNSString:(NSString *)message;

@end

__attribute__((always_inline)) inline void JunitFrameworkAssertionFailedError_init() {}

J2OBJC_STATIC_FIELD_GETTER(JunitFrameworkAssertionFailedError, serialVersionUID, jlong)

#endif // _JunitFrameworkAssertionFailedError_H_
