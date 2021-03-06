//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/pattern/TrackTable.java
//

#include "IOSObjectArray.h"
#include "java/lang/RuntimeException.h"
#include "java/util/ArrayList.h"
#include "java/util/List.h"
#include "org/jfugue/pattern/Pattern.h"
#include "org/jfugue/pattern/PatternProducer.h"
#include "org/jfugue/pattern/PatternValidator.h"
#include "org/jfugue/pattern/TrackTable.h"

@implementation OrgJfuguePatternTrackTable

- (instancetype)initWithInt:(jint)length {
  if (self = [super init]) {
    self->length_ = length;
    tracks_ = [[JavaUtilArrayList alloc] initWithInt:OrgJfuguePatternTrackTable_NUM_TRACKS];
  }
  return self;
}

- (id<JavaUtilList>)getTrackWithInt:(jint)track {
  return [((id<JavaUtilList>) nil_chk(tracks_)) getWithInt:track];
}

- (OrgJfuguePatternTrackTable *)setPatternValidatorWithOrgJfuguePatternPatternValidator:(id<OrgJfuguePatternPatternValidator>)pv {
  self->validator_ = pv;
  return self;
}

- (id<OrgJfuguePatternPatternValidator>)getPatternValidator {
  return self->validator_;
}

- (OrgJfuguePatternTrackTable *)putWithInt:(jint)track
                                   withInt:(jint)position
       withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  if (validator_ != nil) {
    if (![validator_ isValidWithOrgJfuguePatternPatternProducer:patternProducer]) {
      @throw [[JavaLangRuntimeException alloc] initWithNSString:[validator_ getErrorMessageWithOrgJfuguePatternPatternProducer:patternProducer]];
    }
  }
  id<JavaUtilList> trackList = [((id<JavaUtilList>) nil_chk(self->tracks_)) getWithInt:track];
  if (trackList == nil) {
    trackList = [[JavaUtilArrayList alloc] initWithInt:[self getLength]];
    [self->tracks_ addWithInt:track withId:trackList];
  }
  [((id<JavaUtilList>) nil_chk(trackList)) addWithInt:position withId:[((id<OrgJfuguePatternPatternProducer>) nil_chk(patternProducer)) getPattern]];
  return self;
}

- (OrgJfuguePatternTrackTable *)putWithInt:(jint)track
                                   withInt:(jint)position
  withOrgJfuguePatternPatternProducerArray:(IOSObjectArray *)patternProducers {
  jint counter = 0;
  {
    IOSObjectArray *a__ = patternProducers;
    id<OrgJfuguePatternPatternProducer> const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    id<OrgJfuguePatternPatternProducer> const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      id<OrgJfuguePatternPatternProducer> producer = *b__++;
      (void) [self putWithInt:track withInt:position + counter withOrgJfuguePatternPatternProducer:producer];
      counter++;
    }
  }
  return self;
}

- (OrgJfuguePatternTrackTable *)putAtIntervalsWithInt:(jint)track
                                              withInt:(jint)nth
                  withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  for (jint position = 0; position < self->length_; position += nth) {
    (void) [self putWithInt:track withInt:position withOrgJfuguePatternPatternProducer:patternProducer];
  }
  return self;
}

- (OrgJfuguePatternTrackTable *)putAtIntervalsWithInt:(jint)track
                                              withInt:(jint)nth
                                              withInt:(jint)first
                  withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  for (jint position = first; position < self->length_; position += nth) {
    (void) [self putWithInt:track withInt:position withOrgJfuguePatternPatternProducer:patternProducer];
  }
  return self;
}

- (OrgJfuguePatternTrackTable *)putWithInt:(jint)track
                                   withInt:(jint)start
                                   withInt:(jint)end
       withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  for (jint i = start; i <= end; i++) {
    (void) [self putWithInt:track withInt:i withOrgJfuguePatternPatternProducer:patternProducer];
  }
  return self;
}

- (OrgJfuguePatternTrackTable *)putWithInt:(jint)track
                              withNSString:(NSString *)periodMeansNoOtherMeansYes
       withOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  for (jint i = 0; i < ((jint) [((NSString *) nil_chk(periodMeansNoOtherMeansYes)) length]); i++) {
    if ([periodMeansNoOtherMeansYes charAtWithInt:i] != '.') {
      (void) [self putWithInt:track withInt:i withOrgJfuguePatternPatternProducer:patternProducer];
    }
  }
  return self;
}

- (jint)getLength {
  return self->length_;
}

- (OrgJfuguePatternPattern *)getPattern {
  OrgJfuguePatternPattern *pattern = [[OrgJfuguePatternPattern alloc] init];
  for (id<JavaUtilList> __strong track in nil_chk(tracks_)) {
    for (OrgJfuguePatternPattern * __strong p in nil_chk(track)) {
      (void) [pattern addTrackWithInt:[tracks_ indexOfWithId:track] withOrgJfuguePatternPatternProducer:p];
    }
  }
  return pattern;
}

- (void)copyAllFieldsTo:(OrgJfuguePatternTrackTable *)other {
  [super copyAllFieldsTo:other];
  other->length_ = length_;
  other->tracks_ = tracks_;
  other->validator_ = validator_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "initWithInt:", "TrackTable", NULL, 0x1, NULL },
    { "getTrackWithInt:", "getTrack", "Ljava.util.List;", 0x1, NULL },
    { "setPatternValidatorWithOrgJfuguePatternPatternValidator:", "setPatternValidator", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "getPatternValidator", NULL, "Lorg.jfugue.pattern.PatternValidator;", 0x1, NULL },
    { "putWithInt:withInt:withOrgJfuguePatternPatternProducer:", "put", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "putWithInt:withInt:withOrgJfuguePatternPatternProducerArray:", "put", "Lorg.jfugue.pattern.TrackTable;", 0x81, NULL },
    { "putAtIntervalsWithInt:withInt:withOrgJfuguePatternPatternProducer:", "putAtIntervals", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "putAtIntervalsWithInt:withInt:withInt:withOrgJfuguePatternPatternProducer:", "putAtIntervals", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "putWithInt:withInt:withInt:withOrgJfuguePatternPatternProducer:", "put", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "putWithInt:withNSString:withOrgJfuguePatternPatternProducer:", "put", "Lorg.jfugue.pattern.TrackTable;", 0x1, NULL },
    { "getLength", NULL, "I", 0x1, NULL },
    { "getPattern", NULL, "Lorg.jfugue.pattern.Pattern;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "length_", NULL, 0x2, "I", NULL,  },
    { "tracks_", NULL, 0x2, "Ljava.util.List;", NULL,  },
    { "validator_", NULL, 0x2, "Lorg.jfugue.pattern.PatternValidator;", NULL,  },
    { "NUM_TRACKS_", NULL, 0x19, "I", NULL, .constantValue.asInt = OrgJfuguePatternTrackTable_NUM_TRACKS },
    { "RHYTHM_TRACK_", NULL, 0x19, "I", NULL, .constantValue.asInt = OrgJfuguePatternTrackTable_RHYTHM_TRACK },
  };
  static const J2ObjcClassInfo _OrgJfuguePatternTrackTable = { "TrackTable", "org.jfugue.pattern", NULL, 0x1, 12, methods, 5, fields, 0, NULL};
  return &_OrgJfuguePatternTrackTable;
}

@end
