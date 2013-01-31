/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class NSString, NSDictionary;

@interface MSASAlbum : NSObject <NSCopying> {
    NSString *_ownerEmail;
    NSString *_ownerFullName;
    NSString *_ownerFirstName;
    NSString *_ownerLastName;
    NSString *_GUID;
    NSString *_ctag;
    int _relationshipState;
    NSString *_foreignCtag;
    NSString *_URLString;
    NSString *_publicURLString;
    NSDictionary *_metadata;
    id _context;
}

@property(retain) NSString * ownerEmail;
@property(retain) NSString * ownerFullName;
@property(retain) NSString * ownerFirstName;
@property(retain) NSString * ownerLastName;
@property(retain) NSString * GUID;
@property(retain) NSString * ctag;
@property int relationshipState;
@property(retain) NSString * foreignCtag;
@property(retain) NSString * URLString;
@property(retain) NSString * publicURLString;
@property(retain) NSDictionary * metadata;
@property(retain) id context;
@property(readonly) BOOL useForeignCtag;

+ (id)album;
+ (id)albumWithAlbum:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned int)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setGUID:(id)arg1;
- (id)ownerFullName;
- (id)ownerLastName;
- (id)ownerFirstName;
- (id)ownerEmail;
- (int)relationshipState;
- (id)publicURLString;
- (id)GUID;
- (id)metadataValueForKey:(id)arg1;
- (void)setPublicURLString:(id)arg1;
- (BOOL)useForeignCtag;
- (void)setForeignCtag:(id)arg1;
- (id)foreignCtag;
- (void)setRelationshipState:(int)arg1;
- (void)setOwnerLastName:(id)arg1;
- (void)setOwnerFirstName:(id)arg1;
- (void)setOwnerFullName:(id)arg1;
- (id)_ownerFullName;
- (void)setOwnerEmail:(id)arg1;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (void)setURLString:(id)arg1;
- (id)URLString;
- (void)setContext:(id)arg1;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)metadata;
- (void)setMetadata:(id)arg1;

@end
