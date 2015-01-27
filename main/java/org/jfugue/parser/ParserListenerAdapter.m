//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/parser/ParserListenerAdapter.java
//

#include "IOSPrimitiveArray.h"
#include "org/jfugue/parser/ParserListenerAdapter.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Note.h"

@implementation OrgJfugueParserParserListenerAdapter

- (void)beforeParsingStarts {
}

- (void)afterParsingFinished {
}

- (void)onTrackChangedWithByte:(jbyte)track {
}

- (void)onLayerChangedWithByte:(jbyte)layer {
}

- (void)onInstrumentParsedWithByte:(jbyte)instrument {
}

- (void)onTempoChangedWithInt:(jint)tempoBPM {
}

- (void)onKeySignatureParsedWithByte:(jbyte)key
                            withByte:(jbyte)scale_ {
}

- (void)onTimeSignatureParsedWithByte:(jbyte)numerator
                             withByte:(jbyte)denominator {
}

- (void)onBarLineParsedWithLong:(jlong)time {
}

- (void)onTrackBeatTimeBookmarkedWithNSString:(NSString *)timeBookmarkId {
}

- (void)onTrackBeatTimeBookmarkRequestedWithNSString:(NSString *)timeBookmarkId {
}

- (void)onTrackBeatTimeRequestedWithDouble:(jdouble)time {
}

- (void)onPitchWheelParsedWithByte:(jbyte)lsb
                          withByte:(jbyte)msb {
}

- (void)onChannelPressureParsedWithByte:(jbyte)pressure {
}

- (void)onPolyphonicPressureParsedWithByte:(jbyte)key
                                  withByte:(jbyte)pressure {
}

- (void)onSystemExclusiveParsedWithByteArray:(IOSByteArray *)bytes {
}

- (void)onControllerEventParsedWithByte:(jbyte)controller
                               withByte:(jbyte)value {
}

- (void)onLyricParsedWithNSString:(NSString *)lyric {
}

- (void)onMarkerParsedWithNSString:(NSString *)marker {
}

- (void)onFunctionParsedWithNSString:(NSString *)id_
                              withId:(id)message {
}

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note {
}

- (void)onChordParsedWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
}

- (instancetype)init {
  return [super init];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "beforeParsingStarts", NULL, "V", 0x1, NULL },
    { "afterParsingFinished", NULL, "V", 0x1, NULL },
    { "onTrackChangedWithByte:", "onTrackChanged", "V", 0x1, NULL },
    { "onLayerChangedWithByte:", "onLayerChanged", "V", 0x1, NULL },
    { "onInstrumentParsedWithByte:", "onInstrumentParsed", "V", 0x1, NULL },
    { "onTempoChangedWithInt:", "onTempoChanged", "V", 0x1, NULL },
    { "onKeySignatureParsedWithByte:withByte:", "onKeySignatureParsed", "V", 0x1, NULL },
    { "onTimeSignatureParsedWithByte:withByte:", "onTimeSignatureParsed", "V", 0x1, NULL },
    { "onBarLineParsedWithLong:", "onBarLineParsed", "V", 0x1, NULL },
    { "onTrackBeatTimeBookmarkedWithNSString:", "onTrackBeatTimeBookmarked", "V", 0x1, NULL },
    { "onTrackBeatTimeBookmarkRequestedWithNSString:", "onTrackBeatTimeBookmarkRequested", "V", 0x1, NULL },
    { "onTrackBeatTimeRequestedWithDouble:", "onTrackBeatTimeRequested", "V", 0x1, NULL },
    { "onPitchWheelParsedWithByte:withByte:", "onPitchWheelParsed", "V", 0x1, NULL },
    { "onChannelPressureParsedWithByte:", "onChannelPressureParsed", "V", 0x1, NULL },
    { "onPolyphonicPressureParsedWithByte:withByte:", "onPolyphonicPressureParsed", "V", 0x1, NULL },
    { "onSystemExclusiveParsedWithByteArray:", "onSystemExclusiveParsed", "V", 0x81, NULL },
    { "onControllerEventParsedWithByte:withByte:", "onControllerEventParsed", "V", 0x1, NULL },
    { "onLyricParsedWithNSString:", "onLyricParsed", "V", 0x1, NULL },
    { "onMarkerParsedWithNSString:", "onMarkerParsed", "V", 0x1, NULL },
    { "onFunctionParsedWithNSString:withId:", "onFunctionParsed", "V", 0x1, NULL },
    { "onNoteParsedWithOrgJfugueTheoryNote:", "onNoteParsed", "V", 0x1, NULL },
    { "onChordParsedWithOrgJfugueTheoryChord:", "onChordParsed", "V", 0x1, NULL },
    { "init", NULL, NULL, 0x1, NULL },
  };
  static const J2ObjcClassInfo _OrgJfugueParserParserListenerAdapter = { "ParserListenerAdapter", "org.jfugue.parser", NULL, 0x1, 23, methods, 0, NULL, 0, NULL};
  return &_OrgJfugueParserParserListenerAdapter;
}

@end