//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/SettableFuture.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentSettableFuture_RESTRICT
#define ComGoogleCommonUtilConcurrentSettableFuture_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentSettableFuture_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentSettableFuture_) && (ComGoogleCommonUtilConcurrentSettableFuture_INCLUDE_ALL || ComGoogleCommonUtilConcurrentSettableFuture_INCLUDE)
#define _ComGoogleCommonUtilConcurrentSettableFuture_

@class JavaLangThrowable;

#define ComGoogleCommonUtilConcurrentAbstractFuture_RESTRICT 1
#define ComGoogleCommonUtilConcurrentAbstractFuture_INCLUDE 1
#include "com/google/common/util/concurrent/AbstractFuture.h"


@interface ComGoogleCommonUtilConcurrentSettableFuture : ComGoogleCommonUtilConcurrentAbstractFuture {
}

+ (ComGoogleCommonUtilConcurrentSettableFuture *)create;

- (jboolean)setWithId:(id)value;

- (jboolean)setExceptionWithJavaLangThrowable:(JavaLangThrowable *)throwable;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentSettableFuture_init() {}
FOUNDATION_EXPORT ComGoogleCommonUtilConcurrentSettableFuture *ComGoogleCommonUtilConcurrentSettableFuture_create();
#endif
