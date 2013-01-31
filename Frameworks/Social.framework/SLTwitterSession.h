/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@class SLTwitterSessionInternal, NSCache, NSLock, NSMutableArray;

@interface SLTwitterSession : NSObject <XPCProxyTarget> {
    SLTwitterSessionInternal *_internal;
    id _locationInformationChangedBlock;
    id _connectionResetBlock;
    NSCache *_profileImageCache;
    NSLock *_inFlightSessionCallInfosLock;
    NSMutableArray *_inFlightSessionCallInfos;
}

@property(copy) id connectionResetBlock;
@property(copy) id locationInformationChangedBlock;


- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setClientInfo:(id)arg1;
- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)showTwitterSettingsIfNeeded;
- (void)fetchCurrentTCoLength:(id)arg1;
- (void)recordAndIssueCallInfo:(id)arg1;
- (void)completedRemoteProxyCall:(id)arg1;
- (id)emptyCallInfo;
- (id)currentSessionProxy;
- (void)buildTwitterdSession;
- (void)noteTwitterdSessionProxyInterrupted;
- (void)tearDownTwitterdSession;
- (void)setConnectionResetBlock:(id)arg1;
- (id)connectionResetBlock;
- (void)setLocationInformationChangedBlock:(id)arg1;
- (id)locationInformationChangedBlock;
- (void)acceptLocationUpdate:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchGeotagStatus:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;

@end
