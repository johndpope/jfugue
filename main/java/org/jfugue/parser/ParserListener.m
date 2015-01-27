//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: org/jfugue/parser/ParserListener.java
//

#include "IOSPrimitiveArray.h"
#include "org/jfugue/parser/ParserListener.h"
#include "org/jfugue/theory/Chord.h"
#include "org/jfugue/theory/Note.h"

@interface OrgJfugueParserParserListener : NSObject
@end

@implementation OrgJfugueParserParserListener

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "beforeParsingStarts", NULL, "V", 0x401, NULL },
    { "afterParsingFinished", NULL, "V", 0x401, NULL },
    { "onTrackChangedWithByte:", "onTrackChanged", "V", 0x401, NULL },
    { "onLayerChangedWithByte:", "onLayerChanged", "V", 0x401, NULL },
    { "onInstrumentParsedWithByte:", "onInstrumentParsed", "V", 0x401, NULL },
    { "onTempoChangedWithInt:", "onTempoChanged", "V", 0x401, NULL },
    { "onKeySignatureParsedWithByte:withByte:", "onKeySignatureParsed", "V", 0x401, NULL },
    { "onTimeSignatureParsedWithByte:withByte:", "onTimeSignatureParsed", "V", 0x401, NULL },
    { "onBarLineParsedWithLong:", "onBarLineParsed", "V", 0x401, NULL },
    { "onTrackBeatTimeBookmarkedWithNSString:", "onTrackBeatTimeBookmarked", "V", 0x401, NULL },
    { "onTrackBeatTimeBookmarkRequestedWithNSString:", "onTrackBeatTimeBookmarkRequested", "V", 0x401, NULL },
    { "onTrackBeatTimeRequestedWithDouble:", "onTrackBeatTimeRequested", "V", 0x401, NULL },
    { "onPitchWheelParsedWithByte:withByte:", "onPitchWheelParsed", "V", 0x401, NULL },
    { "onChannelPressureParsedWithByte:", "onChannelPressureParsed", "V", 0x401, NULL },
    { "onPolyphonicPressureParsedWithByte:withByte:", "onPolyphonicPressureParsed", "V", 0x401, NULL },
    { "onSystemExclusiveParsedWithByteArray:", "onSystemExclusiveParsed", "V", 0x481, NULL },
    { "onControllerEventParsedWithByte:withByte:", "onControllerEventParsed", "V", 0x401, NULL },
    { "onLyricParsedWithNSString:", "onLyricParsed", "V", 0x401, NULL },
    { "onMarkerParsedWithNSString:", "onMarkerParsed", "V", 0x401, NULL },
    { "onFunctionParsedWithNSString:withId:", "onFunctionParsed", "V", 0x401, NULL },
    { "onNoteParsedWithOrgJfugueTheoryNote:", "onNoteParsed", "V", 0x401, NULL },
    { "onChordParsedWithOrgJfugueTheoryChord:", "onChordParsed", "V", 0x401, NULL },
  };
  static const J2ObjcClassInfo _OrgJfugueParserParserListener = { "ParserListener", "org.jfugue.parser", NULL, 0x201, 22, methods, 0, NULL, 0, NULL};
  return &_OrgJfugueParserParserListener;
}

@end

