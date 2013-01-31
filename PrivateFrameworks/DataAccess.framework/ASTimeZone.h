/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSTimeZone;

@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
    int _gmtOffset;
    int _dstOffset;
    struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; } *_standardDate;
    struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; } *_daylightDate;
    NSTimeZone *_wrappedTimeZone;
}

+ (void)_cacheTimeZoneInfo;
+ (void)_fillOutCurrentTimeZoneInfo;
+ (BOOL)_loadDataFromDisk;
+ (id)_tzCachePathCreateIfMissing:(BOOL)arg1;
+ (BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 withTimeZone:(id)arg3;
+ (id)gmt;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)frontingBasicTypes;
+ (BOOL)parsingWithSubItems;
+ (BOOL)parsingLeafNode;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;

- (id)name;
- (id)data;
- (id)description;
- (void)dealloc;
- (id)dictForCoding;
- (id)initWithCodingDict:(id)arg1;
- (struct { long x1; unsigned short x2[32]; struct _SYSTEMTIME { short x_3_1_1; short x_3_1_2; short x_3_1_3; short x_3_1_4; short x_3_1_5; short x_3_1_6; short x_3_1_7; short x_3_1_8; } x3; long x4; unsigned short x5[32]; struct _SYSTEMTIME { short x_6_1_1; short x_6_1_2; short x_6_1_3; short x_6_1_4; short x_6_1_5; short x_6_1_6; short x_6_1_7; short x_6_1_8; } x6; long x7; }*)mallocTZIForDate:(id)arg1;
- (id)initWithTZNameFromCalDB:(id)arg1;
- (struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; })_ruleForDate:(id)arg1;
- (BOOL)_dateIsValidTransitionDate:(id)arg1 inYear:(int)arg2 outDaylightBias:(int*)arg3;
- (id)dateForRule:(struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; }*)arg1 inYear:(int)arg2;
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)arg1 firstTransitionDate:(struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; }*)arg2 secondTransitionDate:(struct _SYSTEMTIME { short x1; short x2; short x3; short x4; short x5; short x6; short x7; short x8; }*)arg3;
- (int)parsingState;
- (id)initWithASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 lengthUntilEndOfTerminator:(int)arg6;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)arg1;
- (int)secondsFromGMTForDate:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 data:(id)arg2;
- (BOOL)isDaylightSavingTimeForDate:(id)arg1;
- (id)abbreviationForDate:(id)arg1;
- (double)daylightSavingTimeOffsetForDate:(id)arg1;

@end
