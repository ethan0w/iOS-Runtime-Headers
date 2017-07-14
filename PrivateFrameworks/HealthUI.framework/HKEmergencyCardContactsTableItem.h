/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <CNContactPickerDelegate, HKMedicalIDEditorCellEditDelegate, _HKEmergencyContactRelationshipPickerDelegate> {
    NSMutableArray * _cells;
    HKCoreTelephonyUtilities * _coreTelephonyUtilities;
    UITableViewCell * _lastDequeuedAddContactCell;
    _HKEmergencyContact * _selectedContact;
    BOOL  _selectedContactIsBeingAdded;
}

@property (nonatomic, retain) HKCoreTelephonyUtilities *coreTelephonyUtilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addEmergencyContactToData:(id)arg1;
- (void)_configureAddContactCellLayoutForRowIndex:(int)arg1;
- (id)_dequeueAndConfigureContactEditCellForIndex:(int)arg1 inTableView:(id)arg2;
- (id)_dequeueAndConfigureContactViewCellForIndex:(int)arg1;
- (void)_didSelectContact:(id)arg1 property:(id)arg2;
- (id)_emergencyContactWithContact:(id)arg1 property:(id)arg2;
- (void)_presentEmergencyContactDeletionAlertIfNecessary;
- (void)_presentEmergencyContactPicker;
- (BOOL)canEditRowAtIndex:(int)arg1;
- (int)commitEditingStyle:(int)arg1 forRowAtIndex:(int)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2;
- (id)coreTelephonyUtilities;
- (int)editingStyleForRowAtIndex:(int)arg1;
- (void)emergencyContactRelationshipPicker:(id)arg1 didChooseRelationshipNamed:(id)arg2;
- (void)emergencyContactRelationshipPickerDidCancel:(id)arg1;
- (BOOL)hasPresentableData;
- (id)meContactIdentifier;
- (void)medicalIDEditorCellDidChangeValue:(id)arg1;
- (void)medicalIDEditorCellDidTapLabel:(id)arg1;
- (int)numberOfRows;
- (BOOL)refreshFromData;
- (void)setCoreTelephonyUtilities:(id)arg1;
- (BOOL)shouldHighlightRowAtIndex:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndex:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndex:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndex:(int)arg2;
- (id)title;
- (id)titleForFooter;
- (id)titleForHeader;

@end
