//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/junit/extensions/TestDecorator.java
//

#ifndef _JunitExtensionsTestDecorator_H_
#define _JunitExtensionsTestDecorator_H_

@class JunitFrameworkTestResult;

#import "JreEmulation.h"
#include "junit/framework/Assert.h"
#include "junit/framework/Test.h"

@interface JunitExtensionsTestDecorator : JunitFrameworkAssert < JunitFrameworkTest > {
 @public
  id<JunitFrameworkTest> fTest_;
}

- (instancetype)initWithJunitFrameworkTest:(id<JunitFrameworkTest>)test;

- (void)basicRunWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (jint)countTestCases;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (NSString *)description;

- (id<JunitFrameworkTest>)getTest;

- (void)dealloc;

- (void)copyAllFieldsTo:(JunitExtensionsTestDecorator *)other;

@end

__attribute__((always_inline)) inline void JunitExtensionsTestDecorator_init() {}

J2OBJC_FIELD_SETTER(JunitExtensionsTestDecorator, fTest_, id<JunitFrameworkTest>)

#endif // _JunitExtensionsTestDecorator_H_
