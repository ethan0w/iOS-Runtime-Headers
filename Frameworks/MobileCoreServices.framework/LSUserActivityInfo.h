/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
 */

@interface LSUserActivityInfo : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _activityDate;
    NSData * _activityPayload;
    NSData * _activityPayloadOld;
    unsigned int  _changeCount;
    NSString * _dynamicIdentifier;
    NSError * _error;
    NSDictionary * _options;
    NSUUID * _parentUserActivityUUID;
    NSSet * _requiredUserActivityKeys;
    NSData * _streamsData;
    NSString * _title;
    unsigned int  _type;
    NSString * _typeIdentifier;
    NSDictionary * _userInfo;
    NSUUID * _uuid;
    NSURL * _webpageURL;
    BOOL  eligibleForHandoff;
    BOOL  eligibleForPublicIndex;
    BOOL  eligibleForSearch;
    NSUUID * parentUserActivityUUID;
    NSString * subtitle;
}

@property (copy) NSDate *activityDate;
@property (copy) NSData *activityPayload;
@property (copy) NSData *activityPayloadOld;
@property unsigned int changeCount;
@property (copy) NSString *dynamicIdentifier;
@property BOOL eligibleForHandoff;
@property BOOL eligibleForPublicIndex;
@property BOOL eligibleForSearch;
@property (copy) NSError *error;
@property (copy) NSDictionary *options;
@property (copy) NSUUID *parentUserActivityUUID;
@property (copy) NSSet *requiredUserActivityKeys;
@property (copy) NSData *streamsData;
@property (copy) NSString *subtitle;
@property (copy) NSString *title;
@property unsigned int type;
@property (copy) NSString *typeIdentifier;
@property (copy) NSDictionary *userInfo;
@property (copy) NSUUID *uuid;
@property (copy) NSURL *webpageURL;

+ (BOOL)supportsSecureCoding;

- (void)_createUserActivityStrings:(id)arg1 secondaryString:(id)arg2 optionalData:(id)arg3;
- (id)activityDate;
- (id)activityPayload;
- (id)activityPayloadOld;
- (unsigned int)changeCount;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dynamicIdentifier;
- (BOOL)eligibleForHandoff;
- (BOOL)eligibleForPublicIndex;
- (BOOL)eligibleForSearch;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)logString;
- (id)optionalUserActivityData;
- (id)options;
- (id)parentUserActivityUUID;
- (id)requiredUserActivityKeys;
- (id)secondaryUserActivityString;
- (void)setActivityDate:(id)arg1;
- (void)setActivityPayload:(id)arg1;
- (void)setActivityPayloadOld:(id)arg1;
- (void)setChangeCount:(unsigned int)arg1;
- (void)setDynamicIdentifier:(id)arg1;
- (void)setEligibleForHandoff:(BOOL)arg1;
- (void)setEligibleForPublicIndex:(BOOL)arg1;
- (void)setEligibleForSearch:(BOOL)arg1;
- (void)setError:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setParentUserActivityUUID:(id)arg1;
- (void)setRequiredUserActivityKeys:(id)arg1;
- (void)setStreamsData:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setTypeIdentifier:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (void)setUuid:(id)arg1;
- (void)setWebpageURL:(id)arg1;
- (id)statusString;
- (id)streamsData;
- (id)subtitle;
- (id)title;
- (unsigned int)type;
- (id)typeIdentifier;
- (id)userActivityString;
- (id)userInfo;
- (id)uuid;
- (id)webpageURL;

@end
