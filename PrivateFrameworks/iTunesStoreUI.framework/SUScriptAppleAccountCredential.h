/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, ACAccountCredential;

@interface SUScriptAppleAccountCredential : SUScriptObject  {
    ACAccountCredential *_credential;
}

@property(readonly) NSString * oauthToken;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (void)initialize;

- (id)initWithACAccountCredential:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)oauthToken;

@end
