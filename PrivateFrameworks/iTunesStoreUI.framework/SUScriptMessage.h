/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSMutableSet, NSString, SUMessage;

@interface SUScriptMessage : SUScriptObject  {
    NSMutableSet *_callbacks;
}

@property(retain) SUMessage * nativeMessage;
@property(copy) NSArray * messageParts;
@property(copy) NSString * postURL;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (id)uploadURLForAttachmentType:(id)arg1;
- (void)setUploadURL:(id)arg1 forAttachmentType:(id)arg2;
- (void)sendWithCompletionHandler:(id)arg1;
- (id)makeMessagePartWithObject:(id)arg1 mimeType:(id)arg2;
- (id)makeMessagePartWithMediaObject:(id)arg1;
- (void)_removeCallback:(id)arg1;
- (void)_addCallback:(id)arg1;
- (id)nativeMessage;
- (id)_newTextMessagePartWithObject:(id)arg1;
- (id)_newPlistMessagePartWithObject:(id)arg1;
- (id)_newJSONMessagePartWithObject:(id)arg1;
- (void)setNativeMessage:(id)arg1;
- (void)setPostURL:(id)arg1;
- (void)setMessageParts:(id)arg1;
- (id)postURL;
- (id)messageParts;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;

@end
