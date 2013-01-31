/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/IMDAppleServices.framework/IMDAppleServices
 */

@class NSArray, NSString, NSMutableArray;

@interface IMDAppleRegistrationController : NSObject <IMDAppleSMSRegistrationCenterListener, IMDAppleIDRegistrationCenterListener, IMDAppleIDSRegistrationCenterListener> {
    NSString *_deviceName;
    NSMutableArray *_handlers;
    NSMutableArray *_trackedRegistrations;
    NSMutableArray *_authenticatedRegistrations;
    int _iMessageToken;
    int _faceTimeToken;
}

@property(readonly) NSArray * trackedRegistrations;
@property(readonly) NSArray * authenticatedRegistrations;

+ (id)sharedInstance;
+ (BOOL)systemSupportsRegistrationInfo:(id)arg1;
+ (void)initialize;

- (void)dealloc;
- (id)init;
- (id)authenticatedRegistrations;
- (id)trackedRegistrations;
- (void)_systemConfigurationPrefsChanged;
- (void)removeAuthenticatedRegistration:(id)arg1;
- (void)addAuthenticatedRegistration:(id)arg1;
- (void)stopTrackingRegistration:(id)arg1;
- (void)startTrackingRegistration:(id)arg1;
- (BOOL)validRegistrationStateToMakeCallsForRegistration:(id)arg1;
- (BOOL)validRegistrationStateToAcceptCallsForRegistration:(id)arg1;
- (void)centerNeedsNewIdentification:(id)arg1;
- (void)center:(id)arg1 failedIdentification:(id)arg2 error:(int)arg3;
- (void)center:(id)arg1 succeededIdentification:(id)arg2;
- (void)_checkTechChange;
- (BOOL)unregisterInfo:(id)arg1;
- (void)_notifyRegistrationUpdated:(id)arg1;
- (void)_notifyNeedsNewRegistration;
- (BOOL)_checkPhoneNumberLinksForRegistration:(id)arg1;
- (void)_notifyDeregistrationStarting:(id)arg1;
- (void)_notifyRegistrationStarting:(id)arg1;
- (BOOL)_ensureProfileQueriesAreReadyForRegistratration:(id)arg1;
- (BOOL)_checkRegistrationCompleteSetupBeforeAuthentication:(id)arg1;
- (void)checkPhoneNumberLinkingForRegistration:(id)arg1 againstRegistrations:(id)arg2 requiredRegistrationStatus:(int)arg3;
- (BOOL)registrationSupportedForRegistration:(id)arg1;
- (void)_updateNotifyState;
- (void)_SIMInserted:(id)arg1;
- (void)_technologyChanged:(id)arg1;
- (void)_registrationStatusChanged:(id)arg1;
- (id)potentialLinkForRegistration:(id)arg1;
- (void)_notifyDeregistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyDeregistrationSuccess:(id)arg1;
- (void)_notifyRegistrationFailure:(id)arg1 error:(int)arg2 info:(id)arg3;
- (void)_notifyRegistrationSuccess:(id)arg1;
- (void)center:(id)arg1 succeededDeregistration:(id)arg2;
- (void)center:(id)arg1 failedDeregistration:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededRegistration:(id)arg2;
- (void)center:(id)arg1 failedRegistration:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 succeededProvisioning:(id)arg2;
- (void)center:(id)arg1 failedProvisioning:(id)arg2 error:(int)arg3 info:(id)arg4;
- (BOOL)registerInfo:(id)arg1;
- (void)cancelActionsForRegistrationInfo:(id)arg1;
- (void)center:(id)arg1 succeededCurrentEmailsRequest:(id)arg2 emailInfo:(id)arg3;
- (void)center:(id)arg1 succeededLinkHandlesConfirmation:(id)arg2 emailAddress:(id)arg3;
- (void)center:(id)arg1 succeededAuthentication:(id)arg2;
- (void)center:(id)arg1 failedAuthentication:(id)arg2 error:(int)arg3 info:(id)arg4;
- (void)center:(id)arg1 noteRegistrationRequired:(id)arg2;
- (void)center:(id)arg1 succeededRegionValidation:(id)arg2 regionID:(id)arg3 phoneNumber:(id)arg4 extraContext:(id)arg5 verified:(BOOL)arg6;
- (void)center:(id)arg1 succeededInitialRegionQuery:(id)arg2;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;

@end
