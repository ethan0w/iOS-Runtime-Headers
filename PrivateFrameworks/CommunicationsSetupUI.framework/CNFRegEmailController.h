/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSArray, NSTimer, NSString, PSSpecifier;

@interface CNFRegEmailController : CNFRegFirstRunController  {
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    NSString *_pendingAlias;
    BOOL _validating;
}

@property(copy) NSString * pendingAlias;


- (void)dealloc;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)setPendingAlias:(id)arg1 forSpecifier:(id)arg2;
- (id)pendingAliasForSpecifier:(id)arg1;
- (void)emailFieldEmptyStateChanged:(id)arg1 forSpecifier:(id)arg2;
- (void)checkMailTapped:(id)arg1;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (BOOL)showActionSpecifier:(id)arg1 animated:(BOOL)arg2;
- (void)_buildActionGroupSpecifierCache:(id)arg1;
- (void)_buildCheckMailSpecifierCache:(id)arg1;
- (void)_buildEmailSpecifierCache:(id)arg1;
- (void)validationTimeout:(id)arg1;
- (double)timeoutDuration;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (id)pendingAlias;
- (BOOL)emailFieldIsEmpty;
- (void)setPendingAlias:(id)arg1;
- (id)emailTextField;
- (void)startValidationTimeoutTimer;
- (void)nextTapped;
- (void)_showCheckMailButton:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_createSpecifierForAlias:(id)arg1;
- (BOOL)_phoneNumberInAliases:(id)arg1;
- (BOOL)shouldShowAllVettedAliases;
- (void)stopValidationTimeoutTimer;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (void)_updateControllerState;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_updateUI;
- (void)_handleValidationModeCancelled;
- (id)_rightButtonItem;
- (void)_returnKeyPressed;
- (void)setAliasSelected:(id)arg1;
- (id)aliasSpecifiers;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_setupEventHandlers;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)logName;
- (id)specifierList;
- (id)selectedAliases;
- (id)bundle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
