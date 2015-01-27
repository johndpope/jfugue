//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: android/libcore/luni/src/main/java/java/nio/SelectorImpl.java
//

#ifndef _JavaNioSelectorImpl_H_
#define _JavaNioSelectorImpl_H_

@class IOSObjectArray;
@class JavaIoFileDescriptor;
@class JavaNioChannelsSelectionKey;
@class JavaNioChannelsSelector;
@class JavaNioChannelsSpiAbstractSelectableChannel;
@class JavaNioChannelsSpiSelectorProvider;
@class JavaUtilUnsafeArrayList;
@protocol JavaUtilCollection;
@protocol JavaUtilIterator;

#import "JreEmulation.h"
#include "java/nio/channels/spi/AbstractSelector.h"
#include "java/util/Set.h"

@interface JavaNioSelectorImpl : JavaNioChannelsSpiAbstractSelector {
 @public
  id keysLock_;
}

- (instancetype)initWithJavaNioChannelsSpiSelectorProvider:(JavaNioChannelsSpiSelectorProvider *)selectorProvider;

- (void)implCloseSelector;

- (JavaNioChannelsSelectionKey *)register__WithJavaNioChannelsSpiAbstractSelectableChannel:(JavaNioChannelsSpiAbstractSelectableChannel *)channel
                                                                                   withInt:(jint)operations
                                                                                    withId:(id)attachment;

- (id<JavaUtilSet>)keys;

- (jint)select;

- (jint)selectWithLong:(jlong)timeout;

- (jint)selectNow;

- (id<JavaUtilSet>)selectedKeys;

- (JavaNioChannelsSelector *)wakeup;

@end

__attribute__((always_inline)) inline void JavaNioSelectorImpl_init() {}

J2OBJC_FIELD_SETTER(JavaNioSelectorImpl, keysLock_, id)

@interface JavaNioSelectorImpl_UnaddableSet : NSObject < JavaUtilSet > {
}

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)set;

- (jboolean)isEqual:(id)object;

- (NSUInteger)hash;

- (jboolean)addWithId:(id)object;

- (jboolean)addAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (void)clear;

- (jboolean)containsWithId:(id)object;

- (jboolean)containsAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)isEmpty;

- (id<JavaUtilIterator>)iterator;

- (jboolean)removeWithId:(id)object;

- (jboolean)removeAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jboolean)retainAllWithJavaUtilCollection:(id<JavaUtilCollection>)c;

- (jint)size;

- (IOSObjectArray *)toArray;

- (IOSObjectArray *)toArrayWithNSObjectArray:(IOSObjectArray *)a;


@end

__attribute__((always_inline)) inline void JavaNioSelectorImpl_UnaddableSet_init() {}

#endif // _JavaNioSelectorImpl_H_