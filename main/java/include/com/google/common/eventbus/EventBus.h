//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/eventbus/EventBus.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonEventbusEventBus_RESTRICT
#define ComGoogleCommonEventbusEventBus_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonEventbusEventBus_RESTRICT
#if !defined (_ComGoogleCommonEventbusEventBus_) && (ComGoogleCommonEventbusEventBus_INCLUDE_ALL || ComGoogleCommonEventbusEventBus_INCLUDE)
#define _ComGoogleCommonEventbusEventBus_

@class ComGoogleCommonEventbusEventHandler;
@class IOSClass;
@class JavaLangThreadLocal;
@class JavaUtilLoggingLogger;
@protocol ComGoogleCommonCacheLoadingCache;
@protocol ComGoogleCommonCollectSetMultimap;
@protocol ComGoogleCommonEventbusHandlerFindingStrategy;
@protocol JavaUtilConcurrentLocksReadWriteLock;
@protocol JavaUtilSet;


@interface ComGoogleCommonEventbusEventBus : NSObject {
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)identifier;

- (void)register__WithId:(id)object;

- (void)unregisterWithId:(id)object;

- (void)postWithId:(id)event;

- (void)enqueueEventWithId:(id)event
withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)handler;

- (void)dispatchQueuedEvents;

- (void)dispatchWithId:(id)event
withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)wrapper;

- (id<JavaUtilSet>)flattenHierarchyWithIOSClass:(IOSClass *)concreteClass;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonEventbusEventBus_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonEventbusEventBus)

FOUNDATION_EXPORT id<ComGoogleCommonCacheLoadingCache> ComGoogleCommonEventbusEventBus_flattenHierarchyCache_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonEventbusEventBus, flattenHierarchyCache_, id<ComGoogleCommonCacheLoadingCache>)
#endif
#if !defined (_ComGoogleCommonEventbusEventBus_EventWithHandler_) && (ComGoogleCommonEventbusEventBus_INCLUDE_ALL || ComGoogleCommonEventbusEventBus_EventWithHandler_INCLUDE)
#define _ComGoogleCommonEventbusEventBus_EventWithHandler_

@class ComGoogleCommonEventbusEventHandler;


@interface ComGoogleCommonEventbusEventBus_EventWithHandler : NSObject {
 @public
  id event_;
  ComGoogleCommonEventbusEventHandler *handler_;
}

- (instancetype)initWithId:(id)event
withComGoogleCommonEventbusEventHandler:(ComGoogleCommonEventbusEventHandler *)handler;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusEventBus_EventWithHandler_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonEventbusEventBus_EventWithHandler, event_, id)
J2OBJC_FIELD_SETTER(ComGoogleCommonEventbusEventBus_EventWithHandler, handler_, ComGoogleCommonEventbusEventHandler *)
#endif
#if !defined (_ComGoogleCommonEventbusEventBus_$1_) && (ComGoogleCommonEventbusEventBus_INCLUDE_ALL || ComGoogleCommonEventbusEventBus_$1_INCLUDE)
#define _ComGoogleCommonEventbusEventBus_$1_

@class IOSClass;
@protocol JavaUtilSet;

#define ComGoogleCommonCacheCacheLoader_RESTRICT 1
#define ComGoogleCommonCacheCacheLoader_INCLUDE 1
#include "com/google/common/cache/CacheLoader.h"


@interface ComGoogleCommonEventbusEventBus_$1 : ComGoogleCommonCacheCacheLoader {
}

- (id<JavaUtilSet>)load__WithId:(IOSClass *)concreteClass;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusEventBus_$1_init() {}
#endif
#if !defined (_ComGoogleCommonEventbusEventBus_$2_) && (ComGoogleCommonEventbusEventBus_INCLUDE_ALL || ComGoogleCommonEventbusEventBus_$2_INCLUDE)
#define _ComGoogleCommonEventbusEventBus_$2_

@protocol JavaUtilQueue;

#define JavaLangThreadLocal_RESTRICT 1
#define JavaLangThreadLocal_INCLUDE 1
#include "java/lang/ThreadLocal.h"


@interface ComGoogleCommonEventbusEventBus_$2 : JavaLangThreadLocal {
}

- (id<JavaUtilQueue>)initialValue OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusEventBus_$2_init() {}
#endif
#if !defined (_ComGoogleCommonEventbusEventBus_$3_) && (ComGoogleCommonEventbusEventBus_INCLUDE_ALL || ComGoogleCommonEventbusEventBus_$3_INCLUDE)
#define _ComGoogleCommonEventbusEventBus_$3_

@class JavaLangBoolean;

#define JavaLangThreadLocal_RESTRICT 1
#define JavaLangThreadLocal_INCLUDE 1
#include "java/lang/ThreadLocal.h"


@interface ComGoogleCommonEventbusEventBus_$3 : JavaLangThreadLocal {
}

- (JavaLangBoolean *)initialValue OBJC_METHOD_FAMILY_NONE;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonEventbusEventBus_$3_init() {}
#endif