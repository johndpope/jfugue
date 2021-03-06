//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/theory/Note.java
//

#ifndef _OrgJfugueTheoryNote_H_
#define _OrgJfugueTheoryNote_H_

@class IOSObjectArray;
@class OrgJfuguePatternPattern;

#import "JreEmulation.h"
#include "org/jfugue/pattern/PatternProducer.h"

#define OrgJfugueTheoryNote_MAX_OCTAVE 10
#define OrgJfugueTheoryNote_MIN_OCTAVE 0
#define OrgJfugueTheoryNote_OCTAVE 18

@interface OrgJfugueTheoryNote : NSObject < OrgJfuguePatternPatternProducer > {
 @public
  jbyte value_;
  jdouble duration_;
  jboolean wasDurationExplicitlySet_;
  jbyte attackVelocity_;
  jbyte decayVelocity_;
  jboolean isRest__;
  jboolean isStartOfTie__;
  jboolean isEndOfTie__;
  jboolean isFirstNote__;
  jboolean isMelodicNote__;
  jboolean isHarmonicNote__;
  jboolean isPercussionNote__;
  NSString *originalString_;
}

- (instancetype)init;

- (instancetype)initWithNSString:(NSString *)note;

- (instancetype)initWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (instancetype)initWithInt:(jint)value;

- (instancetype)initWithByte:(jbyte)value;

- (instancetype)initWithInt:(jint)value
                 withDouble:(jdouble)duration;

- (instancetype)initWithByte:(jbyte)value
                  withDouble:(jdouble)duration;

- (OrgJfugueTheoryNote *)setValueWithByte:(jbyte)value;

- (jbyte)getValue;

- (OrgJfugueTheoryNote *)changeValueWithByte:(jbyte)delta;

- (jbyte)getOctave;

- (jdouble)getDuration;

- (OrgJfugueTheoryNote *)setDurationWithDouble:(jdouble)d;

- (OrgJfugueTheoryNote *)useDefaultDuration;

- (OrgJfugueTheoryNote *)useSameDurationAsWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note2;

- (OrgJfugueTheoryNote *)setDurationWithNSString:(NSString *)duration;

- (jboolean)isDurationExplicitlySet;

- (OrgJfugueTheoryNote *)setImplicitDurationForTestingOnlyWithDouble:(jdouble)d;

- (OrgJfugueTheoryNote *)setRestWithBoolean:(jboolean)rest;

- (jboolean)isRest;

- (OrgJfugueTheoryNote *)setPercussionNoteWithBoolean:(jboolean)perc;

- (jboolean)isPercussionNote;

- (OrgJfugueTheoryNote *)setAttackVelocityWithByte:(jbyte)attackVelocity;

- (jbyte)getAttackVelocity;

- (OrgJfugueTheoryNote *)setDecayVelocityWithByte:(jbyte)decayVelocity;

- (jbyte)getDecayVelocity;

- (OrgJfugueTheoryNote *)setStartOfTieWithBoolean:(jboolean)isStartOfTie;

- (OrgJfugueTheoryNote *)setEndOfTieWithBoolean:(jboolean)isEndOfTie;

- (jboolean)isStartOfTie;

- (jboolean)isEndOfTie;

- (OrgJfugueTheoryNote *)setFirstNoteWithBoolean:(jboolean)isFirstNote;

- (jboolean)isFirstNote;

- (OrgJfugueTheoryNote *)setMelodicNoteWithBoolean:(jboolean)isMelodicNote;

- (jboolean)isMelodicNote;

- (OrgJfugueTheoryNote *)setHarmonicNoteWithBoolean:(jboolean)isHarmonicNote;

- (jboolean)isHarmonicNote;

- (OrgJfugueTheoryNote *)setOriginalStringWithNSString:(NSString *)originalString;

- (NSString *)getOriginalString;

- (jdouble)getMicrosecondDurationWithDouble:(jdouble)mpq;

- (jbyte)getPositionInOctave;

+ (OrgJfugueTheoryNote *)createRestWithDouble:(jdouble)duration;

+ (NSString *)getToneStringWithByte:(jbyte)noteValue;

+ (NSString *)getPercussionStringWithByte:(jbyte)noteValue;

+ (jdouble)getFrequencyForNoteWithNSString:(NSString *)note;

+ (jdouble)getFrequencyForNoteWithInt:(jint)noteValue;

+ (jdouble)truncateTo3DecimalPlacesWithDouble:(jdouble)preciseNumber;

+ (jdouble)getPreciseFrequencyForNoteWithInt:(jint)noteValue;

+ (jdouble)getFrequencyAboveBaseWithDouble:(jdouble)baseFrequency
                                withDouble:(jdouble)octavesAboveBase;

+ (NSString *)getDurationStringWithDouble:(jdouble)decimalDuration;

+ (NSString *)getDurationStringForBeatWithInt:(jint)beat;

- (NSString *)getAttackDecayString;

- (OrgJfuguePatternPattern *)getPattern;

- (OrgJfuguePatternPattern *)getPercussionPattern;

- (NSString *)description;

- (NSString *)toStringWithoutDuration;

- (NSString *)getDecoratorString;

- (jboolean)isEqual:(id)o;

- (NSString *)toDebugString;

- (void)copyAllFieldsTo:(OrgJfugueTheoryNote *)other;

@end

FOUNDATION_EXPORT BOOL OrgJfugueTheoryNote_initialized;
J2OBJC_STATIC_INIT(OrgJfugueTheoryNote)

J2OBJC_FIELD_SETTER(OrgJfugueTheoryNote, originalString_, NSString *)
FOUNDATION_EXPORT OrgJfugueTheoryNote *OrgJfugueTheoryNote_createRestWithDouble_(jdouble duration);
FOUNDATION_EXPORT NSString *OrgJfugueTheoryNote_getToneStringWithByte_(jbyte noteValue);
FOUNDATION_EXPORT NSString *OrgJfugueTheoryNote_getPercussionStringWithByte_(jbyte noteValue);
FOUNDATION_EXPORT jdouble OrgJfugueTheoryNote_getFrequencyForNoteWithNSString_(NSString *note);
FOUNDATION_EXPORT jdouble OrgJfugueTheoryNote_getFrequencyForNoteWithInt_(jint noteValue);
FOUNDATION_EXPORT NSString *OrgJfugueTheoryNote_getDurationStringWithDouble_(jdouble decimalDuration);
FOUNDATION_EXPORT NSString *OrgJfugueTheoryNote_getDurationStringForBeatWithInt_(jint beat);

FOUNDATION_EXPORT IOSObjectArray *OrgJfugueTheoryNote_NOTE_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, NOTE_NAMES_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(OrgJfugueTheoryNote, NOTE_NAMES_, IOSObjectArray *)

FOUNDATION_EXPORT IOSObjectArray *OrgJfugueTheoryNote_PERCUSSION_NAMES_;
J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, PERCUSSION_NAMES_, IOSObjectArray *)
J2OBJC_STATIC_FIELD_SETTER(OrgJfugueTheoryNote, PERCUSSION_NAMES_, IOSObjectArray *)

FOUNDATION_EXPORT OrgJfugueTheoryNote *OrgJfugueTheoryNote_REST_;
J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, REST_, OrgJfugueTheoryNote *)

J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, OCTAVE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, MIN_OCTAVE, jbyte)

J2OBJC_STATIC_FIELD_GETTER(OrgJfugueTheoryNote, MAX_OCTAVE, jbyte)

#endif // _OrgJfugueTheoryNote_H_
