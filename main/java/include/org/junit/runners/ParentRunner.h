//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/src/main/java/org/junit/runners/ParentRunner.java
//

#ifndef _OrgJunitRunnersParentRunner_H_
#define _OrgJunitRunnersParentRunner_H_

@class IOSClass;
@class IOSObjectArray;
@class OrgJunitRunnerDescription;
@class OrgJunitRunnerManipulationFilter;
@class OrgJunitRunnerManipulationSorter;
@class OrgJunitRunnerNotificationRunNotifier;
@class OrgJunitRunnersModelTestClass;
@protocol JavaUtilList;

#import "JreEmulation.h"
#include "java/lang/Runnable.h"
#include "java/util/Comparator.h"
#include "org/junit/runner/Runner.h"
#include "org/junit/runner/manipulation/Filterable.h"
#include "org/junit/runner/manipulation/Sortable.h"
#include "org/junit/runners/model/RunnerScheduler.h"
#include "org/junit/runners/model/Statement.h"

@interface OrgJunitRunnersParentRunner : OrgJunitRunnerRunner < OrgJunitRunnerManipulationFilterable, OrgJunitRunnerManipulationSortable > {
 @public
  OrgJunitRunnersModelTestClass *fTestClass_;
  OrgJunitRunnerManipulationSorter *fSorter_;
  id<JavaUtilList> fFilteredChildren_;
  id<OrgJunitRunnersModelRunnerScheduler> fScheduler_;
}

- (instancetype)initWithIOSClass:(IOSClass *)testClass;

- (id<JavaUtilList>)getChildren;

- (OrgJunitRunnerDescription *)describeChildWithId:(id)child;

- (void)runChildWithId:(id)child
withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)collectInitializationErrorsWithJavaUtilList:(id<JavaUtilList>)errors;

- (void)validatePublicVoidNoArgMethodsWithIOSClass:(IOSClass *)annotation
                                       withBoolean:(jboolean)isStatic
                                  withJavaUtilList:(id<JavaUtilList>)errors;

- (void)validateClassRulesWithJavaUtilList:(id<JavaUtilList>)errors;

- (OrgJunitRunnersModelStatement *)classBlockWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (OrgJunitRunnersModelStatement *)withBeforeClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withAfterClassesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (OrgJunitRunnersModelStatement *)withClassRulesWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement;

- (id<JavaUtilList>)classRules;

- (OrgJunitRunnersModelStatement *)childrenInvokerWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)runChildrenWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (NSString *)getName;

- (OrgJunitRunnersModelTestClass *)getTestClass;

- (void)runLeafWithOrgJunitRunnersModelStatement:(OrgJunitRunnersModelStatement *)statement
                   withOrgJunitRunnerDescription:(OrgJunitRunnerDescription *)description_
       withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (IOSObjectArray *)getRunnerAnnotations;

- (OrgJunitRunnerDescription *)getDescription;

- (void)runWithOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)notifier;

- (void)filterWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter;

- (void)sortWithOrgJunitRunnerManipulationSorter:(OrgJunitRunnerManipulationSorter *)sorter;

- (void)validate;

- (id<JavaUtilList>)getFilteredChildren;

- (void)sortChildWithId:(id)child;

- (jboolean)shouldRunWithOrgJunitRunnerManipulationFilter:(OrgJunitRunnerManipulationFilter *)filter
                                                   withId:(id)each;

- (id<JavaUtilComparator>)comparator;

- (void)setSchedulerWithOrgJunitRunnersModelRunnerScheduler:(id<OrgJunitRunnersModelRunnerScheduler>)scheduler;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersParentRunner *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersParentRunner_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fTestClass_, OrgJunitRunnersModelTestClass *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fSorter_, OrgJunitRunnerManipulationSorter *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fFilteredChildren_, id<JavaUtilList>)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner, fScheduler_, id<OrgJunitRunnersModelRunnerScheduler>)

@interface OrgJunitRunnersParentRunner_$1 : NSObject < OrgJunitRunnersModelRunnerScheduler > {
}

- (void)scheduleWithJavaLangRunnable:(id<JavaLangRunnable>)childStatement;

- (void)finished;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersParentRunner_$1_init() {}

@interface OrgJunitRunnersParentRunner_$2 : OrgJunitRunnersModelStatement {
 @public
  OrgJunitRunnersParentRunner *this$0_;
  OrgJunitRunnerNotificationRunNotifier *val$notifier_;
}

- (void)evaluate;

- (instancetype)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$
          withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)capture$0;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersParentRunner_$2 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersParentRunner_$2_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$2, this$0_, OrgJunitRunnersParentRunner *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$2, val$notifier_, OrgJunitRunnerNotificationRunNotifier *)

@interface OrgJunitRunnersParentRunner_$3 : NSObject < JavaLangRunnable > {
 @public
  OrgJunitRunnersParentRunner *this$0_;
  id val$each_;
  OrgJunitRunnerNotificationRunNotifier *val$notifier_;
}

- (void)run;

- (instancetype)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$
                                             withId:(id)capture$0
          withOrgJunitRunnerNotificationRunNotifier:(OrgJunitRunnerNotificationRunNotifier *)capture$1;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersParentRunner_$3 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersParentRunner_$3_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, this$0_, OrgJunitRunnersParentRunner *)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, val$each_, id)
J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$3, val$notifier_, OrgJunitRunnerNotificationRunNotifier *)

@interface OrgJunitRunnersParentRunner_$4 : NSObject < JavaUtilComparator > {
 @public
  OrgJunitRunnersParentRunner *this$0_;
}

- (jint)compareWithId:(id)o1
               withId:(id)o2;

- (instancetype)initWithOrgJunitRunnersParentRunner:(OrgJunitRunnersParentRunner *)outer$;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnersParentRunner_$4 *)other;

@end

__attribute__((always_inline)) inline void OrgJunitRunnersParentRunner_$4_init() {}

J2OBJC_FIELD_SETTER(OrgJunitRunnersParentRunner_$4, this$0_, OrgJunitRunnersParentRunner *)

#endif // _OrgJunitRunnersParentRunner_H_
