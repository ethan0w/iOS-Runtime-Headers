/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelPlaybackContext : MPPlaybackContext {
    NSDictionary * _assetStoreFronts;
    NSDictionary * _endTimeModifications;
    MPModelRequest * _request;
    MPIdentifierSet * _startItemIdentifiers;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, copy) NSDictionary *assetStoreFronts;
@property (nonatomic, copy) NSDictionary *endTimeModifications;
@property (nonatomic, copy) MPModelRequest *request;
@property (nonatomic, copy) MPIdentifierSet *startItemIdentifiers;
@property (nonatomic, copy) NSDictionary *startTimeModifications;

+ (Class)queueFeederClass;
+ (id)requiredPropertiesForStaticMediaClips;

- (void).cxx_destruct;
- (id)assetStoreFronts;
- (void)encodeWithCoder:(id)arg1;
- (id)endTimeModifications;
- (id)initWithCoder:(id)arg1;
- (id)request;
- (void)setAssetStoreFronts:(id)arg1;
- (void)setEndTimeModifications:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setStartItemIdentifiers:(id)arg1;
- (void)setStartTimeModifications:(id)arg1;
- (id)startItemIdentifiers;
- (id)startTimeModifications;

@end
