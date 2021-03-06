//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/runners/MockitoJUnitRunner.java
//

#ifndef _OrgMockitoRunnersMockitoJUnitRunner_H_
#define _OrgMockitoRunnersMockitoJUnitRunner_H_

@class IOSClass;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerNotificationRunNotifier;
@protocol OrgMockitoInternalRunnersRunnerImpl;

#import "JreEmulation.h"
#include "org/junit/runner/Runner.h"
#include "org/junit/runner/manipulation/Filterable.h"

@interface OrgMockitoRunnersMockitoJUnitRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable > {
 @public
  id<OrgMockitoInternalRunnersRunnerImpl> runner_;
}

- (instancetype)initWithIOSClass:(IOSClass *)klass;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnerDescription *)getDescription;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgMockitoRunnersMockitoJUnitRunner *)other;

@end

__attribute__((always_inline)) inline void OrgMockitoRunnersMockitoJUnitRunner_init() {}

J2OBJC_FIELD_SETTER(OrgMockitoRunnersMockitoJUnitRunner, runner_, id<OrgMockitoInternalRunnersRunnerImpl>)

#endif // _OrgMockitoRunnersMockitoJUnitRunner_H_
