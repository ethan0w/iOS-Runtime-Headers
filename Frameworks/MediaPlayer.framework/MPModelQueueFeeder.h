/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPModelQueueFeeder : MPQueueFeeder <MPCQueueBehaviorManaging, MPModelObjectPlaybackItemMetadataDelegate, MPRTCReportingItemSessionContaining, MPShuffleControllerDataSource, MPStoreAVItemDownloadMetadataConsuming> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSHashTable * _activeModelObjectPlaybackItemMetadataInstances;
    NSDictionary * _assetStoreFronts;
    int  _currentRevisionID;
    NSDictionary * _endTimeModifications;
    id /* block */  _finalTracklistLoadingCompletionHandler;
    BOOL  _hasFoundStartItem;
    BOOL  _hasLoadedFinalResponse;
    NSOperationQueue * _operationQueue;
    MPPlaceholderAVItem * _placeholderAVItem;
    MPModelRequest * _request;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    MPModelResponse * _response;
    struct map<unsigned int, MPIdentifierSet *, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, MPIdentifierSet *> > > { 
        struct __tree<std::__1::__value_type<unsigned int, MPIdentifierSet *>, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MPIdentifierSet *>, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::__value_type<unsigned int, MPIdentifierSet *> > > { 
            struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned int, MPIdentifierSet *>, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::__value_type<unsigned int, MPIdentifierSet *>, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    }  _retrievedIndexToIdentifiers;
    NSString * _rtcReportingPlayQueueSourceIdentifier;
    MPShuffleController * _shuffleController;
    _MPModelQueueFeederIdentifier * _startItemIdentifier;
    NSDictionary * _startTimeModifications;
}

@property (nonatomic, readonly) BOOL allowsUserVisibleUpcomingItems;
@property (nonatomic, readonly) BOOL canSeek;
@property (nonatomic, readonly) BOOL canSkipToPreviousItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int playbackMode;
@property (nonatomic, readonly, copy) NSString *rtcReportingPlayQueueSourceIdentifier;
@property (nonatomic, readonly, copy) NSDictionary *rtcReportingSessionAdditionalUserInfo;
@property (readonly) Class superclass;
@property (nonatomic, readonly) BOOL userCanChangeShuffleAndRepeatType;

+ (id)requiredPropertiesForStaticMediaClips;
+ (BOOL)supportsStateRestoration;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_allowsHighQualityMusicStreamingOnCellularDidChangeNotification:(id)arg1;
- (int)_currentPreferredStartIndexWithFinalResponse:(BOOL)arg1;
- (id)_equivalencySourceAdamIDForIdentifierSet:(id)arg1;
- (void)_handleFinalResponseWithPreferredStartIndex:(unsigned int)arg1;
- (BOOL)_hasPlaceholderItemAtIndex:(unsigned int)arg1;
- (id)_identifierSetAtIndex:(unsigned int)arg1;
- (unsigned int)_indexOfItemWithIdentifier:(id)arg1 shouldIgnoreShuffle:(BOOL)arg2;
- (id)_modelObjectAtIndex:(unsigned int)arg1;
- (id)_newModelRequest;
- (id)_playbackItemMetadataForModelObject:(id)arg1;
- (void)_playbackUserDefaultsMusicRepeatTypeDidChangeNotification:(id)arg1;
- (void)_playbackUserDefaultsMusicShuffleTypeDidChangeNotification:(id)arg1;
- (void)_registerNotificationsForResponse:(id)arg1;
- (void)_reloadForInitialRequest;
- (void)_reloadModelRequestForInvalidation;
- (void)_reloadModelRequestWithCompletionHandler:(id /* block */)arg1;
- (void)_responseDidInvalidateNotification:(id)arg1;
- (unsigned int)_songShuffledIndexForIndex:(unsigned int)arg1;
- (void)_unregisterNotificationsForResponse:(id)arg1;
- (void)applyVolumeNormalizationForItem:(id)arg1;
- (id)audioSessionModeForItemAtIndex:(unsigned int)arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)hasValidItemAtIndex:(unsigned int)arg1;
- (id)identifierAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfItemWithIdentifier:(id)arg1;
- (unsigned int)indexOfMediaItem:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (unsigned int)initialPlaybackQueueDepthForStartingIndex:(unsigned int)arg1;
- (Class)itemClass;
- (unsigned int)itemCount;
- (unsigned int)itemCountForShuffleController:(id)arg1;
- (int)itemTypeForIndex:(unsigned int)arg1;
- (id)mediaItemAtIndex:(unsigned int)arg1;
- (id)mediaItemForIdentifier:(id)arg1;
- (void)modelObjectPlaybackItemMetadataWillDeallocate:(id)arg1;
- (id)modelPlayEvent;
- (id)playbackInfoForIdentifier:(id)arg1;
- (BOOL)playerPreparesItemsForPlaybackAsynchronously;
- (int)realRepeatType;
- (int)realShuffleType;
- (void)reloadWithPlaybackContext:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)reloadWithPlaybackContext:(id)arg1 requireFinalTracklist:(BOOL)arg2 completionHandler:(id /* block */)arg3;
- (void)restoreState:(id /* block */)arg1;
- (id)rtcReportingPlayQueueSourceIdentifier;
- (BOOL)shouldReuseQueueFeederForPlaybackContext:(id)arg1;
- (unsigned int)shuffleController:(id)arg1 countOfItemIdentifier:(id)arg2 withMaximumCount:(unsigned int)arg3;
- (id)shuffleController:(id)arg1 identifierForItemAtIndex:(unsigned int)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (void)storeAVItem:(id)arg1 didReceiveResponseAssetDictionary:(id)arg2;
- (BOOL)supportsAddToQueue;

@end
