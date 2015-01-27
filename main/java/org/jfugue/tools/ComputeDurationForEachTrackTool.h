//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/tools/ComputeDurationForEachTrackTool.java
//

#ifndef _OrgJfugueToolsComputeDurationForEachTrackTool_H_
#define _OrgJfugueToolsComputeDurationForEachTrackTool_H_

@class IOSDoubleArray;
@class OrgJfugueTheoryNote;

#import "JreEmulation.h"
#include "org/jfugue/parser/ParserListenerAdapter.h"

@interface OrgJfugueToolsComputeDurationForEachTrackTool : OrgJfugueParserParserListenerAdapter {
 @public
  IOSDoubleArray *durations_;
  jdouble durationOfCurrentFirstNote_;
  jint currentTrack_;
}

- (instancetype)init;

- (void)onTrackChangedWithByte:(jbyte)track;

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (IOSDoubleArray *)getDurations;

- (void)copyAllFieldsTo:(OrgJfugueToolsComputeDurationForEachTrackTool *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueToolsComputeDurationForEachTrackTool_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueToolsComputeDurationForEachTrackTool, durations_, IOSDoubleArray *)

#endif // _OrgJfugueToolsComputeDurationForEachTrackTool_H_
