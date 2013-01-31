/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

@class PSSpecifier, NSString, NSArray;

@interface CNFRegLocaleController : CNFRegFirstRunController <CNFRegRegionChooserDelegate> {
    NSString *_currentRegionID;
    NSString *_currentPhoneValue;
    PSSpecifier *_countryFieldSpecifier;
    NSArray *_phoneNumberSpecifiers;
    PSSpecifier *_phoneNumberGroupSpecifier;
    PSSpecifier *_phoneNumberFieldSpecifier;
    NSArray *_regionData;
    BOOL _isLoading;
    BOOL _isError;
    id _regionListChangeObserver;
}

@property(copy) NSString * currentRegionID;
@property(copy) NSString * currentPhoneValue;
@property(retain) NSArray * regionData;


- (void)dealloc;
- (void)setCurrentPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (id)currentPhoneNumberForSpecifier:(id)arg1;
- (id)currentCountryValueForSpecifier:(id)arg1;
- (id)countryList;
- (void)regionChooser:(id)arg1 selectedRegionID:(id)arg2;
- (void)_buildPhoneNumberSpecifierCache:(id)arg1;
- (void)_buildCountryFieldSpecifierCache:(id)arg1;
- (void)_hideCountryPickerAnimated:(BOOL)arg1;
- (void)_showCountryPickerAnimated:(BOOL)arg1;
- (void)hideCountryPicker;
- (void)_failValidationWithError:(id)arg1;
- (void)_finishValidation;
- (id)currentPhoneCompatibleCountryCode;
- (void)_showPhoneField:(BOOL)arg1 animated:(BOOL)arg2;
- (id)_currentRegion;
- (void)_refreshPhoneFieldAnimated:(BOOL)arg1;
- (void)_refreshCountryFieldAnimated:(BOOL)arg1;
- (void)_handleRegionListLoad;
- (void)_stopListeningForRegionListChanges;
- (id)_phoneTextField;
- (void)_loadInitialValues;
- (void)setCurrentPhoneValue:(id)arg1;
- (id)_unformattedPhoneNumber:(id)arg1;
- (id)currentPhoneValue;
- (void)setCurrentRegionID:(id)arg1;
- (id)currentRegionID;
- (void)_startListeningForRegionListChanges;
- (id)regionData;
- (id)controllerForSpecifier:(id)arg1;
- (void)showCountryPicker;
- (void)setRegionData:(id)arg1;
- (void)_loadRegionsIfNecessary;
- (void)_updateControllerState;
- (void)_updateUI;
- (id)validationString;
- (void)_rightButtonTapped;
- (void)_handleTimeout;
- (void)_buildSpecifierCache:(id)arg1;
- (void)_setupEventHandlers;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (id)logName;
- (id)specifierList;
- (id)initWithRegController:(id)arg1;
- (void)_startTimeout;
- (id)bundle;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end
