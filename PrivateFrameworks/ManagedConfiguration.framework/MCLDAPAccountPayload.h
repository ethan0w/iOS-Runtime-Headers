/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSString, NSArray;

@interface MCLDAPAccountPayload : MCPayload  {
    NSString *_accountDescription;
    NSString *_hostname;
    NSString *_username;
    NSString *_password;
    BOOL _useSSL;
    NSArray *_searchSettings;
    NSString *_accountPersistentUUID;
}

@property(readonly) NSString * accountDescription;
@property(readonly) NSString * hostname;
@property(retain) NSString * username;
@property(retain) NSString * password;
@property(readonly) NSArray * searchSettings;
@property(readonly) BOOL useSSL;
@property(copy) NSString * accountPersistentUUID;

+ (id)localizedDescriptionForPayloadCount:(unsigned int)arg1;
+ (id)typeStrings;

- (id)hostname;
- (id)description;
- (void).cxx_destruct;
- (id)accountDescription;
- (id)searchSettings;
- (void)setAccountPersistentUUID:(id)arg1;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)accountPersistentUUID;
- (BOOL)useSSL;
- (id)password;
- (id)title;
- (void)setPassword:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;

@end
