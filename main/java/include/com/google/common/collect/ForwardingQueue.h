//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/collect/ForwardingQueue.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonCollectForwardingQueue_RESTRICT
#define ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonCollectForwardingQueue_RESTRICT
#if !defined (_ComGoogleCommonCollectForwardingQueue_) && (ComGoogleCommonCollectForwardingQueue_INCLUDE_ALL || ComGoogleCommonCollectForwardingQueue_INCLUDE)
#define _ComGoogleCommonCollectForwardingQueue_

#define ComGoogleCommonCollectForwardingCollection_RESTRICT 1
#define ComGoogleCommonCollectForwardingCollection_INCLUDE 1
#include "com/google/common/collect/ForwardingCollection.h"

#define JavaUtilQueue_RESTRICT 1
#define JavaUtilQueue_INCLUDE 1
#include "java/util/Queue.h"


@interface ComGoogleCommonCollectForwardingQueue : ComGoogleCommonCollectForwardingCollection < JavaUtilQueue > {
}

- (instancetype)init;

- (id<JavaUtilQueue>)delegate;

- (jboolean)offerWithId:(id)o;

- (id)poll;

- (id)remove;

- (id)peek;

- (id)element;

- (jboolean)standardOfferWithId:(id)e;

- (id)standardPeek;

- (id)standardPoll;


@end

__attribute__((always_inline)) inline void ComGoogleCommonCollectForwardingQueue_init() {}
#endif