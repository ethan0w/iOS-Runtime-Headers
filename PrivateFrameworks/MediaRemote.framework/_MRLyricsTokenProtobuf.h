/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRLyricsTokenProtobuf : PBCodable <NSCopying> {
    NSString * _identifier;
    NSData * _userData;
}

@property (nonatomic, readonly) BOOL hasIdentifier;
@property (nonatomic, readonly) BOOL hasUserData;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSData *userData;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIdentifier;
- (BOOL)hasUserData;
- (unsigned int)hash;
- (id)identifier;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;
- (void)writeTo:(id)arg1;

@end
