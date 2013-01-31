/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MailMessageStore, NSMutableDictionary;

@interface MFDeliveryQueue : NSObject <MFDeliveryDelegate, MFContentProtectionObserver> {
    int _state;
    unsigned int _messagesTotal;
    unsigned int _messagesFromActiveAccounts;
    MailMessageStore *_outboxStore;
    NSMutableDictionary *_lastErrorForMessage;
    unsigned int _resetDeliveryQueueWhenDoneWithCurrentMessage : 1;
    unsigned int _suspendRequested : 1;
    unsigned int _isReachable : 1;
    unsigned int _deviceUnlockedAfterBoot : 1;
}

+ (id)sharedDeliveryQueue;

- (void)dealloc;
- (id)init;
- (void)resume:(BOOL)arg1;
- (id)lastErrorForMessage:(id)arg1;
- (int)deliverSynchronously:(id)arg1;
- (BOOL)isProcessing;
- (void)_sendProcessingFinishedNotification:(int)arg1 failed:(int)arg2 playSound:(BOOL)arg3;
- (void)_setErrorForMessage:(id)arg1 error:(id)arg2;
- (void)_setDeliveryFlag:(id)arg1 state:(BOOL)arg2;
- (void)_sendProcessingStartedNotification;
- (void)_sendUnsentCountChangedNotification:(int)arg1 activeAccountsOnly:(int)arg2;
- (void)_updateStateFile:(BOOL)arg1;
- (void)_setErrorForMessageLibraryID:(id)arg1 error:(id)arg2;
- (int)append:(id)arg1 newMessageIDs:(id)arg2;
- (void)_closeOutboxStore:(BOOL)arg1;
- (void)processQueue;
- (void)_processQueueAndPlaySoundOnSuccess:(id)arg1;
- (void)_updateCounts;
- (void)processQueueAndPlaySoundOnSuccess:(BOOL)arg1;
- (void)_messagesAdded:(id)arg1;
- (void)_flagsChanged:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (id)_outboxStore;
- (void)_reachabilityChanged:(id)arg1;
- (void)contentProtectionStateChanged:(int)arg1 previousState:(int)arg2;
- (int)append:(id)arg1;
- (void)setPercentDone:(double)arg1;
- (void)suspend;
- (BOOL)isSuspended;
- (BOOL)isReady;

@end
