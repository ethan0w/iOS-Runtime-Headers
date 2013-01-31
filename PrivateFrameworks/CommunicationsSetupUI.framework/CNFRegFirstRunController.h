/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class NSTimer, UIBarButtonItem, <CNFRegFirstRunDelegate>, IMAccount;

@interface CNFRegFirstRunController : CNFRegListController <CNFRegFirstRunExperience> {
    Class _completionControllerClass;
    BOOL _showingActivityIndicator;
    BOOL _previousHidesBackButton;
    UIBarButtonItem *_previousLeftButton;
    UIBarButtonItem *_previousRightButton;
    <CNFRegFirstRunDelegate> *_delegate;
    UIBarButtonItem *_customRightButton;
    UIBarButtonItem *_customLeftButton;
    NSTimer *_timeoutTimer;
    BOOL _timedOut;
    BOOL _cancelled;
    IMAccount *_account;
}

@property Class completionControllerClass;
@property(retain) UIBarButtonItem * customLeftButton;
@property(retain) UIBarButtonItem * customRightButton;
@property(retain) IMAccount * account;
@property(retain) UIBarButtonItem * previousLeftButton;
@property(retain) UIBarButtonItem * previousRightButton;
@property BOOL previousHidesBackButton;
@property BOOL timedOut;
@property <CNFRegFirstRunDelegate> * delegate;
@property(readonly) int currentAppearanceStyle;
@property BOOL showSplash;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)setCustomRightButton:(id)arg1;
- (id)customRightButton;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_executeDismissBlock:(id)arg1;
- (void)setCellsChecked:(BOOL)arg1;
- (void)_startValidationModeAnimated:(BOOL)arg1;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (id)initWithParentController:(id)arg1 account:(id)arg2;
- (id)customLeftButton;
- (void)_updateControllerState;
- (BOOL)pushCompletionControllerIfPossible;
- (void)_stopValidationModeAnimated:(BOOL)arg1;
- (void)_updateUI;
- (void)_stopActivityIndicatorAnimated:(BOOL)arg1;
- (void)_startValidationModeAnimated:(BOOL)arg1 allowCancel:(BOOL)arg2;
- (id)validationString;
- (void)_stopActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2;
- (BOOL)previousHidesBackButton;
- (id)previousRightButton;
- (id)previousLeftButton;
- (void)_startActivityIndicatorWithTitle:(id)arg1 animated:(BOOL)arg2 allowCancel:(BOOL)arg3;
- (id)_validationModeCancelButton;
- (void)setPreviousHidesBackButton:(BOOL)arg1;
- (void)setPreviousRightButton:(id)arg1;
- (void)setPreviousLeftButton:(id)arg1;
- (void)_cancelValidationMode;
- (void)_leftButtonTapped;
- (void)_handleValidationModeCancelled;
- (void)_rightButtonTapped;
- (BOOL)_hidesBackButton;
- (id)_rightButtonItem;
- (id)_leftButtonItem;
- (id)titleString;
- (void)_stopListeningForReturnKey;
- (void)_startListeningForReturnKey;
- (void)_refreshCurrentState;
- (void)_returnKeyPressed;
- (void)_handleReturnKeyTapped:(id)arg1;
- (Class)completionControllerClass;
- (void)_refreshNavBarAnimated:(BOOL)arg1;
- (BOOL)dismissWithState:(unsigned int)arg1;
- (void)_timeoutFired:(id)arg1;
- (void)_handleTimeout;
- (BOOL)canBeShownFromSuspendedState;
- (void)setCustomLeftButton:(id)arg1;
- (void)setCompletionControllerClass:(Class)arg1;
- (id)initWithRegController:(id)arg1 account:(id)arg2;
- (void)_setupEventHandlers;
- (int)currentAppearanceStyle;
- (id)customTitle;
- (id)initWithRegController:(id)arg1;
- (void)setTimedOut:(BOOL)arg1;
- (BOOL)timedOut;
- (void)_startTimeoutWithDuration:(double)arg1;
- (void)_stopTimeout;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setSpecifier:(id)arg1;

@end
