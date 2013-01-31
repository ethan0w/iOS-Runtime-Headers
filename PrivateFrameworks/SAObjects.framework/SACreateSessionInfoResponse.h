/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSData;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand  {
}

@property(copy) NSData * sessionInfo;
@property(copy) NSNumber * validityDuration;

+ (id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2;
+ (id)createSessionInfoResponse;

- (void)setValidityDuration:(id)arg1;
- (id)validityDuration;
- (void)setSessionInfo:(id)arg1;
- (id)sessionInfo;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
