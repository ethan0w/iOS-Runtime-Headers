/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class FTMessageDelivery, FTPushHandler, NSDate, NSMutableArray, NSNumber;

@interface IMDAppleIDSRegistrationCenter : NSObject <IMSystemMonitorListener> {
    NSMutableArray *_queuedRegistrations;
    NSMutableArray *_queuedProvisionings;
    NSMutableArray *_queuedDeregistrations;
    NSMutableArray *_queuedRecoveries;
    NSMutableArray *_currentProvisionings;
    NSMutableArray *_currentRegistrations;
    NSMutableArray *_currentRecoveries;
    NSMutableArray *_handlers;
    BOOL _pendingDequeue;
    BOOL _shouldUseAbsinthe;
    BOOL _isBuildingContext;
    struct NACContextOpaque_ { } *_validationContext;
    BOOL _validationContextDisabled;
    NSDate *_validateContextDate;
    NSNumber *_validateContextTTL;
    NSMutableArray *_validationContextQueue;
    FTMessageDelivery *_httpMessageDelivery;
    FTPushHandler *_pushHandler;
}

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (id)activeRegistrations;
- (BOOL)sendDeregistration:(id)arg1;
- (BOOL)getDependentHandles:(id)arg1 completionBlock:(id)arg2;
- (BOOL)isDeregistering:(id)arg1;
- (BOOL)sendRequest:(id)arg1;
- (void)buildValidationCredentialsIfNeeded;
- (BOOL)sendSignatureRecovery:(id)arg1;
- (BOOL)_hasRegistration:(id)arg1 inQueue:(id)arg2;
- (void)cancelRegisterActionsForRegistrationInfo:(id)arg1;
- (void)_notifyProvisionSuccess:(id)arg1;
- (void)_notifyProvisionFailure:(id)arg1 error:(int)arg2 fatal:(BOOL)arg3 info:(id)arg4;
- (BOOL)provisionRegistration:(id)arg1;
- (void)_notifyDeregistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyDeregistrationSuccess:(id)arg1;
- (void)_sendDeregistration:(id)arg1;
- (void)_notifyRegistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)_dequeuePendingRequestsIfNecessary;
- (void)__queueValidationMessage:(id)arg1;
- (void)__failValidationQueue;
- (void)__flushValidationQueue;
- (void)_sendAbsintheValidationCertRequestIfNeeded;
- (BOOL)_queueBuildingValidationDataIfNecessaryForMessage:(id)arg1;
- (void)_sendSignatureRecovery:(id)arg1;
- (void)_sendRegistration:(id)arg1;
- (void)_sendProvisionRegistration:(id)arg1;
- (void)__cleanupValidationInfo;
- (BOOL)sendRegistration:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (BOOL)isRegistering:(id)arg1;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

@end
