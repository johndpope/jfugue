//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/UncheckedExecutionException.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentUncheckedExecutionException_RESTRICT
#define ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentUncheckedExecutionException_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentUncheckedExecutionException_) && (ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE_ALL || ComGoogleCommonUtilConcurrentUncheckedExecutionException_INCLUDE)
#define _ComGoogleCommonUtilConcurrentUncheckedExecutionException_

@class JavaLangThrowable;

#define JavaLangRuntimeException_RESTRICT 1
#define JavaLangRuntimeException_INCLUDE 1
#include "java/lang/RuntimeException.h"


#define ComGoogleCommonUtilConcurrentUncheckedExecutionException_serialVersionUID 0LL

@interface ComGoogleCommonUtilConcurrentUncheckedExecutionException : JavaLangRuntimeException {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)message;

- (instancetype)initWithNSString:(NSString *)message
           withJavaLangThrowable:(JavaLangThrowable *)cause;

- (instancetype)initWithJavaLangThrowable:(JavaLangThrowable *)cause;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentUncheckedExecutionException_init() {}

J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentUncheckedExecutionException, serialVersionUID, jlong)
#endif
