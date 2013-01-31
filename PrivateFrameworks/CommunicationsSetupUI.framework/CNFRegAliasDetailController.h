/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class PSSpecifier, NSArray, CNFRegAlias;

@interface CNFRegAliasDetailController : CNFRegListController  {
    CNFRegAlias *_alias;
    PSSpecifier *_removeGroupSpecifier;
    PSSpecifier *_removeButtonSpecifier;
    NSArray *_resendValidationSpecifierGroup;
}

@property(retain) CNFRegAlias * alias;


- (void)dealloc;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)resendValidationEmailTapped:(id)arg1;
- (void)forgetAliasTapped:(id)arg1;
- (void)showRemoveAliasConfirmation;
- (void)_showResendGroup:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRemoveAliasEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_updateUIAnimated:(BOOL)arg1;
- (void)_showAliasValidationError:(id)arg1;
- (id)initWithRegController:(id)arg1 alias:(id)arg2;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_setupEventHandlers;
- (id)specifierList;
- (id)bundle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setAlias:(id)arg1;
- (id)alias;

@end
