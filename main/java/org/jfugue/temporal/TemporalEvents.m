//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/temporal/TemporalEvents.java
//

#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "org/jfugue/parser/Parser.h"
#include "org/jfugue/temporal/TemporalEvents.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Note.h"

@implementation OrgJfugueTemporalTemporalEvents

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents = { "TemporalEvents", "org.jfugue.temporal", NULL, 0x1, 1, methods, 0, NULL, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_TrackEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)track {
  if (self = [super init]) {
    self->track_ = track;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireTrackChangedWithByte:track_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TrackEvent *)other {
  [super copyAllFieldsTo:other];
  other->track_ = track_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:", "TrackEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "track_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_TrackEvent = { "TrackEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_TrackEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_LayerEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)layer {
  if (self = [super init]) {
    self->layer_ = layer;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireLayerChangedWithByte:layer_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_LayerEvent *)other {
  [super copyAllFieldsTo:other];
  other->layer_ = layer_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:", "LayerEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "layer_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_LayerEvent = { "LayerEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_LayerEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_InstrumentEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)instrument {
  if (self = [super init]) {
    self->instrument_ = instrument;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireInstrumentParsedWithByte:instrument_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_InstrumentEvent *)other {
  [super copyAllFieldsTo:other];
  other->instrument_ = instrument_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:", "InstrumentEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "instrument_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_InstrumentEvent = { "InstrumentEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_InstrumentEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_TempoEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                                withInt:(jint)tempoBPM {
  if (self = [super init]) {
    self->tempoBPM_ = tempoBPM;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireTempoChangedWithInt:tempoBPM_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TempoEvent *)other {
  [super copyAllFieldsTo:other];
  other->tempoBPM_ = tempoBPM_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withInt:", "TempoEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "tempoBPM_", NULL, 0x2, "I", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_TempoEvent = { "TempoEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_TempoEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_KeySignatureEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)key
                                               withByte:(jbyte)scale_ {
  if (self = [super init]) {
    self->key_ = key;
    self->scale__ = scale_;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireKeySignatureParsedWithByte:key_ withByte:scale__];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_KeySignatureEvent *)other {
  [super copyAllFieldsTo:other];
  other->key_ = key_;
  other->scale__ = scale__;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:withByte:", "KeySignatureEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "key_", NULL, 0x2, "B", NULL,  },
    { "scale__", "scale", 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_KeySignatureEvent = { "KeySignatureEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_KeySignatureEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_TimeSignatureEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)numerator
                                               withByte:(jbyte)denominator {
  if (self = [super init]) {
    self->numerator_ = numerator;
    self->denominator_ = denominator;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireKeySignatureParsedWithByte:numerator_ withByte:denominator_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_TimeSignatureEvent *)other {
  [super copyAllFieldsTo:other];
  other->numerator_ = numerator_;
  other->denominator_ = denominator_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:withByte:", "TimeSignatureEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "numerator_", NULL, 0x2, "B", NULL,  },
    { "denominator_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_TimeSignatureEvent = { "TimeSignatureEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_TimeSignatureEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_BarEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withLong:(jlong)barId {
  if (self = [super init]) {
    self->barId_ = barId;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireBarLineParsedWithLong:barId_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_BarEvent *)other {
  [super copyAllFieldsTo:other];
  other->barId_ = barId_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withLong:", "BarEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "barId_", NULL, 0x2, "J", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_BarEvent = { "BarEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_BarEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_PitchWheelEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)lsb
                                               withByte:(jbyte)msb {
  if (self = [super init]) {
    self->lsb_ = lsb;
    self->msb_ = msb;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireKeySignatureParsedWithByte:lsb_ withByte:msb_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_PitchWheelEvent *)other {
  [super copyAllFieldsTo:other];
  other->lsb_ = lsb_;
  other->msb_ = msb_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:withByte:", "PitchWheelEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "lsb_", NULL, 0x2, "B", NULL,  },
    { "msb_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_PitchWheelEvent = { "PitchWheelEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_PitchWheelEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_ChannelPressureEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)pressure {
  if (self = [super init]) {
    self->pressure_ = pressure;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireChannelPressureParsedWithByte:pressure_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ChannelPressureEvent *)other {
  [super copyAllFieldsTo:other];
  other->pressure_ = pressure_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:", "ChannelPressureEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "pressure_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_ChannelPressureEvent = { "ChannelPressureEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_ChannelPressureEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)key
                                               withByte:(jbyte)pressure {
  if (self = [super init]) {
    self->key_ = key;
    self->pressure_ = pressure;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) firePolyphonicPressureParsedWithByte:key_ withByte:pressure_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent *)other {
  [super copyAllFieldsTo:other];
  other->key_ = key_;
  other->pressure_ = pressure_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:withByte:", "PolyphonicPressureEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "key_", NULL, 0x2, "B", NULL,  },
    { "pressure_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent = { "PolyphonicPressureEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_PolyphonicPressureEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                          withByteArray:(IOSByteArray *)bytes {
  if (self = [super init]) {
    self->bytes_ = bytes;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireSystemExclusiveParsedWithByteArray:bytes_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent *)other {
  [super copyAllFieldsTo:other];
  other->bytes_ = bytes_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByteArray:", "SystemExclusiveEvent", NULL, 0x81, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "bytes_", NULL, 0x2, "[B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent = { "SystemExclusiveEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_SystemExclusiveEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_ControllerEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                               withByte:(jbyte)controller
                                               withByte:(jbyte)value {
  if (self = [super init]) {
    self->controller_ = controller;
    self->value_ = value;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireControllerEventParsedWithByte:controller_ withByte:value_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ControllerEvent *)other {
  [super copyAllFieldsTo:other];
  other->controller_ = controller_;
  other->value_ = value_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withByte:withByte:", "ControllerEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "controller_", NULL, 0x2, "B", NULL,  },
    { "value_", NULL, 0x2, "B", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_ControllerEvent = { "ControllerEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_ControllerEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_LyricEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)lyric {
  if (self = [super init]) {
    self->lyric_ = lyric;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireLyricParsedWithNSString:lyric_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_LyricEvent *)other {
  [super copyAllFieldsTo:other];
  other->lyric_ = lyric_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withNSString:", "LyricEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "lyric_", NULL, 0x2, "Ljava.lang.String;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_LyricEvent = { "LyricEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_LyricEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_MarkerEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)marker {
  if (self = [super init]) {
    self->marker_ = marker;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireMarkerParsedWithNSString:marker_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_MarkerEvent *)other {
  [super copyAllFieldsTo:other];
  other->marker_ = marker_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withNSString:", "MarkerEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "marker_", NULL, 0x2, "Ljava.lang.String;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_MarkerEvent = { "MarkerEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_MarkerEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_UserEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                           withNSString:(NSString *)id_
                                                 withId:(id)message {
  if (self = [super init]) {
    self->id__ = id_;
    self->message_ = message;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireFunctionParsedWithNSString:id__ withId:message_];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_UserEvent *)other {
  [super copyAllFieldsTo:other];
  other->id__ = id__;
  other->message_ = message_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withNSString:withId:", "UserEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "id__", "id", 0x2, "Ljava.lang.String;", NULL,  },
    { "message_", NULL, 0x2, "Ljava.lang.Object;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_UserEvent = { "UserEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 2, methods, 2, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_UserEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_NoteEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                                withOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note {
  if (self = [super init]) {
    self->note_ = note;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireNoteParsedWithOrgJfugueTheoryNote:self->note_];
}

- (jdouble)getDuration {
  return [((OrgJfugueTheoryNote *) nil_chk(self->note_)) getDuration];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_NoteEvent *)other {
  [super copyAllFieldsTo:other];
  other->note_ = note_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withOrgJfugueTheoryNote:", "NoteEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
    { "getDuration", NULL, "D", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "note_", NULL, 0x2, "Lorg.jfugue.theory.Note;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_NoteEvent = { "NoteEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 3, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_NoteEvent;
}

@end

@implementation OrgJfugueTemporalTemporalEvents_ChordEvent

- (instancetype)initWithOrgJfugueTemporalTemporalEvents:(OrgJfugueTemporalTemporalEvents *)outer$
                               withOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  if (self = [super init]) {
    self->chord_ = chord;
  }
  return self;
}

- (void)executeWithOrgJfugueParserParser:(OrgJfugueParserParser *)parser {
  [((OrgJfugueParserParser *) nil_chk(parser)) fireChordParsedWithOrgJfugueTheoryChord:self->chord_];
}

- (jdouble)getDuration {
  return [((OrgJfugueTheoryNote *) nil_chk(IOSObjectArray_Get(nil_chk([((OrgJfugueTheoryChord *) nil_chk(self->chord_)) getNotes]), 0))) getDuration];
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEvents_ChordEvent *)other {
  [super copyAllFieldsTo:other];
  other->chord_ = chord_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithOrgJfugueTemporalTemporalEvents:withOrgJfugueTheoryChord:", "ChordEvent", NULL, 0x1, NULL },
    { "executeWithOrgJfugueParserParser:", "execute", "V", 0x1, NULL },
    { "getDuration", NULL, "D", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "chord_", NULL, 0x2, "Lorg.jfugue.theory.Chord;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEvents_ChordEvent = { "ChordEvent", "org.jfugue.temporal", "TemporalEvents", 0x1, 3, methods, 1, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEvents_ChordEvent;
}

@end
