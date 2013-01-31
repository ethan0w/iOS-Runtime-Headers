/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class SSPurchase, SSPurchaseRequest, <MPPurchasableMediaDownloadPurchaseOperationDelegate>, NSObject<OS_dispatch_queue>, NSDictionary, NSString;

@interface MPPurchasableMediaDownloadPurchaseOperation : NSOperation <SSDownloadManagerObserver> {
    NSObject<OS_dispatch_queue> *_accessQueue;
    SSPurchase *_purchase;
    SSPurchaseRequest *_purchaseRequest;
    BOOL _backgroundRequest;
    BOOL _shouldPurgeIfNeeded;
    <MPPurchasableMediaDownloadPurchaseOperationDelegate> *_delegate;
    NSDictionary *_purchaseValuesForDownloadProperties;
    int _options;
    NSString *_buyParameters;
    int _purchaseType;
}

@property(getter=isBackgroundRequest) BOOL backgroundRequest;
@property(readonly) NSString * buyParameters;
@property(readonly) <MPPurchasableMediaDownloadPurchaseOperationDelegate> * delegate;
@property(readonly) int options;
@property(readonly) SSPurchase * purchase;
@property(readonly) int purchaseType;
@property(readonly) NSDictionary * purchaseValuesForDownloadProperties;
@property BOOL shouldPurgeIfNeeded;


- (void)main;
- (id)delegate;
- (void)cancel;
- (void)dealloc;
- (int)options;
- (int)purchaseType;
- (id)purchaseValuesForDownloadProperties;
- (BOOL)shouldPurgeIfNeeded;
- (void)setShouldPurgeIfNeeded:(BOOL)arg1;
- (id)purchase;
- (void)setBackgroundRequest:(BOOL)arg1;
- (BOOL)isBackgroundRequest;
- (id)initWithPurchaseType:(int)arg1 options:(int)arg2 buyParameters:(id)arg3 purchaseValuesForDownloadProperties:(id)arg4 delegate:(id)arg5;
- (id)buyParameters;

@end
