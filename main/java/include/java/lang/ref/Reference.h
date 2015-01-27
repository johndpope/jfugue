//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/lang/ref/Reference.java
//

#ifndef _JavaLangRefReference_H_
#define _JavaLangRefReference_H_

@class JavaLangRefReferenceQueue;

#import "JreEmulation.h"

@interface JavaLangRefReference : NSObject {
 @public
  __weak id referent_;
  __weak JavaLangRefReferenceQueue *queue_;
  JavaLangRefReference *queueNext_;
  JavaLangRefReference *pendingNext_;
}

- (instancetype)init;

- (instancetype)initWithId:(id)r
withJavaLangRefReferenceQueue:(JavaLangRefReferenceQueue *)q;

- (void)clear;

- (jboolean)enqueueInternal;

- (jboolean)enqueue;

- (id)get;

- (jboolean)isEnqueued;

- (void)dealloc;

- (void)strengthenReferent;

- (void)weakenReferent;

@end

__attribute__((always_inline)) inline void JavaLangRefReference_init() {}

J2OBJC_FIELD_SETTER(JavaLangRefReference, queueNext_, JavaLangRefReference *)
J2OBJC_FIELD_SETTER(JavaLangRefReference, pendingNext_, JavaLangRefReference *)

#endif // _JavaLangRefReference_H_
