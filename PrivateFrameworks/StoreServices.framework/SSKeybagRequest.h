/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSNumber;

@interface SSKeybagRequest : SSRequest <SSXPCCoding> {
    NSNumber *_accountID;
    int _options;
}

@property(readonly) NSNumber * accountID;
@property int keybagOptions;


- (id)accountIdentifier;
- (void)dealloc;
- (void)setKeybagOptions:(int)arg1;
- (int)keybagOptions;
- (void)startWithCompletionBlock:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)accountID;
- (id)initWithAccountIdentifier:(id)arg1;

@end
