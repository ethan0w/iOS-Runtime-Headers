/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
 */

@interface PSUIColorScheduleController : PSListController <PSUIDateTimePickerCellDelegate> {
    CBClient * _brightnessClient;
    PSSpecifier * _endTimePickerSpecifier;
    PSSpecifier * _endTimeSpecifier;
    PSSpecifier * _radioGroup;
    PSSpecifier * _scheduleRadioSpecifier;
    PSSpecifier * _selectedTimeSpecifier;
    BOOL  _showingScheduleSpecifiers;
    PSSpecifier * _startTimePickerSpecifier;
    PSSpecifier * _startTimeSpecifier;
    PSSpecifier * _sunsetToSunriseRadioSpecifier;
    NSDateFormatter * _timeFormatter;
    PSSpecifier * _timeGroup;
}

- (void).cxx_destruct;
- (int)blueLightMode;
- (void)datePickerChanged:(id)arg1;
- (id)datePickerForSpecifier:(id)arg1;
- (void)dealloc;
- (id)endTime;
- (void)handleBlueLightStatusChanged:(struct { BOOL x1; BOOL x2; BOOL x3; int x4; struct { struct { int x_1_2_1; int x_1_2_2; } x_5_1_1; struct { int x_2_2_1; int x_2_2_2; } x_5_1_2; } x5; unsigned long x6; }*)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)showPickerSpecifierForSpecifier:(id)arg1;
- (void)showScheduleSpecifiers:(BOOL)arg1 animated:(BOOL)arg2;
- (id)specifiers;
- (id)startTime;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end
