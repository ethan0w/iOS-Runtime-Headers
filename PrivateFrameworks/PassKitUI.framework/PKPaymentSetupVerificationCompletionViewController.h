/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentSetupVerificationCompletionViewController : PKPaymentSetupTableViewController <UITextFieldDelegate> {
    UIColor * _editableTextFieldColor;
    int  _mode;
    BOOL  _resignedResponder;
    PKTableHeaderView * _tableHeader;
    BOOL  _verificationCodeAccepted;
    PKActivityTableCell * _verificationCodeCell;
    PKPaymentVerificationController * _verificationController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) PKPaymentVerificationController *verificationController;

- (void).cxx_destruct;
- (void)_disableUI;
- (void)_enableUI;
- (void)_showActivationError:(id)arg1;
- (void)_showAddToWatchOfferForPass:(id)arg1;
- (void)_showCompletedUIForPass:(id)arg1;
- (void)_showValidatedUI;
- (void)_submitVerificationCode;
- (void)_terminateFlow;
- (void)cancel:(id)arg1;
- (void)dealloc;
- (id)initWithVerificationController:(id)arg1 mode:(int)arg2;
- (void)loadView;
- (void)next:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)verificationController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
