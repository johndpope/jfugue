//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/junit/framework/JUnit4TestCaseFacade.java
//

#ifndef _JunitFrameworkJUnit4TestCaseFacade_H_
#define _JunitFrameworkJUnit4TestCaseFacade_H_

@class JunitFrameworkTestResult;
@class OrgJunitRunnerDescription;

#import "JreEmulation.h"
#include "junit/framework/Test.h"
#include "org/junit/runner/Describable.h"

@interface JunitFrameworkJUnit4TestCaseFacade : NSObject < JunitFrameworkTest, OrgJunitRunnerDescribable > {
 @public
  OrgJunitRunnerDescription *fDescription_;
}

- (instancetype)initWithOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_;

- (NSString *)description;

- (jint)countTestCases;

- (void)runWithJunitFrameworkTestResult:(JunitFrameworkTestResult *)result;

- (OrgJunitRunnerDescription *)getDescription;

- (void)dealloc;

- (void)copyAllFieldsTo:(JunitFrameworkJUnit4TestCaseFacade *)other;

@end

__attribute__((always_inline)) inline void JunitFrameworkJUnit4TestCaseFacade_init() {}

J2OBJC_FIELD_SETTER(JunitFrameworkJUnit4TestCaseFacade, fDescription_, OrgJunitRunnerDescription *)

#endif // _JunitFrameworkJUnit4TestCaseFacade_H_
