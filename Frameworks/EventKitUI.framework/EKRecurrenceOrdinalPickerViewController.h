/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate> {
    <EKRecurrenceOrdinalPickerViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <EKRecurrenceOrdinalPickerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIPickerView *pickerView;
@property (readonly) Class superclass;

- (id)_leftColumn;
- (id)_rightColumn;
- (int)dayMask;
- (id)delegate;
- (void)loadView;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (int)ordinalValue;
- (id)pickerView;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)setDelegate:(id)arg1;
- (void)updateFromRecurrenceRule:(id)arg1;
- (void)updateRecurrenceRuleBuilder:(id)arg1;
- (void)viewDidLoad;

@end
