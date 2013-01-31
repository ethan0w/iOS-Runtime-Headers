/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSArray;

@interface AccountSettingsUIAddTypeController : PSListController  {
    NSArray *_plugins;
    NSArray *_allowedDataclasses;
    BOOL _dontShowSecondLevelOtherAccountTypes;
    BOOL _forceMailSetup;
    NSArray *_preEnabledDataclasses;
    unsigned char originalWifiFlag;
    unsigned char originalCellFlag;
}

@property(retain) NSArray * plugins;
@property(retain) NSArray * allowedDataclasses;
@property(retain) NSArray * preEnabledDataclasses;


- (id)plugins;
- (void)dealloc;
- (id)init;
- (void)handleURL:(id)arg1;
- (id)specifiers;
- (void)forceMailSetup;
- (void)dontShowSecondLevelOtherAccountTypes;
- (void)popOutOfAddControllers;
- (int)numAddControllersInStack;
- (id)specifierForAccountType:(id)arg1;
- (id)preEnabledDataclasses;
- (void)setAllowedDataclasses:(id)arg1;
- (id)allowedDataclasses;
- (void)setPlugins:(id)arg1;
- (void)setPreEnabledDataclasses:(id)arg1;
- (void)finishedAccountSetup;

@end
