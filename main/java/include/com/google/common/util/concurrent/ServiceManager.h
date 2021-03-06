//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/guava/sources/com/google/common/util/concurrent/ServiceManager.java
//

#import "JreEmulation.h"

#if !ComGoogleCommonUtilConcurrentServiceManager_RESTRICT
#define ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL 1
#endif
#undef ComGoogleCommonUtilConcurrentServiceManager_RESTRICT
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_

@class ComGoogleCommonCollectImmutableMap;
@class ComGoogleCommonCollectImmutableMultimap;
@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState;
@class JavaUtilConcurrentTimeUnitEnum;
@class JavaUtilLoggingLogger;
@protocol ComGoogleCommonUtilConcurrentServiceManager_Listener;
@protocol JavaLangIterable;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilSet;


@interface ComGoogleCommonUtilConcurrentServiceManager : NSObject {
}

- (instancetype)initWithJavaLangIterable:(id<JavaLangIterable>)services;

- (instancetype)initWithJavaUtilSet:(id<JavaUtilSet>)services;

- (void)addListenerWithComGoogleCommonUtilConcurrentServiceManager_Listener:(id<ComGoogleCommonUtilConcurrentServiceManager_Listener>)listener
                                             withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (ComGoogleCommonUtilConcurrentServiceManager *)startAsync;

- (void)awaitHealthy;

- (void)awaitHealthyWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (ComGoogleCommonUtilConcurrentServiceManager *)stopAsync;

- (void)awaitStopped;

- (void)awaitStoppedWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (jboolean)isHealthy;

- (ComGoogleCommonCollectImmutableMultimap *)servicesByState;

- (ComGoogleCommonCollectImmutableMap *)startupTimes;

- (NSString *)description;

@end

FOUNDATION_EXPORT BOOL ComGoogleCommonUtilConcurrentServiceManager_initialized;
J2OBJC_STATIC_INIT(ComGoogleCommonUtilConcurrentServiceManager)

FOUNDATION_EXPORT JavaUtilLoggingLogger *ComGoogleCommonUtilConcurrentServiceManager_logger_;
J2OBJC_STATIC_FIELD_GETTER(ComGoogleCommonUtilConcurrentServiceManager, logger_, JavaUtilLoggingLogger *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_Listener_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_Listener_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_Listener_

@protocol ComGoogleCommonUtilConcurrentService;


@protocol ComGoogleCommonUtilConcurrentServiceManager_Listener < NSObject, JavaObject >

- (void)healthy;

- (void)stopped;

- (void)failureWithComGoogleCommonUtilConcurrentService:(id<ComGoogleCommonUtilConcurrentService>)service;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_Listener_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_

@class ComGoogleCommonUtilConcurrentMonitor;
@class ComGoogleCommonUtilConcurrentMonitor_Guard;
@class JavaUtilConcurrentTimeUnitEnum;
@protocol ComGoogleCommonUtilConcurrentService;
@protocol ComGoogleCommonUtilConcurrentServiceManager_Listener;
@protocol JavaUtilConcurrentExecutor;
@protocol JavaUtilList;
@protocol JavaUtilQueue;


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState : NSObject {
 @public
  ComGoogleCommonUtilConcurrentMonitor *monitor_;
  jint numberOfServices_;
  jint unstartedServices_;
  jint unstoppedServices_;
  ComGoogleCommonUtilConcurrentMonitor_Guard *awaitHealthGuard_;
  ComGoogleCommonUtilConcurrentMonitor_Guard *stoppedGuard_;
  id<JavaUtilList> listeners_;
  id<JavaUtilQueue> queuedListeners_;
}

- (instancetype)initWithInt:(jint)numberOfServices;

- (void)addListenerWithComGoogleCommonUtilConcurrentServiceManager_Listener:(id<ComGoogleCommonUtilConcurrentServiceManager_Listener>)listener
                                             withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)awaitHealthy;

- (jboolean)awaitHealthyWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

- (void)awaitStopped;

- (jboolean)awaitStoppedWithLong:(jlong)timeout
withJavaUtilConcurrentTimeUnitEnum:(JavaUtilConcurrentTimeUnitEnum *)unit;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState, monitor_, ComGoogleCommonUtilConcurrentMonitor *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState, awaitHealthGuard_, ComGoogleCommonUtilConcurrentMonitor_Guard *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState, stoppedGuard_, ComGoogleCommonUtilConcurrentMonitor_Guard *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState, listeners_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState, queuedListeners_, id<JavaUtilQueue>)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_AwaitHealthGuard_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_AwaitHealthGuard_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_AwaitHealthGuard_

@class ComGoogleCommonUtilConcurrentMonitor;
@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState;

#define ComGoogleCommonUtilConcurrentMonitor_RESTRICT 1
#define ComGoogleCommonUtilConcurrentMonitor_Guard_INCLUDE 1
#include "com/google/common/util/concurrent/Monitor.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_AwaitHealthGuard : ComGoogleCommonUtilConcurrentMonitor_Guard {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *)outer$
                                               withComGoogleCommonUtilConcurrentMonitor:(ComGoogleCommonUtilConcurrentMonitor *)m;

- (jboolean)isSatisfied;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_AwaitHealthGuard_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_StoppedGuard_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_StoppedGuard_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_StoppedGuard_

@class ComGoogleCommonUtilConcurrentMonitor;
@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState;

#define ComGoogleCommonUtilConcurrentMonitor_RESTRICT 1
#define ComGoogleCommonUtilConcurrentMonitor_Guard_INCLUDE 1
#include "com/google/common/util/concurrent/Monitor.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_StoppedGuard : ComGoogleCommonUtilConcurrentMonitor_Guard {
}

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *)outer$
                                               withComGoogleCommonUtilConcurrentMonitor:(ComGoogleCommonUtilConcurrentMonitor *)m;

- (jboolean)isSatisfied;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_StoppedGuard_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_

@class ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair:(ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_$1_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_$1_

@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$1_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_

@class ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair;
@protocol ComGoogleCommonUtilConcurrentService;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair:(ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair *)capture$0
                                                withComGoogleCommonUtilConcurrentService:(id<ComGoogleCommonUtilConcurrentService>)capture$1;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_$1_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_$1_

@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$2_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_

@class ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair:(ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair *)capture$0;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_$1_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_$1_

@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3;

#define JavaLangRunnable_RESTRICT 1
#define JavaLangRunnable_INCLUDE 1
#include "java/lang/Runnable.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_$1 : NSObject < JavaLangRunnable > {
}

- (void)run;

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3 *)outer$;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState_$3_$1_init() {}
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ServiceListener_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ServiceListener_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ServiceListener_

@class ComGoogleCommonBaseStopwatch;
@class ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState;
@class ComGoogleCommonUtilConcurrentService_StateEnum;
@class JavaLangThrowable;
@protocol ComGoogleCommonUtilConcurrentService;

#define ComGoogleCommonUtilConcurrentService_RESTRICT 1
#define ComGoogleCommonUtilConcurrentService_Listener_INCLUDE 1
#include "com/google/common/util/concurrent/Service.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_ServiceListener : NSObject < ComGoogleCommonUtilConcurrentService_Listener > {
 @public
  ComGoogleCommonBaseStopwatch *watch_;
  __weak id<ComGoogleCommonUtilConcurrentService> service_;
  ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *state_;
}

- (instancetype)initWithComGoogleCommonUtilConcurrentService:(id<ComGoogleCommonUtilConcurrentService>)service
withComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState:(ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *)state;

- (void)starting;

- (void)running;

- (void)stoppingWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

- (void)terminatedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from;

- (void)failedWithComGoogleCommonUtilConcurrentService_StateEnum:(ComGoogleCommonUtilConcurrentService_StateEnum *)from
                                           withJavaLangThrowable:(JavaLangThrowable *)failure;

- (void)finishedStartingWithBoolean:(jboolean)currentlyHealthy;

- (void)start;

- (void)startTimer;

- (jlong)startupTimeMillis;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ServiceListener_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceListener, watch_, ComGoogleCommonBaseStopwatch *)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ServiceListener, state_, ComGoogleCommonUtilConcurrentServiceManager_ServiceManagerState *)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair_

@protocol ComGoogleCommonUtilConcurrentServiceManager_Listener;
@protocol JavaLangRunnable;
@protocol JavaUtilConcurrentExecutor;


@interface ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair : NSObject {
 @public
  id<ComGoogleCommonUtilConcurrentServiceManager_Listener> listener_;
  id<JavaUtilConcurrentExecutor> executor_;
}

- (instancetype)initWithComGoogleCommonUtilConcurrentServiceManager_Listener:(id<ComGoogleCommonUtilConcurrentServiceManager_Listener>)listener
                                              withJavaUtilConcurrentExecutor:(id<JavaUtilConcurrentExecutor>)executor;

- (void)executeWithJavaLangRunnable:(id<JavaLangRunnable>)runnable;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair_init() {}

J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair, listener_, id<ComGoogleCommonUtilConcurrentServiceManager_Listener>)
J2OBJC_FIELD_SETTER(ComGoogleCommonUtilConcurrentServiceManager_ListenerExecutorPair, executor_, id<JavaUtilConcurrentExecutor>)
#endif
#if !defined (_ComGoogleCommonUtilConcurrentServiceManager_$1_) && (ComGoogleCommonUtilConcurrentServiceManager_INCLUDE_ALL || ComGoogleCommonUtilConcurrentServiceManager_$1_INCLUDE)
#define _ComGoogleCommonUtilConcurrentServiceManager_$1_

@class JavaLangLong;
@protocol JavaUtilMap_Entry;

#define ComGoogleCommonBaseFunction_RESTRICT 1
#define ComGoogleCommonBaseFunction_INCLUDE 1
#include "com/google/common/base/Function.h"


@interface ComGoogleCommonUtilConcurrentServiceManager_$1 : NSObject < ComGoogleCommonBaseFunction > {
}

- (JavaLangLong *)applyWithId:(id<JavaUtilMap_Entry>)input;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void ComGoogleCommonUtilConcurrentServiceManager_$1_init() {}
#endif
