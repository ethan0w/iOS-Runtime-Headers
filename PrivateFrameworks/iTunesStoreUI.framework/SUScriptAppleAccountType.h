/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class ACAccountType, NSString;

@interface SUScriptAppleAccountType : SUScriptObject  {
    ACAccountType *_accountType;
}

@property(readonly) ACAccountType * nativeAccountType;
@property(readonly) id accessGranted;
@property(readonly) NSString * accountTypeDescription;
@property(readonly) NSString * identifier;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)accountTypeDescription;
- (id)accessGranted;
- (id)initWithACAccountType:(id)arg1;
- (id)nativeAccountType;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (id)identifier;
- (void)dealloc;

@end
