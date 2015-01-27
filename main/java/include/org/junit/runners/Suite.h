//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/runners/Suite.java
//

#ifndef _OrgJunitRunnersSuite_H_
#define _OrgJunitRunnersSuite_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnerRunner;
@class OrgJunitRunnersModelRunnerBuilder;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/annotation/Annotation.h"
#include "org/junit/runners/ParentRunner.h"

@interface OrgJunitRunnersSuite : OrgJunitRunnersParentRunner {
 @public
  id<JavaUtilList> fRunners_;
}

+ (OrgJunitRunnerRunner *)emptySuite;

+ (IOSObjectArray *)getAnnotatedClassesWithIOSClass:(IOSClass *)klass;

- (instancetype)initWithIOSClass:(IOSClass *)klass
withOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                        withIOSClassArray:(IOSObjectArray *)classes;

- (instancetype)initWithIOSClass:(IOSClass *)klass
               withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (instancetype)initWithOrgJunitRunnersModelRunnerBuilder:(OrgJunitRunnersModelRunnerBuilder *)builder
                                             withIOSClass:(IOSClass *)klass
                                        withIOSClassArray:(IOSObjectArray *)suiteClasses;

- (instancetype)initWithIOSClass:(IOSClass *)klass
                withJavaUtilList:(id<JavaUtilList>)runners;

- (id<JavaUtilList>)getChildren;

- (OrgJunitRunnerDescription *)describeChildWithId:(OrgJunitRunnerRunner *)child;

- (void)runChildWithId:(OrgJunitRunnerRunner *)runner
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersSuite *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersSuite_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersSuite, fRunners_, id<JavaUtilList>)
FOUNDATION_EXPORT OrgJunitRunnerRunner *OrgJunitRunnersSuite_emptySuite();

@protocol OrgJunitRunnersSuite_SuiteClasses < JavaLangAnnotationAnnotation >

@property (readonly) IOSObjectArray *value;


@end

@interface OrgJunitRunnersSuite_SuiteClasses : NSObject < OrgJunitRunnersSuite_SuiteClasses > {
 @private
  IOSObjectArray *value;
}

- (instancetype)initWithValue:(IOSObjectArray *)value_;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersSuite_SuiteClasses_init() {}

#endif // _OrgJunitRunnersSuite_H_
