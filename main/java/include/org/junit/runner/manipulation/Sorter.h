//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/johnpope/Documents/gitWorkspace/j2objc/junit/build_result/java/org/junit/runner/manipulation/Sorter.java
//

#ifndef _OrgJunitRunnerManipulationSorter_H_
#define _OrgJunitRunnerManipulationSorter_H_

@class OrgJunitRunnerDescription;

#import "JreEmulation.h"
#include "java/util/Comparator.h"

@interface OrgJunitRunnerManipulationSorter : NSObject < JavaUtilComparator > {
 @public
  id<JavaUtilComparator> fComparator_;
}

- (instancetype)initWithJavaUtilComparator:(id<JavaUtilComparator>)comparator;

- (void)applyWithId:(id)object;

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

- (void)dealloc;

- (void)copyAllFieldsTo:(OrgJunitRunnerManipulationSorter *)other;

@end

FOUNDATION_EXPORT BOOL OrgJunitRunnerManipulationSorter_initialized;
J2OBJC_STATIC_INIT(OrgJunitRunnerManipulationSorter)

J2OBJC_FIELD_SETTER(OrgJunitRunnerManipulationSorter, fComparator_, id<JavaUtilComparator>)

FOUNDATION_EXPORT OrgJunitRunnerManipulationSorter *OrgJunitRunnerManipulationSorter_NULL__;
J2OBJC_STATIC_FIELD_GETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)
J2OBJC_STATIC_FIELD_SETTER(OrgJunitRunnerManipulationSorter, NULL__, OrgJunitRunnerManipulationSorter *)

@interface OrgJunitRunnerManipulationSorter_$1 : NSObject < JavaUtilComparator > {
}

- (jint)compareWithId:(OrgJunitRunnerDescription *)o1
               withId:(OrgJunitRunnerDescription *)o2;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJunitRunnerManipulationSorter_$1_init() {}

#endif // _OrgJunitRunnerManipulationSorter_H_