//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/theory/Chord.java
//

#include "IOSClass.h"
#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Map.h"
#include "java/util/Set.h"
#include "java/util/TreeMap.h"
#include "org/jfugue/pattern/Pattern.h"
#include "org/jfugue/provider/ChordProvider.h"
#include "org/jfugue/provider/ChordProviderFactory.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Intervals.h"
#include "org/jfugue/theory/Key.h"
#include "org/jfugue/theory/Note.h"
#include "org/jfugue/theory/Scale.h"

__attribute__((unused)) static jint OrgJfugueTheoryChord_$1_compareLengthWithNSString_withNSString_(OrgJfugueTheoryChord_$1 *self, NSString *s1, NSString *s2);

BOOL OrgJfugueTheoryChord_initialized = NO;

@implementation OrgJfugueTheoryChord

id<JavaUtilMap> OrgJfugueTheoryChord_chordMap_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_MAJOR_INTERVALS_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_MINOR_INTERVALS_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_DIMINISHED_INTERVALS_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_MAJOR_SEVENTH_INTERVALS_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_MINOR_SEVENTH_INTERVALS_;
OrgJfugueTheoryIntervals * OrgJfugueTheoryChord_DIMINISHED_SEVENTH_INTERVALS_;

+ (IOSObjectArray *)getChordNames {
  return OrgJfugueTheoryChord_getChordNames();
}

+ (void)addChordWithNSString:(NSString *)name
                withNSString:(NSString *)intervalPattern {
  OrgJfugueTheoryChord_addChordWithNSString_withNSString_(name, intervalPattern);
}

+ (void)addChordWithNSString:(NSString *)name
withOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)intervalPattern {
  OrgJfugueTheoryChord_addChordWithNSString_withOrgJfugueTheoryIntervals_(name, intervalPattern);
}

+ (OrgJfugueTheoryIntervals *)getIntervalsWithNSString:(NSString *)name {
  return OrgJfugueTheoryChord_getIntervalsWithNSString_(name);
}

+ (void)removeChordWithNSString:(NSString *)name {
  OrgJfugueTheoryChord_removeChordWithNSString_(name);
}

- (instancetype)initWithNSString:(NSString *)s {
  return [self initOrgJfugueTheoryChordWithOrgJfugueTheoryChord:[((id<OrgJfugueProviderChordProvider>) nil_chk(OrgJfugueProviderChordProviderFactory_getChordProvider())) createChordWithNSString:s]];
}

- (instancetype)initOrgJfugueTheoryChordWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  if (self = [super init]) {
    self->rootNote_ = [((OrgJfugueTheoryChord *) nil_chk(chord)) getRoot];
    self->intervals_ = [chord getIntervals];
    self->inversion_ = [chord getInversion];
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  return [self initOrgJfugueTheoryChordWithOrgJfugueTheoryChord:chord];
}

- (instancetype)initWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)root
               withOrgJfugueTheoryIntervals:(OrgJfugueTheoryIntervals *)intervals {
  if (self = [super init]) {
    self->rootNote_ = root;
    self->intervals_ = intervals;
  }
  return self;
}

- (instancetype)initWithOrgJfugueTheoryKey:(OrgJfugueTheoryKey *)key {
  if (self = [super init]) {
    self->rootNote_ = [((OrgJfugueTheoryKey *) nil_chk(key)) getRootNote];
    self->intervals_ = [((OrgJfugueTheoryScale *) nil_chk([key getScale])) getIntervals];
  }
  return self;
}

- (OrgJfugueTheoryNote *)getRoot {
  return self->rootNote_;
}

- (OrgJfugueTheoryIntervals *)getIntervals {
  return self->intervals_;
}

- (jint)getInversion {
  return self->inversion_;
}

- (OrgJfugueTheoryChord *)setInversionWithInt:(jint)nth {
  self->inversion_ = nth;
  return self;
}

- (OrgJfugueTheoryChord *)setBassNoteWithNSString:(NSString *)newBass {
  return [self setBassNoteWithOrgJfugueTheoryNote:[[OrgJfugueTheoryNote alloc] initWithNSString:newBass]];
}

- (OrgJfugueTheoryChord *)setBassNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)newBass {
  if (rootNote_ == nil) {
    return self;
  }
  for (jint i = 0; i < [((OrgJfugueTheoryIntervals *) nil_chk(intervals_)) size]; i++) {
    if ([((OrgJfugueTheoryNote *) nil_chk(newBass)) getValue] % 12 == ([((OrgJfugueTheoryNote *) nil_chk(rootNote_)) getValue] + OrgJfugueTheoryIntervals_getHalfstepsWithNSString_([intervals_ getNthIntervalWithInt:i])) % 12) {
      self->inversion_ = i;
    }
  }
  return self;
}

- (IOSObjectArray *)getNotes {
  IOSIntArray *halfsteps = [((OrgJfugueTheoryIntervals *) nil_chk(self->intervals_)) toHalfstepArray];
  IOSObjectArray *retVal = [IOSObjectArray newArrayWithLength:((IOSIntArray *) nil_chk(halfsteps))->size_ type:[IOSClass classWithClass:[OrgJfugueTheoryNote class]]];
  IOSObjectArray_SetAndConsume(retVal, 0, [[OrgJfugueTheoryNote alloc] initWithOrgJfugueTheoryNote:[self getRoot]]);
  for (jint i = 0; i < halfsteps->size_ - 1; i++) {
    IOSObjectArray_Set(retVal, i + 1, [((OrgJfugueTheoryNote *) nil_chk([((OrgJfugueTheoryNote *) nil_chk([((OrgJfugueTheoryNote *) nil_chk([((OrgJfugueTheoryNote *) [[OrgJfugueTheoryNote alloc] initWithInt:[((OrgJfugueTheoryNote *) nil_chk(IOSObjectArray_Get(retVal, i))) getValue] + IOSIntArray_Get(halfsteps, i + 1) - IOSIntArray_Get(halfsteps, i)]) setFirstNoteWithBoolean:NO])) setMelodicNoteWithBoolean:NO])) setHarmonicNoteWithBoolean:YES])) useSameDurationAsWithOrgJfugueTheoryNote:[self getRoot]]);
  }
  for (jint i = 0; i < self->inversion_; i++) {
    if (i < retVal->size_) {
      (void) [((OrgJfugueTheoryNote *) nil_chk(IOSObjectArray_Get(retVal, i))) setValueWithByte:(jbyte) ([((OrgJfugueTheoryNote *) nil_chk(IOSObjectArray_Get(retVal, i))) getValue] + OrgJfugueTheoryChord_OCTAVE)];
    }
  }
  return retVal;
}

- (NSString *)insertChordNameIntoNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note
                                                withNSString:(NSString *)chordName {
  JavaLangStringBuilder *buddy = [[JavaLangStringBuilder alloc] init];
  (void) [buddy appendWithNSString:OrgJfugueTheoryNote_getToneStringWithByte_([((OrgJfugueTheoryNote *) nil_chk(note)) getValue])];
  (void) [buddy appendWithNSString:chordName];
  if ([note isDurationExplicitlySet]) {
    (void) [buddy appendWithNSString:OrgJfugueTheoryNote_getDurationStringWithDouble_([note getDuration])];
  }
  (void) [buddy appendWithNSString:[note getAttackDecayString]];
  return [buddy description];
}

- (OrgJfuguePatternPattern *)getPattern {
  OrgJfuguePatternPattern *pattern = [[OrgJfuguePatternPattern alloc] init];
  jboolean foundChord = NO;
  for (id<JavaUtilMap_Entry> __strong entry_ in nil_chk([((id<JavaUtilMap>) nil_chk(OrgJfugueTheoryChord_chordMap_)) entrySet])) {
    if ([((OrgJfugueTheoryIntervals *) nil_chk([self getIntervals])) isEqual:[((id<JavaUtilMap_Entry>) nil_chk(entry_)) getValue]]) {
      (void) [pattern addWithNSString:[self insertChordNameIntoNoteWithOrgJfugueTheoryNote:self->rootNote_ withNSString:[entry_ getKey]]];
      foundChord = YES;
    }
  }
  if (!foundChord) {
    return [self getPatternWithNotes];
  }
  return pattern;
}

- (OrgJfuguePatternPattern *)getPatternWithNotes {
  JavaLangStringBuilder *buddy = [[JavaLangStringBuilder alloc] init];
  IOSObjectArray *notes = [self getNotes];
  for (jint i = 0; i < ((IOSObjectArray *) nil_chk(notes))->size_ - 1; i++) {
    (void) [buddy appendWithId:[((OrgJfugueTheoryNote *) nil_chk(IOSObjectArray_Get(notes, i))) getPattern]];
    (void) [buddy appendWithNSString:@"+"];
  }
  (void) [buddy appendWithId:IOSObjectArray_Get(notes, notes->size_ - 1)];
  return [[OrgJfuguePatternPattern alloc] initWithNSString:[buddy description]];
}

- (jboolean)isMajor {
  return [((OrgJfugueTheoryIntervals *) nil_chk(self->intervals_)) isEqual:OrgJfugueTheoryChord_MAJOR_INTERVALS_];
}

- (jboolean)isMinor {
  return [((OrgJfugueTheoryIntervals *) nil_chk(self->intervals_)) isEqual:OrgJfugueTheoryChord_MINOR_INTERVALS_];
}

- (jboolean)isEqual:(id)o {
  if (!([o isKindOfClass:[OrgJfugueTheoryChord class]])) {
    return NO;
  }
  OrgJfugueTheoryChord *c2 = (OrgJfugueTheoryChord *) check_class_cast(o, [OrgJfugueTheoryChord class]);
  return ([((OrgJfugueTheoryNote *) nil_chk(((OrgJfugueTheoryChord *) nil_chk(c2))->rootNote_)) isEqual:rootNote_] && [((OrgJfugueTheoryIntervals *) nil_chk(c2->intervals_)) isEqual:intervals_] && (c2->inversion_ == inversion_));
}

- (NSString *)description {
  return [((OrgJfuguePatternPattern *) nil_chk([self getPattern])) description];
}

- (void)copyAllFieldsTo:(OrgJfugueTheoryChord *)other {
  [super copyAllFieldsTo:other];
  other->rootNote_ = rootNote_;
  other->intervals_ = intervals_;
  other->inversion_ = inversion_;
}

+ (void)initialize {
  if (self == [OrgJfugueTheoryChord class]) {
    {
      OrgJfugueTheoryChord_chordMap_ = [[JavaUtilTreeMap alloc] initWithJavaUtilComparator:[[OrgJfugueTheoryChord_$1 alloc] init]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ6" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 6"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 7 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"ADD9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ6%9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 6 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ7%6" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 6 7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MAJ13" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 7 9 13"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN6" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 6"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 b7 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN11" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 b7 9 11"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN7%11" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 b7 11"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MINADD9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MIN6%9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 6"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MINMAJ7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"MINMAJ9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 7 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7%6" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 6 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7%11" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 11"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7SUS" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 4 5 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7%6SUS" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 4 5 6 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM9" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 9"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM11" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 9 11"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM13" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 9 13"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM13SUS" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 11 13"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DOM7%6%11" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 b7 9 11 13"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"AUG" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 #5"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"AUG7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 #5 b7"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DIM" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 b5"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"DIM7" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 b5 6"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"SUS4" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 4 5"]];
      (void) [OrgJfugueTheoryChord_chordMap_ putWithId:@"SUS2" withId:[[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 2 5"]];
    }
    OrgJfugueTheoryChord_MAJOR_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5"];
    OrgJfugueTheoryChord_MINOR_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5"];
    OrgJfugueTheoryChord_DIMINISHED_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 b5"];
    OrgJfugueTheoryChord_MAJOR_SEVENTH_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 3 5 7"];
    OrgJfugueTheoryChord_MINOR_SEVENTH_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 5 b7"];
    OrgJfugueTheoryChord_DIMINISHED_SEVENTH_INTERVALS_ = [[OrgJfugueTheoryIntervals alloc] initWithNSString:@"1 b3 b5 6"];
    J2OBJC_SET_INITIALIZED(OrgJfugueTheoryChord)
  }
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "getChordNames", NULL, "[Ljava.lang.String;", 0x9, NULL },
    { "addChordWithNSString:withNSString:", "addChord", "V", 0x9, NULL },
    { "addChordWithNSString:withOrgJfugueTheoryIntervals:", "addChord", "V", 0x9, NULL },
    { "getIntervalsWithNSString:", "getIntervals", "Lorg.jfugue.theory.Intervals;", 0x9, NULL },
    { "removeChordWithNSString:", "removeChord", "V", 0x9, NULL },
    { "initWithNSString:", "Chord", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryChord:", "Chord", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryNote:withOrgJfugueTheoryIntervals:", "Chord", NULL, 0x1, NULL },
    { "initWithOrgJfugueTheoryKey:", "Chord", NULL, 0x1, NULL },
    { "getRoot", NULL, "Lorg.jfugue.theory.Note;", 0x1, NULL },
    { "getIntervals", NULL, "Lorg.jfugue.theory.Intervals;", 0x1, NULL },
    { "getInversion", NULL, "I", 0x1, NULL },
    { "setInversionWithInt:", "setInversion", "Lorg.jfugue.theory.Chord;", 0x1, NULL },
    { "setBassNoteWithNSString:", "setBassNote", "Lorg.jfugue.theory.Chord;", 0x1, NULL },
    { "setBassNoteWithOrgJfugueTheoryNote:", "setBassNote", "Lorg.jfugue.theory.Chord;", 0x1, NULL },
    { "getNotes", NULL, "[Lorg.jfugue.theory.Note;", 0x1, NULL },
    { "insertChordNameIntoNoteWithOrgJfugueTheoryNote:withNSString:", "insertChordNameIntoNote", "Ljava.lang.String;", 0x1, NULL },
    { "getPattern", NULL, "Lorg.jfugue.pattern.Pattern;", 0x1, NULL },
    { "getPatternWithNotes", NULL, "Lorg.jfugue.pattern.Pattern;", 0x1, NULL },
    { "isMajor", NULL, "Z", 0x1, NULL },
    { "isMinor", NULL, "Z", 0x1, NULL },
    { "isEqual:", "equals", "Z", 0x1, NULL },
    { "description", "toString", "Ljava.lang.String;", 0x1, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "chordMap_", NULL, 0x9, "Ljava.util.Map;", &OrgJfugueTheoryChord_chordMap_,  },
    { "rootNote_", NULL, 0x2, "Lorg.jfugue.theory.Note;", NULL,  },
    { "intervals_", NULL, 0x2, "Lorg.jfugue.theory.Intervals;", NULL,  },
    { "inversion_", NULL, 0x2, "I", NULL,  },
    { "MAJOR_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_MAJOR_INTERVALS_,  },
    { "MINOR_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_MINOR_INTERVALS_,  },
    { "DIMINISHED_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_DIMINISHED_INTERVALS_,  },
    { "MAJOR_SEVENTH_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_MAJOR_SEVENTH_INTERVALS_,  },
    { "MINOR_SEVENTH_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_MINOR_SEVENTH_INTERVALS_,  },
    { "DIMINISHED_SEVENTH_INTERVALS_", NULL, 0x19, "Lorg.jfugue.theory.Intervals;", &OrgJfugueTheoryChord_DIMINISHED_SEVENTH_INTERVALS_,  },
    { "OCTAVE_", NULL, 0x19, "B", NULL, .constantValue.asChar = OrgJfugueTheoryChord_OCTAVE },
  };
  static const J2ObjcClassInfo _OrgJfugueTheoryChord = { "Chord", "org.jfugue.theory", NULL, 0x1, 23, methods, 11, fields, 0, NULL};
  return &_OrgJfugueTheoryChord;
}

@end

IOSObjectArray *OrgJfugueTheoryChord_getChordNames() {
  OrgJfugueTheoryChord_init();
  return [((id<JavaUtilSet>) nil_chk([((id<JavaUtilMap>) nil_chk(OrgJfugueTheoryChord_chordMap_)) keySet])) toArrayWithNSObjectArray:[IOSObjectArray newArrayWithLength:0 type:[IOSClass classWithClass:[NSString class]]]];
}

void OrgJfugueTheoryChord_addChordWithNSString_withNSString_(NSString *name, NSString *intervalPattern) {
  OrgJfugueTheoryChord_init();
  OrgJfugueTheoryChord_addChordWithNSString_withOrgJfugueTheoryIntervals_(name, [[OrgJfugueTheoryIntervals alloc] initWithNSString:intervalPattern]);
}

void OrgJfugueTheoryChord_addChordWithNSString_withOrgJfugueTheoryIntervals_(NSString *name, OrgJfugueTheoryIntervals *intervalPattern) {
  OrgJfugueTheoryChord_init();
  (void) [((id<JavaUtilMap>) nil_chk(OrgJfugueTheoryChord_chordMap_)) putWithId:name withId:intervalPattern];
}

OrgJfugueTheoryIntervals *OrgJfugueTheoryChord_getIntervalsWithNSString_(NSString *name) {
  OrgJfugueTheoryChord_init();
  return [((id<JavaUtilMap>) nil_chk(OrgJfugueTheoryChord_chordMap_)) getWithId:name];
}

void OrgJfugueTheoryChord_removeChordWithNSString_(NSString *name) {
  OrgJfugueTheoryChord_init();
  (void) [((id<JavaUtilMap>) nil_chk(OrgJfugueTheoryChord_chordMap_)) removeWithId:name];
}

@implementation OrgJfugueTheoryChord_$1

- (jint)compareWithId:(NSString *)s1
               withId:(NSString *)s2 {
  jint result = OrgJfugueTheoryChord_$1_compareLengthWithNSString_withNSString_(self, s1, s2);
  if (result == 0) {
    result = [((NSString *) nil_chk(s1)) compareToWithId:s2];
  }
  return result;
}

- (jint)compareLengthWithNSString:(NSString *)s1
                     withNSString:(NSString *)s2 {
  return OrgJfugueTheoryChord_$1_compareLengthWithNSString_withNSString_(self, s1, s2);
}

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "compareWithNSString:withNSString:", "compare", "I", 0x1, NULL },
    { "compareLengthWithNSString:withNSString:", "compareLength", "I", 0x2, NULL },
    { "init", NULL, NULL, 0x0, NULL },
  };
  static const J2ObjcClassInfo _OrgJfugueTheoryChord_$1 = { "$1", "org.jfugue.theory", "Chord", 0x8000, 3, methods, 0, NULL, 0, NULL};
  return &_OrgJfugueTheoryChord_$1;
}

@end

jint OrgJfugueTheoryChord_$1_compareLengthWithNSString_withNSString_(OrgJfugueTheoryChord_$1 *self, NSString *s1, NSString *s2) {
  if (((jint) [((NSString *) nil_chk(s1)) length]) < ((jint) [((NSString *) nil_chk(s2)) length])) {
    return 1;
  }
  else if (((jint) [s1 length]) > ((jint) [s2 length])) {
    return -1;
  }
  else {
    return 0;
  }
}
