/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDTelemetryController : NSObject

+ (id)sharedInstance;

- (void)didChangeLocalSecret;
- (void)didLockAccount;
- (void)didRemoveLocalSecret;
- (void)didUnlockAccount;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)piggybackAttempt;
- (void)piggybackSuccess;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned int)arg1 didUseRemoteApproval:(BOOL)arg2;
- (void)signInWithUserElectingResetProtectedData;
- (void)signInWithUserSkippingFlow;
- (void)stateMachineFailureDueToSyncFailure;
- (void)stateMachineStartedFromClient:(unsigned int)arg1;

@end
