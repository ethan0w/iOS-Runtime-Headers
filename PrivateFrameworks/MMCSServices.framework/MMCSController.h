/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MMCSServices.framework/MMCSServices
 */

@class NSMutableDictionary;

@interface MMCSController : NSObject  {
    int _connectionBehavior;
    id _powerAssertion;
    struct __MMCSEngine { } *_engine;
    struct __CFURL { } *_chunkStoreURL;
    unsigned long long _currentItemID;
    NSMutableDictionary *_transfers;
    NSMutableDictionary *_requestIDToBlockMap;
    NSMutableDictionary *_requestIDToTransfersMap;
    NSMutableDictionary *_requestIDToRemainingTransfersMap;
    NSMutableDictionary *_transferToRequestIDsMap;
}

@property int connectionBehavior;
@property(readonly) BOOL isActive;


- (void)dealloc;
- (void)setConnectionBehavior:(int)arg1;
- (void)_itemCompleted:(id)arg1;
- (void)_getItemCompleted:(id)arg1 path:(id)arg2 error:(id)arg3;
- (void)_putItemCompleted:(id)arg1 error:(id)arg2;
- (void)_getItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (void)_putItemUpdated:(id)arg1 progress:(double)arg2 state:(int)arg3 error:(id)arg4;
- (void)putFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(id)arg5;
- (void)getFiles:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 authToken:(id)arg4 completionBlock:(id)arg5;
- (BOOL)unregisterFiles:(id)arg1;
- (BOOL)registerFiles:(id)arg1;
- (id)_registeredTransferForItemID:(unsigned long long)arg1;
- (void)_processCompletedItem:(id)arg1 error:(id)arg2;
- (BOOL)_putTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (void)_setScheduledTransfers:(id)arg1 block:(id)arg2;
- (BOOL)_getTransfers:(id)arg1 requestURL:(id)arg2 requestorID:(id)arg3 token:(id)arg4 error:(id*)arg5;
- (BOOL)_unregisterTransfers:(id)arg1;
- (BOOL)_registerTransfers:(id)arg1;
- (struct __MMCSEngine { }*)_engine;
- (id)_registeredTransferForGUID:(id)arg1;
- (int)connectionBehavior;
- (void)_checkWiFiAssertion;
- (BOOL)isActive;
- (id)_options;

@end
