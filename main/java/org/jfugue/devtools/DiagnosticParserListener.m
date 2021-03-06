//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/devtools/DiagnosticParserListener.java
//

#include "IOSPrimitiveArray.h"
#include "java/io/PrintStream.h"
#include "java/lang/System.h"
#include "java/util/Arrays.h"
#include "java/util/logging/Logger.h"
#include "org/jfugue/devtools/DiagnosticParserListener.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Intervals.h"
#include "org/jfugue/theory/Note.h"

__attribute__((unused)) static void OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(OrgJfugueDevtoolsDiagnosticParserListener *self, NSString *message);

@implementation OrgJfugueDevtoolsDiagnosticParserListener

- (instancetype)init {
  if (self = [super init]) {
    logger_ = JavaUtilLoggingLogger_getLoggerWithNSString_(@"org.jfugue");
  }
  return self;
}

- (void)printWithNSString:(NSString *)message {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, message);
}

- (void)beforeParsingStarts {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, @"Before parsing starts");
}

- (void)afterParsingFinished {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, @"After parsing finished");
}

- (void)onTrackChangedWithByte:(jbyte)track {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B", @"Track changed to ", track));
}

- (void)onLayerChangedWithByte:(jbyte)layer {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B", @"Layer changed to ", layer));
}

- (void)onInstrumentParsedWithByte:(jbyte)instrument {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B", @"Instrument parsed: ", instrument));
}

- (void)onTempoChangedWithInt:(jint)tempoBPM {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$I$", @"Tempo changed to ", tempoBPM, @" BPM"));
}

- (void)onKeySignatureParsedWithByte:(jbyte)key
                            withByte:(jbyte)scale_ {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$B", @"Key signature parsed: key = ", key, @"  scale = ", scale_));
}

- (void)onTimeSignatureParsedWithByte:(jbyte)numerator
                             withByte:(jbyte)denominator {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$BCB", @"Time signature parsed: ", numerator, '/', denominator));
}

- (void)onBarLineParsedWithLong:(jlong)time {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$J", @"Bar line parsed at time = ", time));
}

- (void)onTrackBeatTimeBookmarkedWithNSString:(NSString *)timeBookmarkId {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$C", @"Track time bookmarked into '", timeBookmarkId, '\''));
}

- (void)onTrackBeatTimeBookmarkRequestedWithNSString:(NSString *)timeBookmarkId {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$C", @"Track time bookmark looked up: '", timeBookmarkId, '\''));
}

- (void)onTrackBeatTimeRequestedWithDouble:(jdouble)time {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$D", @"Track time requested: ", time));
}

- (void)onPitchWheelParsedWithByte:(jbyte)lsb
                          withByte:(jbyte)msb {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$B", @"Pitch wheel parsed, lsb = ", lsb, @"  msb = ", msb));
}

- (void)onChannelPressureParsedWithByte:(jbyte)pressure {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B", @"Channel pressure parsed: ", pressure));
}

- (void)onPolyphonicPressureParsedWithByte:(jbyte)key
                                  withByte:(jbyte)pressure {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$B", @"Polyphonic pressure parsed, key = ", key, @"  pressure = ", pressure));
}

- (void)onSystemExclusiveParsedWithByteArray:(IOSByteArray *)bytes {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$", @"Sysex parsed, bytes = ", JavaUtilArrays_toStringWithByteArray_(bytes)));
}

- (void)onControllerEventParsedWithByte:(jbyte)controller
                               withByte:(jbyte)value {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$B", @"Controller event parsed, controller = ", controller, @"  value = ", value));
}

- (void)onLyricParsedWithNSString:(NSString *)lyric {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$", @"Lyric parsed: ", lyric));
}

- (void)onMarkerParsedWithNSString:(NSString *)marker {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$", @"Marker parsed: ", marker));
}

- (void)onFunctionParsedWithNSString:(NSString *)id_
                              withId:(id)message {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$$$@", @"User event parsed, id = ", id_, @"  message = ", message));
}

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$D$B$B", @"Note parsed: value = ", [((OrgJfugueTheoryNote *) nil_chk(note)) getValue], @"  duration = ", [note getDuration], @"  attack = ", [note getAttackVelocity], @"  decay = ", [note getDecayVelocity]));
}

- (void)onChordParsedWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(self, JreStrcat("$B$$$D$B$B", @"Chord parsed: rootnote = ", [((OrgJfugueTheoryNote *) nil_chk([((OrgJfugueTheoryChord *) nil_chk(chord)) getRoot])) getValue], @"  intervals = ", [((OrgJfugueTheoryIntervals *) nil_chk([chord getIntervals])) description], @"  duration = ", [((OrgJfugueTheoryNote *) nil_chk([chord getRoot])) getDuration], @"  attack = ", [((OrgJfugueTheoryNote *) nil_chk([chord getRoot])) getAttackVelocity], @"  decay = ", [((OrgJfugueTheoryNote *) nil_chk([chord getRoot])) getDecayVelocity]));
}

- (void)copyAllFieldsTo:(OrgJfugueDevtoolsDiagnosticParserListener *)other {
  [super copyAllFieldsTo:other];
  other->logger_ = logger_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "DiagnosticParserListener", NULL, 0x1, NULL },
    { "printWithNSString:", "print", "V", 0x2, NULL },
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
  };
  static const J2ObjcFieldInfo fields[] = {
    { "logger_", NULL, 0x2, "Ljava.util.logging.Logger;", NULL,  },
  };
  static const J2ObjcClassInfo _OrgJfugueDevtoolsDiagnosticParserListener = { "DiagnosticParserListener", "org.jfugue.devtools", NULL, 0x1, 24, methods, 1, fields, 0, NULL};
  return &_OrgJfugueDevtoolsDiagnosticParserListener;
}

@end

void OrgJfugueDevtoolsDiagnosticParserListener_printWithNSString_(OrgJfugueDevtoolsDiagnosticParserListener *self, NSString *message) {
  [((JavaIoPrintStream *) nil_chk(JavaLangSystem_get_out_())) printlnWithNSString:message];
  [((JavaUtilLoggingLogger *) nil_chk(self->logger_)) infoWithNSString:message];
}
