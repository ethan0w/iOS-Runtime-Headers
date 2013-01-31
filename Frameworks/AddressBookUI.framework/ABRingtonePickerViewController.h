/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABRingtonePickerViewController : ABPickerViewController  {
    BOOL _isTextToneViewController;
}

@property(readonly) id tonePicker;


- (id)init;
- (void)cancelButtonClicked:(id)arg1;
- (void)_getRotationContentSettings:(struct { BOOL x1; BOOL x2; BOOL x3; BOOL x4; float x5; int x6; }*)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (id)tonePicker;
- (void)ringtoneSaveButtonClicked:(id)arg1;
- (id)initAsRingtoneViewController:(BOOL)arg1;
- (float)ab_heightToFitForViewInPopoverView;

@end
