/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, SBUIBiometricResource, _SBUIBiometricKitInterfaceDelegate> {
    <SBUIBiometricAuthenticationPolicy> * _authPolicy;
    <SBUIBiometricAuthenticationPolicy> * _authenticationPolicy;
    _SBUIBiometricKitInterface * _biometricInterface;
    NSMutableOrderedSet * _fingerDetectWantedAssertions;
    BOOL  _isAuthenticated;
    BOOL  _isFingerDetectionAllowed;
    BOOL  _isFingerDetectionEnabled;
    BOOL  _isFingerDetectionEnabledThroughBiometricChannel;
    BOOL  _isFingerDetectionEnabledThroughHIDChannel;
    BOOL  _isMatchingAllowed;
    BOOL  _isMatchingEnabled;
    SBFMobileKeyBag * _keybag;
    unsigned int  _lastEvent;
    unsigned int  _matchMode;
    NSMutableOrderedSet * _matchingAssertions;
    NSHashTable * _observers;
    MCProfileConnection * _profileConnection;
    BOOL  _screenIsOn;
    BOOL  _shouldSendFingerOffNotification;
    SBFCredentialSet * _unlockCredentialSet;
    BOOL  _wasMatchingBeforeKeybagStateChangeOccurred;
}

@property (nonatomic, retain) <SBUIBiometricAuthenticationPolicy> *authenticationPolicy;
@property (getter=_biometricKitInterface, setter=_setBiometricKitInterface:, nonatomic, retain) _SBUIBiometricKitInterface *biometricKitInterface;
@property (nonatomic, readonly) unsigned int biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFingerDetectEnabled, nonatomic, readonly) BOOL fingerDetectEnabled;
@property (getter=isFingerOn, nonatomic, readonly) BOOL fingerOn;
@property (nonatomic, readonly) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (nonatomic, readonly) BOOL hasEnrolledFingers;
@property (readonly) unsigned int hash;
@property (getter=_keybagInterface, setter=_setKeybagInterface:, nonatomic, retain) SBFMobileKeyBag *keybagInterface;
@property (nonatomic, readonly) unsigned int matchMode;
@property (getter=isMatchingAllowed, nonatomic, readonly) BOOL matchingAllowed;
@property (getter=isMatchingEnabled, nonatomic, readonly) BOOL matchingEnabled;
@property (getter=_profileConnection, setter=_setProfileConnection:, nonatomic, retain) MCProfileConnection *profileConnection;
@property (readonly) Class superclass;
@property (nonatomic, retain) SBFCredentialSet *unlockCredentialSet;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_activeMatchingAssertion;
- (void)_addFingerDetectionWantedAssertion:(id)arg1;
- (void)_addMatchingAssertion:(id)arg1;
- (id)_biometricKitInterface;
- (void)_deviceWillWake;
- (void)_fingerDetectAllowedStateMayHaveChangedForReason:(id)arg1;
- (id)_keybagInterface;
- (void)_matchingAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_notifyObserversOfEvent:(unsigned int)arg1;
- (id)_profileConnection;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_reallyReallyUpdateMatchMode;
- (void)_reallySetAuthenticated:(BOOL)arg1 keybagState:(id)arg2;
- (void)_reevaluateFingerDetection;
- (void)_reevaluateMatching;
- (void)_removeFingerDetectionWantedAssertion:(id)arg1;
- (void)_removeMatchingAssertion:(id)arg1;
- (void)_setAuthenticated:(BOOL)arg1;
- (void)_setBiometricKitInterface:(id)arg1;
- (void)_setKeybagInterface:(id)arg1;
- (void)_setProfileConnection:(id)arg1;
- (BOOL)_shouldSignpost;
- (void)_stopMatching;
- (void)_updateHandlersForEvent:(unsigned int)arg1;
- (void)_updateMatchMode:(unsigned int)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned int)arg1 reason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)authenticationPolicy;
- (void)biometricKitInterface:(id)arg1 enrolledIdentitiesDidChange:(BOOL)arg2;
- (void)biometricKitInterface:(id)arg1 handleEvent:(unsigned int)arg2;
- (unsigned int)biometricLockoutState;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)hasBiometricAuthenticationCapabilityEnabled;
- (BOOL)hasEnrolledFingers;
- (id)init;
- (BOOL)isFingerDetectEnabled;
- (BOOL)isFingerOn;
- (BOOL)isMatchingAllowed;
- (BOOL)isMatchingEnabled;
- (void)keybag:(id)arg1 extendedStateDidChange:(id)arg2;
- (unsigned int)matchMode;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)noteScreenWillTurnOn;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)setAuthenticationPolicy:(id)arg1;
- (void)setUnlockCredentialSet:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)unlockCredentialSet;

@end
