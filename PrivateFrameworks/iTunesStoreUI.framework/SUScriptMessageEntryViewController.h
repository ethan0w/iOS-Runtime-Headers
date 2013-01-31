/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class SUScriptFunction, NSString;

@interface SUScriptMessageEntryViewController : SUScriptViewController  {
    SUScriptFunction *_messageChangedFunction;
    SUScriptFunction *_shouldSendMessageFunction;
}

@property(copy) id allowedAttachmentTypes;
@property(retain) id messageChangedFunction;
@property id photoButtonEnabled;
@property id sendButtonEnabled;
@property(copy) NSString * sendButtonTitle;
@property(retain) id shouldSendMessageFunction;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)_shouldSendMessageFunction;
- (id)_messageChangedFunction;
- (id)shouldSendMessageFunction;
- (void)setShouldSendMessageFunction:(id)arg1;
- (void)setMessageChangedFunction:(id)arg1;
- (void)setAllowedAttachmentTypes:(id)arg1;
- (id)sendButtonEnabled;
- (id)photoButtonEnabled;
- (id)messageChangedFunction;
- (id)allowedAttachmentTypes;
- (int)numberOfAttachmentsWithType:(id)arg1;
- (id)_messageEntryViewController;
- (void)setSendButtonTitle:(id)arg1;
- (void)setSendButtonEnabled:(id)arg1;
- (void)setPhotoButtonEnabled:(id)arg1;
- (id)sendButtonTitle;
- (void)clearMessage;
- (id)newNativeViewController;
- (void)setNativeViewController:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (void)focus;

@end
