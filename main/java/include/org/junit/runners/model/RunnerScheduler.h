//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/runners/model/RunnerScheduler.java
//

#ifndef _OrgJunitRunnersModelRunnerScheduler_H_
#define _OrgJunitRunnersModelRunnerScheduler_H_

@protocol JavaLangRunnable;

#import "JreEmulation.h"

@protocol OrgJunitRunnersModelRunnerScheduler < NSObject, JavaObject >

- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;

- (void)finished;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersModelRunnerScheduler_init() {}

#endif // _OrgJunitRunnersModelRunnerScheduler_H_