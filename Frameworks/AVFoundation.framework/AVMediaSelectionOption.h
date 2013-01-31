/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class NSArray, NSString, AVMediaSelectionOptionInternal, NSLocale;

@interface AVMediaSelectionOption : NSObject <NSCopying> {
    AVMediaSelectionOptionInternal *_mediaSelectionOption;
}

@property(readonly) BOOL mpIsAC3;
@property(readonly) BOOL mpIsSDH;
@property(readonly) NSString * mediaType;
@property(readonly) NSArray * mediaSubTypes;
@property(getter=isPlayable,readonly) BOOL playable;
@property(readonly) NSLocale * locale;
@property(readonly) NSArray * commonMetadata;
@property(readonly) NSArray * availableMetadataFormats;

+ (id)mediaSelectionOptionForAsset:(id)arg1 group:(id)arg2 dictionary:(id)arg3 hasUnderlyingTrack:(BOOL)arg4;

- (id)dictionary;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)commonMetadata;
- (id)mediaType;
- (id)locale;
- (id)group;
- (id)_title;
- (BOOL)isPlayable;
- (id)mediaSubTypes;
- (id)associatedMediaSelectionOptionInMediaSelectionGroup:(id)arg1;
- (BOOL)hasMediaCharacteristic:(id)arg1;
- (id)propertyList;
- (BOOL)_isDesignatedDefault;
- (id)_ancillaryDescription;
- (BOOL)displaysNonForcedSubtitles;
- (id)optionID;
- (id)_groupID;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (BOOL)mpIsAC3;
- (BOOL)mpIsSDH;

@end
