/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKPendingConversation : CKConversation {
    IMService * _composeSendingService;
    BOOL  _noAvailableServices;
    IMService * _previousSendingService;
}

@property (nonatomic) IMService *composeSendingService;
@property (nonatomic) BOOL noAvailableServices;
@property (nonatomic) IMService *previousSendingService;

- (void).cxx_destruct;
- (id)composeSendingService;
- (id)deviceIndependentID;
- (BOOL)noAvailableServices;
- (id)previousSendingService;
- (void)refreshComposeSendingServiceForAddresses:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)refreshStatusForAddresses:(id)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)sendingService;
- (void)setComposeSendingService:(id)arg1;
- (void)setNoAvailableServices:(BOOL)arg1;
- (void)setPreviousSendingService:(id)arg1;
- (id)uniqueIdentifier;

@end
