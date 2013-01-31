/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/AccountSettingsUI.framework/AccountSettingsUI
 */

@class NSString;

@interface AccountSettingsUIAlertConfirmationOptions : NSObject  {
    int _selectedButtonIndex;
    int _keepDataButtonIndex;
    int _mergeDataButtonIndex;
    int _deleteDataButtonIndex;
    int _cancelButtonIndex;
    NSString *_dataclass;
    BOOL _enableAction;
    NSString *_tag;
}

+ (BOOL)isNonDestructiveAction:(id)arg1;
+ (BOOL)isEnableAction:(id)arg1;

- (void)dealloc;
- (id)init;
- (void)setDataclass:(id)arg1;
- (id)userAction;
- (BOOL)userChoiceWillDeleteData;
- (BOOL)userCancelled;
- (void)setupButtonIndexesForActions:(id)arg1;
- (void)setIsEnableAction:(BOOL)arg1;
- (id)tag;
- (void)setTag:(id)arg1;

@end
