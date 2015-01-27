//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/junit/framework/TestResult.java
//

#ifndef _JunitFrameworkTestResult_H_
#define _JunitFrameworkTestResult_H_

@class JavaLangThrowable;
@class JunitFrameworkAssertionFailedError;
@class JunitFrameworkTestCase;
@protocol JavaUtilEnumeration;
@protocol JavaUtilList;
@protocol JunitFrameworkTest;
@protocol JunitFrameworkTestListener;

#import "JreEmulation.h"
#include "junit/framework/Protectable.h"

@interface JunitFrameworkTestResult : NSObject {
 @public
  id<JavaUtilList> fFailures_;
  id<JavaUtilList> fErrors_;
  id<JavaUtilList> fListeners_;
  jint fRunTests_;
  jboolean fStop_;
}

- (instancetype)init;

- (void)addErrorWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
                 withJavaLangThrowable:(JavaLangThrowable *)t;

- (void)addFailureWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
  withJunitFrameworkAssertionFailedError:(JunitFrameworkAssertionFailedError *)t;

- (void)addListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

- (void)removeListenerWithJunitFrameworkTestListener:(id<JunitFrameworkTestListener>)listener;

- (id<JavaUtilList>)cloneListeners;

- (void)endTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (jint)errorCount;

- (id<JavaUtilEnumeration>)errors;

- (jint)failureCount;

- (id<JavaUtilEnumeration>)failures;

- (void)runWithJunitFrameworkTestCase:(JunitFrameworkTestCase *)test;

- (jint)runCount;

- (void)runProtectedWithJunitFrameworkTest:(id<JunitFrameworkTest>)test
             withJunitFrameworkProtectable:(id<JunitFrameworkProtectable>)p;

- (jboolean)shouldStop;

- (void)startTestWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)stop;

- (jboolean)wasSuccessful;

- (void)dealloc;

- (void)copyAllFieldsTo:(JunitFrameworkTestResult *)other;

@end

__attribute__((always_inline)) inline void JunitFrameworkTestResult_init() {}

J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fFailures_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fErrors_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(JunitFrameworkTestResult, fListeners_, id<JavaUtilList>)

@interface JunitFrameworkTestResult_$1 : NSObject < JunitFrameworkProtectable > {
 @public
  JunitFrameworkTestCase *val$test_;
}

- (void)protect;

- (instancetype)initWithJunitFrameworkTestCase:(JunitFrameworkTestCase *)capture$0;

- (void)dealloc;

- (void)copyAllFieldsTo:(JunitFrameworkTestResult_$1 *)other;

@end

__attribute__((always_inline)) inline void JunitFrameworkTestResult_$1_init() {}

J2OBJC_FIELD_SETTER(JunitFrameworkTestResult_$1, val$test_, JunitFrameworkTestCase *)

#endif // _JunitFrameworkTestResult_H_
