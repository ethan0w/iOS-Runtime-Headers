/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PairingProximity.framework/PairingProximity
 */

@interface PPNearbyWatchBulletinProvider : NSObject <BBRemoteDataProvider> {
    NSMutableDictionary * _bulletins;
    <PPNearbyWatchBulletinProviderDelegate> * _delegate;
    BBDataProviderProxy * _proxy;
}

@property (nonatomic, retain) NSMutableDictionary *bulletins;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PPNearbyWatchBulletinProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) BBDataProviderProxy *proxy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)applyConnection:(id)arg1;
- (id)bulletins;
- (id)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2;
- (id)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2;
- (id)defaultSectionInfo;
- (id)delegate;
- (void)handleBulletinActionResponse:(id)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1;
- (void)insertBridgeBulletinWithTitle:(id)arg1 message:(id)arg2;
- (void)insertBridgeBulletinWithTitle:(id)arg1 message:(id)arg2 expiringAfter:(double)arg3;
- (void)insertOrUpdateBulletin:(id)arg1;
- (id)proxy;
- (void)removeBulletin:(id)arg1;
- (id)sectionIcon;
- (id)sectionIdentifier;
- (id)sectionParameters;
- (void)setBulletins:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProxy:(id)arg1;
- (id)sortDescriptors;
- (BOOL)syncsBulletinDismissal;

@end
