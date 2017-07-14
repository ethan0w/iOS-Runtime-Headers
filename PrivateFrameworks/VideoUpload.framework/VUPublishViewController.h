/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VideoUpload.framework/VideoUpload
 */

@interface VUPublishViewController : UIViewController <UIAlertViewDelegate, UIPickerViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    long long  _HDSize;
    long long  _SDSize;
    NSArray * _accessCells;
    unsigned int  _accessRow;
    UIAlertView * _accountAlert;
    UITableViewCell * _accountCell;
    UIAlertView * _authenticationAlert;
    UIAlertView * _authenticationFailedAlert;
    VUCategoryCell * _categoryCell;
    <VUPublishViewControllerDelegate> * _delegate;
    PLTableViewEditableCell * _descriptionCell;
    float  _descriptionHeight;
    BOOL  _enableHDSection;
    VUFooterContainerView * _footerContainer;
    UIImageView * _headerImageView;
    PLTableViewEditableCell * _optionCells;
    UIPickerView * _picker;
    UIView * _pickerContainer;
    struct { 
        int title; 
        int hd; 
        int tags; 
        int category; 
        int access; 
        int account; 
    }  _sectionIndices;
    int  _selectedOption;
    BOOL  _showHDSection;
    BOOL  _showingPicker;
    UITableView * _tableView;
    NSMutableArray * _tagCells;
    PLTableViewEditableCell * _titleCell;
    BOOL  _viewShrunk;
}

@property (nonatomic) long long HDSize;
@property (nonatomic) long long SDSize;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUPublishViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enableHDSection;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) int selectedOption;
@property (nonatomic) BOOL showHDSection;
@property (readonly) Class superclass;
@property (nonatomic, readonly) VUCategory *videoCategory;
@property (nonatomic, readonly) NSString *videoDescription;
@property (nonatomic, readonly) NSArray *videoTags;
@property (nonatomic, readonly) NSString *videoTitle;

- (void).cxx_destruct;
- (long long)HDSize;
- (long long)SDSize;
- (void)_addNewTagCell;
- (void)_authenticatorFailed:(id)arg1;
- (void)_authenticatorStateChanged:(id)arg1;
- (void)_automaticKeyboardDidHide:(id)arg1;
- (void)_automaticKeyboardDidShow:(id)arg1;
- (void)_cancel;
- (void)_footerFrameDidChangeWithSplitKeyboard:(BOOL)arg1;
- (void)_hidePicker;
- (int)_indexOfBlankTagCellOtherThan:(id)arg1;
- (BOOL)_isAuthenticated;
- (void)_publish;
- (void)_showPicker;
- (void)_shrinkView;
- (void)_termsButtonPressed:(id)arg1;
- (void)_unshrinkView;
- (void)_updateAccountCell;
- (void)_updatePublishButton;
- (id)accessCells;
- (id)accountAlert;
- (id)accountString;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)authReturnKeyPressed:(id)arg1;
- (id)authenticator;
- (id)categories;
- (BOOL)checkParametersAndWarn;
- (void)dealloc;
- (id)delegate;
- (void)editableCell:(id)arg1 textChanged:(id)arg2;
- (void)editableCellDidBeginEditing:(id)arg1;
- (void)editableCellReturnPressed:(id)arg1;
- (void)editableTagCellEndOfTagCharacterPressed:(id)arg1;
- (BOOL)enableHDSection;
- (id)headerLogo;
- (id)init;
- (void)loadView;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)orderOutKeyboard;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (float)pickerView:(id)arg1 rowHeightForComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)resignResponder;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (int)selectedOption;
- (void)setDelegate:(id)arg1;
- (void)setEnableHDSection:(BOOL)arg1;
- (void)setHDSize:(long long)arg1;
- (void)setSDSize:(long long)arg1;
- (void)setShowHDSection:(BOOL)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (BOOL)showHDSection;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)termsOfUseString;
- (id)termsOfUseURL;
- (id)videoCategory;
- (id)videoDescription;
- (id)videoTags;
- (id)videoTitle;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
