/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString;

@interface SACommandSucceeded : SABaseClientBoundCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;

+ (id)commandSucceededWithDictionary:(id)arg1 context:(id)arg2;
+ (id)commandSucceeded;

- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
