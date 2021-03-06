//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/staccato/tools/StaccatoElementSorter.java
//

#include "IOSObjectArray.h"
#include "IOSPrimitiveArray.h"
#include "java/lang/Double.h"
#include "java/util/ArrayList.h"
#include "java/util/HashMap.h"
#include "java/util/List.h"
#include "java/util/Map.h"
#include "org/jfugue/midi/TrackTimeManager.h"
#include "org/jfugue/pattern/Pattern.h"
#include "org/jfugue/pattern/PatternProducer.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Note.h"
#include "org/staccato/StaccatoParser.h"
#include "org/staccato/StaccatoUtil.h"
#include "org/staccato/tools/ElementWithTrack.h"
#include "org/staccato/tools/StaccatoElementSorter.h"

__attribute__((unused)) static void OrgStaccatoToolsStaccatoElementSorter_addNoteWithOrgJfugueTheoryNote_(OrgStaccatoToolsStaccatoElementSorter *self, OrgJfugueTheoryNote *note);
__attribute__((unused)) static void OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(OrgStaccatoToolsStaccatoElementSorter *self, NSString *string);

@implementation OrgStaccatoToolsStaccatoElementSorter

- (instancetype)init {
  if (self = [super init]) {
    timeMap_ = [[JavaUtilHashMap alloc] init];
  }
  return self;
}

- (id<JavaUtilMap>)getSortedElements {
  return timeMap_;
}

+ (id<JavaUtilMap>)sortElementsWithOrgJfuguePatternPatternProducer:(id<OrgJfuguePatternPatternProducer>)patternProducer {
  return OrgStaccatoToolsStaccatoElementSorter_sortElementsWithOrgJfuguePatternPatternProducer_(patternProducer);
}

+ (id<JavaUtilMap>)sortElementsWithNSString:(NSString *)string {
  return OrgStaccatoToolsStaccatoElementSorter_sortElementsWithNSString_(string);
}

- (void)beforeParsingStarts {
}

- (void)afterParsingFinished {
}

- (void)onTrackChangedWithByte:(jbyte)track {
  [super setCurrentTrackWithByte:track];
}

- (void)onLayerChangedWithByte:(jbyte)layer {
  [super setCurrentLayerWithByte:layer];
}

- (void)onInstrumentParsedWithByte:(jbyte)instrument {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createInstrumentElementWithByte_(instrument));
}

- (void)onTempoChangedWithInt:(jint)tempoBPM {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createTempoElementWithInt_(tempoBPM));
}

- (void)onKeySignatureParsedWithByte:(jbyte)key
                            withByte:(jbyte)scale_ {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createKeySignatureElementWithByte_withByte_(key, scale_));
}

- (void)onTimeSignatureParsedWithByte:(jbyte)numerator
                             withByte:(jbyte)denominator {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createTimeSignatureElementWithByte_withByte_(numerator, denominator));
}

- (void)onBarLineParsedWithLong:(jlong)id_ {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createBarLineElementWithLong_(id_));
}

- (void)onTrackBeatTimeBookmarkedWithNSString:(NSString *)timeBookmarkId {
  [super addTrackTickTimeBookmarkWithNSString:timeBookmarkId];
}

- (void)onTrackBeatTimeBookmarkRequestedWithNSString:(NSString *)timeBookmarkId {
  jdouble time = [super getTrackBeatTimeBookmarkWithNSString:timeBookmarkId];
  [super setTrackBeatTimeWithDouble:time];
}

- (void)onTrackBeatTimeRequestedWithDouble:(jdouble)time {
  [super setTrackBeatTimeWithDouble:time];
}

- (void)onPitchWheelParsedWithByte:(jbyte)lsb
                          withByte:(jbyte)msb {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createPitchWheelElementWithByte_withByte_(lsb, msb));
}

- (void)onChannelPressureParsedWithByte:(jbyte)pressure {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createChannelPressureElementWithByte_(pressure));
}

- (void)onPolyphonicPressureParsedWithByte:(jbyte)key
                                  withByte:(jbyte)pressure {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createPolyphonicPressureElementWithByte_withByte_(key, pressure));
}

- (void)onSystemExclusiveParsedWithByteArray:(IOSByteArray *)bytes {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createSystemExclusiveElementWithByteArray_(bytes));
}

- (void)onControllerEventParsedWithByte:(jbyte)controller
                               withByte:(jbyte)value {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createControllerEventElementWithByte_withByte_(controller, value));
}

- (void)onLyricParsedWithNSString:(NSString *)lyric {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createLyricElementWithNSString_(lyric));
}

- (void)onMarkerParsedWithNSString:(NSString *)marker {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createMarkerElementWithNSString_(marker));
}

- (void)onFunctionParsedWithNSString:(NSString *)id_
                              withId:(id)message {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createFunctionElementWithNSString_withId_(id_, message));
}

- (void)onNoteParsedWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note {
  OrgStaccatoToolsStaccatoElementSorter_addNoteWithOrgJfugueTheoryNote_(self, note);
}

- (void)onChordParsedWithOrgJfugueTheoryChord:(OrgJfugueTheoryChord *)chord {
  {
    IOSObjectArray *a__ = [((OrgJfugueTheoryChord *) nil_chk(chord)) getNotes];
    OrgJfugueTheoryNote * const *b__ = ((IOSObjectArray *) nil_chk(a__))->buffer_;
    OrgJfugueTheoryNote * const *e__ = b__ + a__->size_;
    while (b__ < e__) {
      OrgJfugueTheoryNote *note = *b__++;
      OrgStaccatoToolsStaccatoElementSorter_addNoteWithOrgJfugueTheoryNote_(self, note);
    }
  }
}

- (void)addNoteWithOrgJfugueTheoryNote:(OrgJfugueTheoryNote *)note {
  OrgStaccatoToolsStaccatoElementSorter_addNoteWithOrgJfugueTheoryNote_(self, note);
}

- (void)addToTimeMapWithNSString:(NSString *)string {
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, string);
}

- (void)copyAllFieldsTo:(OrgStaccatoToolsStaccatoElementSorter *)other {
  [super copyAllFieldsTo:other];
  other->timeMap_ = timeMap_;
  other->initialNoteBeatTime_ = initialNoteBeatTime_;
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "StaccatoElementSorter", NULL, 0x1, NULL },
    { "getSortedElements", NULL, "Ljava.util.Map;", 0x1, NULL },
    { "sortElementsWithOrgJfuguePatternPatternProducer:", "sortElements", "Ljava.util.Map;", 0x9, NULL },
    { "sortElementsWithNSString:", "sortElements", "Ljava.util.Map;", 0x9, NULL },
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
    { "addNoteWithOrgJfugueTheoryNote:", "addNote", "V", 0x2, NULL },
    { "addToTimeMapWithNSString:", "addToTimeMap", "V", 0x2, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "timeMap_", NULL, 0x2, "Ljava.util.Map;", NULL,  },
    { "initialNoteBeatTime_", NULL, 0x2, "D", NULL,  },
  };
  static const J2ObjcClassInfo _OrgStaccatoToolsStaccatoElementSorter = { "StaccatoElementSorter", "org.staccato.tools", NULL, 0x1, 28, methods, 2, fields, 0, NULL};
  return &_OrgStaccatoToolsStaccatoElementSorter;
}

@end

id<JavaUtilMap> OrgStaccatoToolsStaccatoElementSorter_sortElementsWithOrgJfuguePatternPatternProducer_(id<OrgJfuguePatternPatternProducer> patternProducer) {
  OrgStaccatoToolsStaccatoElementSorter_init();
  return OrgStaccatoToolsStaccatoElementSorter_sortElementsWithNSString_([((OrgJfuguePatternPattern *) nil_chk([((id<OrgJfuguePatternPatternProducer>) nil_chk(patternProducer)) getPattern])) description]);
}

id<JavaUtilMap> OrgStaccatoToolsStaccatoElementSorter_sortElementsWithNSString_(NSString *string) {
  OrgStaccatoToolsStaccatoElementSorter_init();
  OrgStaccatoStaccatoParser *parser = [[OrgStaccatoStaccatoParser alloc] init];
  OrgStaccatoToolsStaccatoElementSorter *sorter = [[OrgStaccatoToolsStaccatoElementSorter alloc] init];
  [parser addParserListenerWithOrgJfugueParserParserListener:sorter];
  [parser parseWithNSString:string];
  return [sorter getSortedElements];
}

void OrgStaccatoToolsStaccatoElementSorter_addNoteWithOrgJfugueTheoryNote_(OrgStaccatoToolsStaccatoElementSorter *self, OrgJfugueTheoryNote *note) {
  if ([((OrgJfugueTheoryNote *) nil_chk(note)) getDuration] == 0.0) {
    (void) [note useDefaultDuration];
  }
  if ([note isFirstNote]) {
    self->initialNoteBeatTime_ = [self getTrackBeatTime];
  }
  if ([note isHarmonicNote]) {
    [self setTrackBeatTimeWithDouble:self->initialNoteBeatTime_];
  }
  if ([note isRest]) {
    [self advanceTrackBeatTimeWithDouble:[note getDuration]];
    return;
  }
  OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(self, OrgStaccatoStaccatoUtil_createNoteElementWithOrgJfugueTheoryNote_(note));
  [self advanceTrackBeatTimeWithDouble:[note getDuration]];
}

void OrgStaccatoToolsStaccatoElementSorter_addToTimeMapWithNSString_(OrgStaccatoToolsStaccatoElementSorter *self, NSString *string) {
  OrgStaccatoToolsElementWithTrack *elementWithTrack = [[OrgStaccatoToolsElementWithTrack alloc] initWithByte:[self getCurrentTrack] withByte:[self getCurrentLayer] withNSString:string];
  id<JavaUtilList> elementList = [((id<JavaUtilMap>) nil_chk(self->timeMap_)) getWithId:JavaLangDouble_valueOfWithDouble_([self getTrackBeatTime])];
  if (elementList == nil) {
    elementList = [[JavaUtilArrayList alloc] init];
    (void) [self->timeMap_ putWithId:JavaLangDouble_valueOfWithDouble_([self getTrackBeatTime]) withId:elementList];
  }
  [((id<JavaUtilList>) nil_chk(elementList)) addWithId:elementWithTrack];
}
