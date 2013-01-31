/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SASource : SADomainObject  {
}

@property(copy) NSString * accountIdentifier;
@property(copy) NSString * accountName;
@property(copy) NSString * domainIdentifier;
@property(copy) NSNumber * remote;

+ (id)sourceWithDictionary:(id)arg1 context:(id)arg2;
+ (id)source;

- (id)accountIdentifier;
- (void)setAccountIdentifier:(id)arg1;
- (void)setRemote:(id)arg1;
- (id)remote;
- (void)setDomainIdentifier:(id)arg1;
- (id)domainIdentifier;
- (void)updateUsingSet:(id)arg1 add:(id)arg2 remove:(id)arg3;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAccountName:(id)arg1;
- (id)accountName;

@end
