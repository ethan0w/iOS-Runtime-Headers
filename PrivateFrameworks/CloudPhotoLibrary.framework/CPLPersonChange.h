/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLPersonChange : CPLRecordChange <NSCopying, NSSecureCoding> {
    NSData * _contactDescriptor;
    NSString * _displayName;
    NSString * _fullName;
    int  _manualSortOrder;
    int  _personType;
}

@property (nonatomic, copy) NSData *contactDescriptor;
@property (nonatomic, copy) NSDictionary *contactMatchingDictionary;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) int manualSortOrder;
@property (nonatomic) int personType;

+ (BOOL)cplShouldIgnorePropertyForCoding:(id)arg1;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)arg1;

- (void).cxx_destruct;
- (id)contactDescriptor;
- (id)contactMatchingDictionary;
- (id)displayName;
- (id)fullName;
- (int)manualSortOrder;
- (int)personType;
- (void)setContactDescriptor:(id)arg1;
- (void)setContactMatchingDictionary:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setManualSortOrder:(int)arg1;
- (void)setPersonType:(int)arg1;
- (BOOL)supportsDeletion;

@end