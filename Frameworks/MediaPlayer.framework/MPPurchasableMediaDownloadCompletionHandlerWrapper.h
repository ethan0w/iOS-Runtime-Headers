/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class MPPurchasableMediaDownload;

@interface MPPurchasableMediaDownloadCompletionHandlerWrapper : NSObject <MPPurchasableMediaDownloadObserver> {
    BOOL _hasCalledPurchaseHandler;
    BOOL _hasCalledCompletionHandlerAndCleanedUp;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _completionHandler;


  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _purchaseHandler;

    MPPurchasableMediaDownload *_purchasableMediaDownload;
}

@property(copy) id completionHandler;
@property(copy) id purchaseHandler;
@property(readonly) MPPurchasableMediaDownload * purchasableMediaDownload;


- (void)dealloc;
- (void)setCompletionHandler:(id)arg1;
- (id)completionHandler;
- (id)purchasableMediaDownload;
- (void)setPurchaseHandler:(id)arg1;
- (id)purchaseHandler;
- (id)initWithPurchasableMediaDownload:(id)arg1 purchaseHandler:(id)arg2 completionHandler:(id)arg3;
- (void)purchasableMediaDownloadDidCancel:(id)arg1;
- (void)purchasableMediaDownload:(id)arg1 didPurchase:(id)arg2;
- (void)purchasableMediaDownload:(id)arg1 didFinishWithError:(id)arg2;

@end
