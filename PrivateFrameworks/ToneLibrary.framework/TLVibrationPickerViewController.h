/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@class TLVibratorController, TLVibrationManager, NSTimer, NSIndexPath, <TLVibrationPickerViewControllerDelegate>, NSString, NSArray;

@interface TLVibrationPickerViewController : UITableViewController <TLVibrationPickerTableViewCellDelegate, TLVibrationRecorderViewControllerDelegate> {
    int _alertType;
    BOOL _showsDefault;
    BOOL _showsUserGenerated;
    BOOL _showsNone;
    BOOL _showsNothingSelected;
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _allowsDeletingCurrentSystemVibration;
    NSString *_noneString;
    NSIndexPath *_selectedVibrationIndexPath;
    BOOL _canEnterEditingMode;
    BOOL _vibrating;
    BOOL _viewHasAppearedAtLeastOnce;
    BOOL _isCallingParentViewController;
    BOOL _swipeToDeleteMode;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    TLVibrationManager *_vibrationManager;
    TLVibratorController *_vibratorController;
    <TLVibrationPickerViewControllerDelegate> *_delegate;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
}

@property <TLVibrationPickerViewControllerDelegate> * delegate;
@property(retain) NSString * selectedVibrationIdentifier;
@property(retain) NSString * noneString;
@property BOOL showsNothingSelected;
@property BOOL canEnterEditingMode;
@property BOOL showsEditButtonAtRightSideOfCurrentNavigationController;
@property BOOL allowsDeletingCurrentSystemVibration;
@property(readonly) float contentHeight;
@property(readonly) int _sectionForDefaultGroup;
@property(readonly) int _sectionForSystemGroup;
@property(readonly) int _sectionForUserGeneratedGroup;
@property(readonly) int _sectionForNoneGroup;
@property(setter=_setSelectedVibrationIndexPath:,retain) NSIndexPath * _selectedVibrationIndexPath;
@property(readonly) NSArray * _sortedVibrationIdentifiers;
@property(readonly) NSArray * _sortedUserGeneratedVibrationIdentifiers;
@property(readonly) BOOL _showsOnlyEditableSections;


- (BOOL)showsNothingSelected;
- (void)vibrationPickerTableViewCell:(id)arg1 endedEditingWithText:(id)arg2;
- (id)_adjustedNameForVibrationWithDesiredName:(id)arg1 vibrationIdentifier:(id)arg2;
- (void)_startVibratingWithVibrationIdentifier:(id)arg1;
- (void)stopVibrating;
- (void)_updateSelectionStyleForCell:(id)arg1 indexPath:(id)arg2;
- (id)noneString;
- (id)_navigationItem;
- (id)_sortedVibrationIdentifiers;
- (int)_sectionForSystemGroup;
- (int)_sectionForDefaultGroup;
- (void)setCanEnterEditingMode:(BOOL)arg1;
- (id)_sortedArrayWithVibrationIdentifiers:(id)arg1 allowsDuplicateVibrationNames:(BOOL)arg2;
- (BOOL)canEnterEditingMode;
- (void)_updateEditButtonItemWithAnimation:(BOOL)arg1;
- (id)_nonEditingIndexPathFromActualIndexPath:(id)arg1;
- (id)_actualIndexPathFromNonEditingIndexPath:(id)arg1;
- (int)_sectionForUserGeneratedGroup;
- (BOOL)_showsOnlyEditableSections;
- (void)_processSelectionOfVibrationWithIdentifier:(id)arg1;
- (void)_setSelectedVibrationIndexPath:(id)arg1;
- (id)_indexPathForVibrationWithIdentifier:(id)arg1;
- (void)_setSelectedVibrationIdentifier:(id)arg1 processSelectionOfVibrationIdentifier:(BOOL)arg2;
- (id)_identifierOfVibrationAtIndexPath:(id)arg1;
- (BOOL)showsEditButtonAtRightSideOfCurrentNavigationController;
- (id)_sortedUserGeneratedVibrationIdentifiers;
- (void)_updateEditButtonItem;
- (id)_selectedVibrationIndexPath;
- (int)_sectionForNoneGroup;
- (void)vibrationRecorderViewController:(id)arg1 didFinishRecordingVibrationPattern:(id)arg2 name:(id)arg3;
- (id)initWithAlertType:(int)arg1 showsDefault:(BOOL)arg2 showsUserGenerated:(BOOL)arg3 showsNone:(BOOL)arg4;
- (void)finishedWithPicker;
- (void)setAllowsDeletingCurrentSystemVibration:(BOOL)arg1;
- (BOOL)allowsDeletingCurrentSystemVibration;
- (void)setNoneString:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)dealloc;
- (void)_handleError:(id)arg1;
- (float)contentHeight;
- (id)initWithStyle:(int)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)setShowsNothingSelected:(BOOL)arg1;
- (void)setSelectedVibrationIdentifier:(id)arg1;
- (id)selectedVibrationIdentifier;
- (void)setShowsEditButtonAtRightSideOfCurrentNavigationController:(BOOL)arg1;
- (id)initWithVibrationType:(int)arg1 avController:(id)arg2 showsDefault:(BOOL)arg3 showsUserGenerated:(BOOL)arg4 showsNone:(BOOL)arg5;
- (void)_handleUserGeneratedVibrationsDidChangeNotification;

@end
