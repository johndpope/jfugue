//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/UncheckedTimeoutException.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentUncheckedTimeoutException_RESTRICT
#define ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUncheckedTimeoutException_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentUncheckedTimeoutException_) && (ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncheckedTimeoutException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncheckedTimeoutException_

@class JavaLangThrowable;

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"


#define ComGoogleCommonUtilConcurrentUncheckedTimeoutException_serialVersionUID 0LL

@interface ComGoogleCommonUtilConcurrentUncheckedTimeoutException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentUncheckedTimeoutException_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentUncheckedTimeoutException, serialVersionUID, jlong)
#endif
