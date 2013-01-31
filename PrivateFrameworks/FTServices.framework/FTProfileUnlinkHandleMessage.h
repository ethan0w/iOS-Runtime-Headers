/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString;

@interface FTProfileUnlinkHandleMessage : FTProfileMessage <NSCopying> {
    NSString *_uri;
}

@property(setter=setURI:,copy) NSString * URI;


- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setURI:(id)arg1;
- (id)URI;
- (id)messageBody;
- (id)additionalMessageHeaders;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (id)requiredKeys;
- (id)bagKey;

@end
