//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/FutureFallback.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentFutureFallback_RESTRICT
#define ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentFutureFallback_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentFutureFallback_) && (ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE_ALL || ComGoogleCommonUtilConcurrentFutureFallback_INCLUDE)
#define _ComGoogleCommonUtilConcurrentFutureFallback_

@class JavaLangThrowable;
@protocol ComGoogleCommonUtilConcurrentListenableFuture;


@protocol ComGoogleCommonUtilConcurrentFutureFallback < NSObject, JavaObject >

- (id<ComGoogleCommonUtilConcurrentListenableFuture>)createWithJavaLangThrowable:(JavaLangThrowable *)t;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentFutureFallback_init() {}
#endif
