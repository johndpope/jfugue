//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/integration/LilyPondParserListener.java
//

#ifndef _OrgJfugueIntegrationLilyPondParserListener_H_
#define _OrgJfugueIntegrationLilyPondParserListener_H_

@class JavaLangStringBuffer;
@class OrgJfugueIntegrationNoteWindow;
@class OrgJfugueTheoryChord;
@class OrgJfugueTheoryNote;

#import "JreEmulation.h"
#include "org/jfugue/parser/ParserListenerAdapter.h"

@interface OrgJfugueIntegrationLilyPondParserListener : OrgJfugueParserParserListenerAdapter {
 @public
  jboolean closeStaff_;
  jboolean handleChord_;
  jboolean closeChord_;
  jboolean handlePolyphony_;
  jboolean closePolyphony_;
  OrgJfugueIntegrationNoteWindow *noteWindow_;
  JavaLangStringBuffer *lyString_;
  jboolean isDebug_;
}

- (void)logWithNSString:(NSString *)message;

- (void)onTrackChangedWithByte:(jbyte)track;

- (void)onInstrumentParsedWithByte:(jbyte)instrument;

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note2;

- (void)printChordWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord;

- (void)printNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (void)onChordParsedWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord;

- (void)parallelNoteEventWithNSString:(NSString *)musicString
                         withNSString:(NSString *)duration
                         withNSString:(NSString *)rootNote;

- (NSString *)getLyString;

- (void)handleLastNote;

- (void)saveWithBoolean:(jboolean)isLastSave;

- (instancetype)init;

- (void)copyAllFieldsTo:(OrgJfugueIntegrationLilyPondParserListener *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueIntegrationLilyPondParserListener_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueIntegrationLilyPondParserListener, noteWindow_, OrgJfugueIntegrationNoteWindow *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationLilyPondParserListener, lyString_, JavaLangStringBuffer *)

@interface OrgJfugueIntegrationNoteWindow : NSObject {
 @public
  OrgJfugueTheoryNote *currentNote_;
  OrgJfugueTheoryNote *previousNote_;
  OrgJfugueTheoryNote *secondPreviousNote_;
  JavaLangStringBuffer *currentNoteLy_;
  NSString *currentNoteDuration_;
  NSString *previousNoteLy_;
  NSString *previousNoteDuration_;
  NSString *secondPreviousNoteLy_;
  NSString *secondPreviousNoteDuration_;
  jint currentOctave_;
  jchar lastNote_;
  jint lastOctave_;
  jboolean isDebug_;
}

- (void)logWithNSString:(NSString *)message;

- (void)empty;

- (void)emptyAll;

- (void)addNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (void)addChordOctaveWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)rootNote;

- (jint)getOctaveChangeWithChar:(jchar)currentNoteChar;

- (jint)lilypondRelativeDirectionWithChar:(jchar)firstNote
                                 withChar:(jchar)secondNote;

- (jint)jfugueOctaveChangeWithChar:(jchar)firstNote
                          withChar:(jchar)secondNote
                           withInt:(jint)lilypondDirection;

- (void)print;

- (OrgJfugueTheoryNote *)getCurrentNote;

- (OrgJfugueTheoryNote *)getPreviousNote;

- (OrgJfugueTheoryNote *)getSecondPreviousNote;

- (JavaLangStringBuffer *)getCurrentNoteLy;

- (NSString *)getPreviousNoteLy;

- (NSString *)getSecondPreviousNoteLy;

- (NSString *)getCurrentNoteDuration;

- (NSString *)getPreviousNoteDuration;

- (NSString *)getSecondPreviousNoteDuration;

- (jint)getCurrentOctave;

- (void)setCurrentOctaveWithInt:(jint)currentOctave;

- (jchar)getLastNote;

- (void)setLastNoteWithChar:(jchar)lastNote;

- (jint)getLastOctave;

- (void)setLastOctaveWithInt:(jint)lastOctave;

- (instancetype)init;

- (void)copyAllFieldsTo:(OrgJfugueIntegrationNoteWindow *)other;

@end

__attribute__((always_inline)) inline void OrgJfugueIntegrationNoteWindow_init() {}

J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, currentNote_, OrgJfugueTheoryNote *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, previousNote_, OrgJfugueTheoryNote *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, secondPreviousNote_, OrgJfugueTheoryNote *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, currentNoteLy_, JavaLangStringBuffer *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, currentNoteDuration_, NSString *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, previousNoteLy_, NSString *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, previousNoteDuration_, NSString *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, secondPreviousNoteLy_, NSString *)
J2OBJC_FIELD_SETTER(OrgJfugueIntegrationNoteWindow, secondPreviousNoteDuration_, NSString *)

@interface OrgJfugueIntegrationLilyPondNoteDurationHelper : NSObject {
}

+ (NSString *)getDuration2WithNSString:(NSString *)duration;

- (instancetype)init;

@end

__attribute__((always_inline)) inline void OrgJfugueIntegrationLilyPondNoteDurationHelper_init() {}
FOUNDATION_EXPORT NSString *OrgJfugueIntegrationLilyPondNoteDurationHelper_getDuration2WithNSString_(NSString *duration);

#endif // _OrgJfugueIntegrationLilyPondParserListener_H_
