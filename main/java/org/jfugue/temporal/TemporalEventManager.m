//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/temporal/TemporalEventManager.java
//

#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "java/lang/Double.h"
#include "java/lang/Long.h"
#include "java/util/ArrayList.h"
#include "java/util/HashMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "java/util/TreeMap.h"
#include "org/jfugue/midi/MidiDefaults.h"
#include "org/jfugue/temporal/DurationTemporalEvent.h"
#include "org/jfugue/temporal/TemporalEvent.h"
#include "org/jfugue/temporal/TemporalEventManager.h"

__attribute__((unused)) static jlong OrgJfugueTemporalTemporalEventManager_convertBeatsToMillisWithDouble_(OrgJfugueTemporalTemporalEventManager *self, jdouble beats);

@implementation OrgJfugueTemporalTemporalEventManager

- (instancetype)init {
  if (self = [super init]) {
    timeToEventMap_ = [[JavaUtilTreeMap alloc] init];
    tempoBeatsPerMinute_ = OrgJfugueMidiMidiDefaults_DEFAULT_TEMPO_BEATS_PER_MINUTE;
    beatsPerWhole_ = OrgJfugueMidiMidiDefaults_DEFAULT_TEMPO_BEATS_PER_WHOLE;
    currentTrack_ = 0;
    currentLayer_ = [IOSByteArray newArrayWithLength:OrgJfugueMidiMidiDefaults_TRACKS];
    beatTime_ = [IOSDoubleArray newArrayWithDimensions:2 lengths:(jint[]){ OrgJfugueMidiMidiDefaults_TRACKS, OrgJfugueMidiMidiDefaults_LAYERS }];
  }
  return self;
}

- (void)reset {
  self->bookmarkedTrackTimeMap_ = [[JavaUtilHashMap alloc] init];
  self->tempoBeatsPerMinute_ = OrgJfugueMidiMidiDefaults_DEFAULT_TEMPO_BEATS_PER_MINUTE;
  self->currentTrack_ = 0;
  for (jint i = 0; i < OrgJfugueMidiMidiDefaults_TRACKS; i++) {
    *IOSByteArray_GetRef(nil_chk(self->currentLayer_), i) = 0;
  }
  [((id<JavaUtilMap>) nil_chk(self->timeToEventMap_)) clear];
}

- (void)finish {
}

- (void)setTempoWithInt:(jint)tempoBPM {
  self->tempoBeatsPerMinute_ = tempoBPM;
}

- (void)setCurrentTrackWithByte:(jbyte)track {
  currentTrack_ = track;
}

- (void)setCurrentLayerWithByte:(jbyte)layer {
  *IOSByteArray_GetRef(nil_chk(currentLayer_), currentTrack_) = layer;
}

- (void)advanceTrackBeatTimeWithDouble:(jdouble)advanceTime {
  *IOSDoubleArray_GetRef(nil_chk(IOSObjectArray_Get(nil_chk(beatTime_), currentTrack_)), IOSByteArray_Get(nil_chk(currentLayer_), currentTrack_)) += advanceTime;
}

- (void)setTrackBeatTimeWithDouble:(jdouble)newTime {
  *IOSDoubleArray_GetRef(nil_chk(IOSObjectArray_Get(nil_chk(beatTime_), currentTrack_)), IOSByteArray_Get(nil_chk(currentLayer_), currentTrack_)) = newTime;
}

- (jdouble)getTrackBeatTime {
  return IOSDoubleArray_Get(nil_chk(IOSObjectArray_Get(nil_chk(beatTime_), currentTrack_)), IOSByteArray_Get(nil_chk(currentLayer_), currentTrack_));
}

- (void)addTrackTickTimeBookmarkWithNSString:(NSString *)timeBookmarkID {
  (void) [((id<JavaUtilMap>) nil_chk(bookmarkedTrackTimeMap_)) putWithId:timeBookmarkID withId:JavaLangDouble_valueOfWithDouble_([self getTrackBeatTime])];
}

- (jdouble)getTrackBeatTimeBookmarkWithNSString:(NSString *)timeBookmarkID {
  return [((JavaLangDouble *) nil_chk([((id<JavaUtilMap>) nil_chk(bookmarkedTrackTimeMap_)) getWithId:timeBookmarkID])) doubleValue];
}

- (void)addRealTimeEventWithOrgJfugueTemporalDurationTemporalEvent:(id<OrgJfugueTemporalDurationTemporalEvent>)event {
  [self addRealTimeEventWithOrgJfugueTemporalTemporalEvent:(id<OrgJfugueTemporalTemporalEvent>) check_protocol_cast(event, @protocol(OrgJfugueTemporalTemporalEvent))];
  [self advanceTrackBeatTimeWithDouble:[((id<OrgJfugueTemporalDurationTemporalEvent>) nil_chk(event)) getDuration]];
}

- (void)addRealTimeEventWithOrgJfugueTemporalTemporalEvent:(id<OrgJfugueTemporalTemporalEvent>)event {
  id<JavaUtilList> eventList = [((id<JavaUtilMap>) nil_chk(timeToEventMap_)) getWithId:JavaLangLong_valueOfWithLong_(OrgJfugueTemporalTemporalEventManager_convertBeatsToMillisWithDouble_(self, [self getTrackBeatTime]))];
  if (eventList == nil) {
    eventList = [[JavaUtilArrayList alloc] init];
    (void) [timeToEventMap_ putWithId:JavaLangLong_valueOfWithLong_(OrgJfugueTemporalTemporalEventManager_convertBeatsToMillisWithDouble_(self, [self getTrackBeatTime])) withId:eventList];
  }
  [((id<JavaUtilList>) nil_chk(eventList)) addWithId:event];
}

- (id<JavaUtilMap>)getTimeToEventMap {
  return self->timeToEventMap_;
}

- (jlong)convertBeatsToMillisWithDouble:(jdouble)beats {
  return OrgJfugueTemporalTemporalEventManager_convertBeatsToMillisWithDouble_(self, beats);
}

- (void)copyAllFieldsTo:(OrgJfugueTemporalTemporalEventManager *)other {
  [super copyAllFieldsTo:other];
  other->timeToEventMap_ = timeToEventMap_;
  other->tempoBeatsPerMinute_ = tempoBeatsPerMinute_;
  other->beatsPerWhole_ = beatsPerWhole_;
  other->currentTrack_ = currentTrack_;
  other->currentLayer_ = currentLayer_;
  other->beatTime_ = beatTime_;
  other->bookmarkedTrackTimeMap_ = bookmarkedTrackTimeMap_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "TemporalEventManager", NULL, 0x1, NULL },
    { "reset", NULL, "V", 0x1, NULL },
    { "finish", NULL, "V", 0x1, NULL },
    { "setTempoWithInt:", "setTempo", "V", 0x1, NULL },
    { "setCurrentTrackWithByte:", "setCurrentTrack", "V", 0x1, NULL },
    { "setCurrentLayerWithByte:", "setCurrentLayer", "V", 0x1, NULL },
    { "advanceTrackBeatTimeWithDouble:", "advanceTrackBeatTime", "V", 0x1, NULL },
    { "setTrackBeatTimeWithDouble:", "setTrackBeatTime", "V", 0x1, NULL },
    { "getTrackBeatTime", NULL, "D", 0x1, NULL },
    { "addTrackTickTimeBookmarkWithNSString:", "addTrackTickTimeBookmark", "V", 0x1, NULL },
    { "getTrackBeatTimeBookmarkWithNSString:", "getTrackBeatTimeBookmark", "D", 0x1, NULL },
    { "addRealTimeEventWithOrgJfugueTemporalDurationTemporalEvent:", "addRealTimeEvent", "V", 0x1, NULL },
    { "addRealTimeEventWithOrgJfugueTemporalTemporalEvent:", "addRealTimeEvent", "V", 0x1, NULL },
    { "getTimeToEventMap", NULL, "Ljava.util.Map;", 0x1, NULL },
    { "convertBeatsToMillisWithDouble:", "convertBeatsToMillis", "J", 0x2, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "timeToEventMap_", NULL, 0x2, "Ljava.util.Map;", NULL,  },
    { "tempoBeatsPerMinute_", NULL, 0x2, "I", NULL,  },
    { "beatsPerWhole_", NULL, 0x2, "I", NULL,  },
    { "currentTrack_", NULL, 0x2, "B", NULL,  },
    { "currentLayer_", NULL, 0x2, "[B", NULL,  },
    { "beatTime_", NULL, 0x2, "[[D", NULL,  },
    { "bookmarkedTrackTimeMap_", NULL, 0x2, "Ljava.util.Map;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueTemporalTemporalEventManager = { "TemporalEventManager", "org.jfugue.temporal", NULL, 0x10, 15, methods, 7, fields, 0, NULL};
  return &_OrgJfugueTemporalTemporalEventManager;
}

@end

jlong OrgJfugueTemporalTemporalEventManager_convertBeatsToMillisWithDouble_(OrgJfugueTemporalTemporalEventManager *self, jdouble beats) {
  return J2ObjCFpToLong(((beats * self->beatsPerWhole_ * 60000.0) / self->tempoBeatsPerMinute_));
}