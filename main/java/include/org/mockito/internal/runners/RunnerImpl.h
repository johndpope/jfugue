//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/testing/mockito/build_result/java/org/mockito/internal/runners/RunnerImpl.java
//

#ifndef _OrgMockitoInternalRunnersRunnerImpl_H_
#define _OrgMockitoInternalRunnersRunnerImpl_H_

@class OrgJunitRunnerDescription;
@class OrgJunitRunnerNotificationRunNotifier;

#import "JreEmulation.h"
#include "org/junit/runner/manipulation/Filterable.h"

@protocol OrgMockitoInternalRunnersRunnerImpl < OrgJunitRunnerManipulationFilterable, NSObject, JavaObject >
- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnerDescription *)getDescription;

@end

__attribute__((always_inline)) inline void OrgMockitoInternalRunnersRunnerImpl_init() {}

#endif // _OrgMockitoInternalRunnersRunnerImpl_H_