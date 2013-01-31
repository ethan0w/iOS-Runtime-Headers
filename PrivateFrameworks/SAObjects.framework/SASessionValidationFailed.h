/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SASessionValidationFailed : SABaseClientBoundCommand  {
}

@property(copy) NSString * errorCode;

+ (id)sessionValidationFailedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)sessionValidationFailed;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setErrorCode:(id)arg1;
- (id)errorCode;
- (id)groupIdentifier;

@end
