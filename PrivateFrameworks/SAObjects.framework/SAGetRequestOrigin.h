/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAGetRequestOrigin : SABaseClientBoundCommand  {
}

@property(copy) NSString * desiredAccuracy;
@property(copy) NSNumber * maxAge;
@property(copy) NSNumber * searchTimeout;

+ (id)getRequestOriginWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getRequestOrigin;

- (void)setSearchTimeout:(id)arg1;
- (void)setMaxAge:(id)arg1;
- (id)maxAge;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (void)setDesiredAccuracy:(id)arg1;
- (id)searchTimeout;
- (id)groupIdentifier;
- (id)desiredAccuracy;

@end
