//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/tools/StaccatoElementSorter.java
//

#ifndef _OrgStaccatoToolsStaccatoElementSorter_H_
#define _OrgStaccatoToolsStaccatoElementSorter_H_

@class IOSByteArray;
@class OrgJfugueTheoryChord;
@class OrgJfugueTheoryNote;
@protocol JavaUtilMap;
@protocol OrgJfuguePatternPatternProducer;

#import "JreEmulation.h"
#include "org/jfugue/midi/TrackTimeManager.h"
#include "org/jfugue/parser/ParserListener.h"

@interface OrgStaccatoToolsStaccatoElementSorter : OrgJfugueMidiTrackTimeManager < OrgJfugueParserParserListener > {
 @public
  id<JavaUtilMap> timeMap_;
  jdouble initialNoteBeatTime_;
}

- (instancetype)init;

- (id<JavaUtilMap>)getSortedElements;

+ (id<JavaUtilMap>)sortElementsWithOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer;

+ (id<JavaUtilMap>)sortElementsWithNSString:(NSString *)string;

- (void)beforeParsingStarts;

- (void)afterParsingFinished;

- (void)onTrackChangedWithByte:(jbyte)track;

- (void)onLayerChangedWithByte:(jbyte)layer;

- (void)onInstrumentParsedWithByte:(jbyte)instrument;

- (void)onTempoChangedWithInt:(jint)tempoBPM;

- (void)onKeySignatureParsedWithByte:(jbyte)key
                            withByte:(jbyte)scale_;

- (void)onTimeSignatureParsedWithByte:(jbyte)numerator
                             withByte:(jbyte)denominator;

- (void)onBarLineParsedWithLong:(jlong)id_;

- (void)onTrackBeatTimeBookmarkedWithNSString:(NSString *)timeBookmarkId;

- (void)onTrackBeatTimeBookmarkRequestedWithNSString:(NSString *)timeBookmarkId;

- (void)onTrackBeatTimeRequestedWithDouble:(jdouble)time;

- (void)onPitchWheelParsedWithByte:(jbyte)lsb
                          withByte:(jbyte)msb;

- (void)onChannelPressureParsedWithByte:(jbyte)pressure;

- (void)onPolyphonicPressureParsedWithByte:(jbyte)key
                                  withByte:(jbyte)pressure;

- (void)onSystemExclusiveParsedWithByteArray:(IOSByteArray *)bytes;

- (void)onControllerEventParsedWithByte:(jbyte)controller
                               withByte:(jbyte)value;

- (void)onLyricParsedWithNSString:(NSString *)lyric;

- (void)onMarkerParsedWithNSString:(NSString *)marker;

- (void)onFunctionParsedWithNSString:(NSString *)id_
                              withId:(id)message;

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (void)onChordParsedWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord;

- (void)addNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note;

- (void)addToTimeMapWithNSString:(NSString *)string;

- (void)copyAllFieldsTo:(OrgStaccatoToolsStaccatoElementSorter *)other;

@end

__attribute__((always_inline)) inline void OrgStaccatoToolsStaccatoElementSorter_init() {}

J2OBJC_FIELD_SETTER(OrgStaccatoToolsStaccatoElementSorter, timeMap_, id<JavaUtilMap>)
FOUNDATION_EXPORT id<JavaUtilMap> OrgStaccatoToolsStaccatoElementSorter_sortElementsWithOrgJfuguePatternPatternProducer_(id<OrgJfuguePatternPatternProducer> patternProducer);
FOUNDATION_EXPORT id<JavaUtilMap> OrgStaccatoToolsStaccatoElementSorter_sortElementsWithNSString_(NSString *string);

#endif // _OrgStaccatoToolsStaccatoElementSorter_H_
