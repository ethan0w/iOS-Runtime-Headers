/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSString, SSLookupRequest;

@interface SUScriptLookupRequest : SUScriptObject  {
    SSLookupRequest *_request;
}

@property(retain) id authenticatesIfNeeded;
@property(copy) NSString * keyProfile;
@property int localizationStyle;
@property(readonly) int localizationStyleDevice;
@property(readonly) int localizationStyleServer;

+ (id)webScriptNameForKeyName:(id)arg1;
+ (id)webScriptNameForSelector:(SEL)arg1;
+ (void)initialize;

- (int)localizationStyleServer;
- (int)localizationStyleDevice;
- (void)startWithLookupFunction:(id)arg1;
- (int)localizationStyle;
- (id)keyProfile;
- (id)authenticatesIfNeeded;
- (id)valueForRequestParameter:(id)arg1;
- (id)_className;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
- (void)dealloc;
- (id)init;
- (void)setAuthenticatesIfNeeded:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setLocalizationStyle:(int)arg1;
- (void)setKeyProfile:(id)arg1;

@end
