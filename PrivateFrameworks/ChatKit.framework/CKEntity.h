/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class NSString, UIImage;

@interface CKEntity : NSObject  {
    int _addressBookUID;
    int _identifier;
    int _propertyType;
    BOOL _foundABNameForSender;
    BOOL _senderIsVoicemail;
    void *_abRecord;
    unsigned int _addressHash;
    id _contactImageThumbnail;
}

@property(readonly) void* abRecord;
@property int propertyType;
@property int addressBookUID;
@property int identifier;
@property(readonly) BOOL foundABNameForSender;
@property(readonly) BOOL senderIsVoicemail;
@property(readonly) NSString * name;
@property(readonly) NSString * rawAddress;
@property(readonly) NSString * originalAddress;
@property(readonly) NSString * textToneIdentifier;
@property(readonly) NSString * textVibrationIdentifier;
@property(readonly) struct __CFPhoneNumber { }* phoneNumberRef;
@property(readonly) NSString * normalizedRawAddress;
@property(readonly) unsigned int addressHash;
@property(readonly) BOOL hasContactImage;
@property(readonly) UIImage * contactImageThumbnail;

+ (id)copyAllEntities;
+ (id)contactImageThumbnailForMeCard;
+ (void)resetClassCache;

- (void)resetCaches;
- (int)identifier;
- (id)name;
- (void)dealloc;
- (id)init;
- (BOOL)senderIsVoicemail;
- (BOOL)foundABNameForSender;
- (void)setPropertyType:(int)arg1;
- (void)setAddressBookUID:(int)arg1;
- (int)addressBookUID;
- (unsigned int)addressHash;
- (id)normalizedRawAddress;
- (void)setABRecord:(void*)arg1 withIdentifier:(int)arg2;
- (id)textVibrationIdentifier;
- (id)textToneIdentifier;
- (id)originalAddress;
- (struct __CFPhoneNumber { }*)phoneNumberRef;
- (id)rawAddress;
- (id)contactImageThumbnail;
- (BOOL)hasContactImage;
- (void*)abRecord;
- (void)setIdentifier:(int)arg1;
- (int)propertyType;

@end
