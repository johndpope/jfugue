//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/temporal/TemporalEvents.java
//

#ifndef _OrgJfugueTemporalTemporalEvents_H_
#define _OrgJfugueTemporalTemporalEvents_H_

@class IOSByteArray;
@class OrgJfugueParserParser;
@class OrgJfugueTheoryChord;
@class OrgJfugueTheoryNote;

#import "JreEmulation.h"
#include "org/jfugue/temporal/DurationTemporalEvent.h"
#include "org/jfugue/temporal/TemporalEvent.h"

@interface OrgJfugueTemporalTemporalEvents : NSObject {
}

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_init() {}

@interface OrgJfugueTemporalTemporalEvents_TrackEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte track_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)track;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TrackEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_TrackEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_LayerEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte layer_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)layer;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_LayerEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_LayerEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_InstrumentEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte instrument_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)instrument;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_InstrumentEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_InstrumentEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_TempoEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jint tempoBPM_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                                withInt:(jint)tempoBPM;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TempoEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_TempoEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_KeySignatureEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte key_, scale__;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)key
                                               withByte:(jbyte)scale_;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_KeySignatureEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_KeySignatureEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_TimeSignatureEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte numerator_, denominator_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)numerator
                                               withByte:(jbyte)denominator;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TimeSignatureEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_TimeSignatureEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_BarEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jlong barId_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withLong:(jlong)barId;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_BarEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_BarEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_PitchWheelEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte lsb_, msb_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)lsb
                                               withByte:(jbyte)msb;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_PitchWheelEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_PitchWheelEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_ChannelPressureEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte pressure_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)pressure;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ChannelPressureEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_ChannelPressureEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte key_, pressure_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)key
                                               withByte:(jbyte)pressure;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  IOSByteArray *bytes_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                          withByteArray:(IOSByteArray *)bytes;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent, bytes_, IOSByteArray *)

@interface OrgJfugueTemporalTemporalEvents_ControllerEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  jbyte controller_, value_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)controller
                                               withByte:(jbyte)value;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ControllerEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_ControllerEvent_init() {}

@interface OrgJfugueTemporalTemporalEvents_LyricEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  NSString *lyric_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)lyric;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_LyricEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_LyricEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_LyricEvent, lyric_, NSString *)

@interface OrgJfugueTemporalTemporalEvents_MarkerEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  NSString *marker_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)marker;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_MarkerEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_MarkerEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_MarkerEvent, marker_, NSString *)

@interface OrgJfugueTemporalTemporalEvents_UserEvent : NSObject < OrgJfugueTemporalTemporalEvent > {
 @public
  NSString *id__;
  id message_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)id_
                                                 withId:(id)message;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_UserEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_UserEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_UserEvent, id__, NSString *)
J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_UserEvent, message_, id)

@interface OrgJfugueTemporalTemporalEvents_NoteEvent : NSObject < OrgJfugueTemporalDurationTemporalEvent > {
 @public
  OrgJfugueTheoryNote *note_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                withOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (jdouble)getDuration;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_NoteEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_NoteEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_NoteEvent, note_, OrgJfugueTheoryNote *)

@interface OrgJfugueTemporalTemporalEvents_ChordEvent : NSObject < OrgJfugueTemporalDurationTemporalEvent > {
 @public
  OrgJfugueTheoryChord *chord_;
}

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                               withOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord;

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser;

- (jdouble)getDuration;

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ChordEvent *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueTemporalTemporalEvents_ChordEvent_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueTemporalTemporalEvents_ChordEvent, chord_, OrgJfugueTheoryChord *)

#endif // _OrgJfugueTemporalTemporalEvents_H_
